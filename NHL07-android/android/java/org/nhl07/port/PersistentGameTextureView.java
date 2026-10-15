package org.nhl07.port;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.util.AttributeSet;
import android.util.Log;
import android.view.Surface;
import android.view.TextureView;

/**
 * A game output whose producer Surface survives ordinary window detachment.
 *
 * All methods are called on the main/UI thread. The returned Surface is
 * borrowed: MainActivity and JNI must not release it. Native ANativeWindow
 * references still need their normal acquire/release ownership. Final game
 * shutdown calls releaseOwnedSurface(); HOME/onPause must not call it.
 */
public final class PersistentGameTextureView extends TextureView
        implements TextureView.SurfaceTextureListener {
    public interface Callback {
        void onSurfaceReady(Surface surface, boolean reused);
        void onSurfaceUnavailable();
    }

    private static final String TAG = "NHL07TextureSurface";
    private SurfaceTexture retainedTexture;
    private Surface ownedSurface;
    private Callback callback;
    private boolean consumerReady;
    private boolean released;

    public PersistentGameTextureView(Context context) {
        super(context);
        initialize();
    }

    public PersistentGameTextureView(Context context, AttributeSet attributes) {
        super(context, attributes);
        initialize();
    }

    private void initialize() {
        setOpaque(true);
        setSurfaceTextureListener(this);
    }

    public void setCallback(Callback value) {
        callback = value;
        if (callback != null && isSurfaceReady()) callback.onSurfaceReady(ownedSurface, true);
    }

    /** Returns the stable, borrowed producer even while its consumer is hidden. */
    public Surface getOwnedSurface() {
        return !released && ownedSurface != null && ownedSurface.isValid() ? ownedSurface : null;
    }

    /** Resume rendering only after the retained consumer has been reattached. */
    public boolean isSurfaceReady() {
        return consumerReady && isAvailable() && getOwnedSurface() != null;
    }

    @Override public void onSurfaceTextureAvailable(SurfaceTexture available, int width, int height) {
        if (released) return;
        boolean reused = retainedTexture != null && !retainedTexture.isReleased();
        if (reused && available != retainedTexture) {
            // TextureView.setSurfaceTexture releases its current temporary
            // texture itself. Do not release `available` a second time.
            try {
                setSurfaceTexture(retainedTexture);
            } catch (RuntimeException failure) {
                consumerReady = false;
                Log.e(TAG, "Could not reattach retained game texture", failure);
                if (callback != null) callback.onSurfaceUnavailable();
                return;
            }
        } else if (!reused) {
            retainedTexture = available;
            if (ownedSurface != null) ownedSurface.release();
            ownedSurface = new Surface(retainedTexture);
        }
        if (ownedSurface == null || !ownedSurface.isValid()) {
            if (ownedSurface != null) ownedSurface.release();
            ownedSurface = new Surface(retainedTexture);
            reused = false;
        }
        consumerReady = ownedSurface.isValid();
        Log.i(TAG, "Consumer ready=" + consumerReady + " reused=" + reused
                + " size=" + width + "x" + height
                + " texture=" + System.identityHashCode(retainedTexture)
                + " surface=" + System.identityHashCode(ownedSurface));
        if (callback != null) {
            if (consumerReady) callback.onSurfaceReady(ownedSurface, reused);
            else callback.onSurfaceUnavailable();
        }
        invalidate();
    }

    @Override public void onSurfaceTextureSizeChanged(SurfaceTexture texture, int width, int height) {
        // Native rendering sets its own buffer geometry. TextureView scales
        // that producer to the view; never change game resolution here.
        Log.i(TAG, "Consumer view size=" + width + "x" + height);
    }

    @Override public boolean onSurfaceTextureDestroyed(SurfaceTexture texture) {
        consumerReady = false;
        if (released) return true;
        if (retainedTexture == null) retainedTexture = texture;
        boolean keep = texture == retainedTexture;
        Log.i(TAG, "Consumer detached; keep=" + keep
                + " producerValid=" + (ownedSurface != null && ownedSurface.isValid())
                + " texture=" + System.identityHashCode(texture));
        if (callback != null) callback.onSurfaceUnavailable();
        // false transfers final release responsibility to this helper. It
        // preserves the BufferQueue producer used by the native EGL surface.
        return !keep;
    }

    @Override public void onSurfaceTextureUpdated(SurfaceTexture texture) {
    }

    /** Final shutdown only, after the renderer has stopped using this output. */
    public void releaseOwnedSurface() {
        if (released) return;
        released = true;
        consumerReady = false;
        callback = null;
        if (ownedSurface != null) {
            ownedSurface.release();
            ownedSurface = null;
        }
        if (retainedTexture != null) {
            // An attached TextureView will release its current texture when
            // destroyed (our listener now returns true). A detached retained
            // texture belongs entirely to this helper and is released here.
            boolean frameworkOwnsCurrent = isAvailable() && getSurfaceTexture() == retainedTexture;
            if (!frameworkOwnsCurrent && !retainedTexture.isReleased()) retainedTexture.release();
            retainedTexture = null;
        }
        Log.i(TAG, "Final producer ownership released");
    }
}
