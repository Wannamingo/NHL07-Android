// Map the supplied XBE sections at their original virtual addresses.
// @category Xbox
import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;
import java.io.ByteArrayInputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.Set;

public class Nhl07LoadXbe extends GhidraScript {
    private byte[] data;
    private long u32(int offset) {
        return Integer.toUnsignedLong(ByteBuffer.wrap(data, offset, 4)
            .order(ByteOrder.LITTLE_ENDIAN).getInt());
    }
    public void run() throws Exception {
        data = Files.readAllBytes(Path.of(getScriptArgs()[0]));
        if (data[0] != 'X' || data[1] != 'B' || data[2] != 'E' || data[3] != 'H')
            throw new IllegalArgumentException("Not an XBE");
        long base = u32(0x104);
        long entry = u32(0x128) ^ 0xA8FC57ABL;
        for (MemoryBlock block : currentProgram.getMemory().getBlocks())
            currentProgram.getMemory().removeBlock(block, monitor);
        currentProgram.setImageBase(toAddr(base), true);
        MemoryBlock header = currentProgram.getMemory().createInitializedBlock(
            "XBE_HEADER", toAddr(base), new ByteArrayInputStream(data, 0, (int)u32(0x108)),
            u32(0x108), monitor, false);
        header.setRead(true); header.setWrite(false); header.setExecute(false);
        Set<String> code = Set.of(".text", "DSOUND", "XNET", "XONLINE", "XGRPH", "D3D", "D3DX", "XPP", "DOLBY");
        int count = (int)u32(0x11c);
        int table = (int)(u32(0x120) - base);
        for (int i = 0; i < count; i++) {
            int offset = table + i * 56;
            long flags = u32(offset), va = u32(offset + 4);
            int size = (int)u32(offset + 8), raw = (int)u32(offset + 12);
            int rawSize = (int)u32(offset + 16), nameOffset = (int)(u32(offset + 20) - base);
            int end = nameOffset;
            while (data[end] != 0) end++;
            String name = new String(data, nameOffset, end - nameOffset, java.nio.charset.StandardCharsets.US_ASCII);
            byte[] bytes = new byte[size];
            System.arraycopy(data, raw, bytes, 0, rawSize);
            MemoryBlock block = currentProgram.getMemory().createInitializedBlock(
                name, toAddr(va), new ByteArrayInputStream(bytes), size, monitor, false);
            block.setRead(true); block.setWrite((flags & 1) != 0); block.setExecute(code.contains(name));
            println(name + " @ " + Long.toHexString(va) + ", bytes=" + size + ", executable=" + code.contains(name));
        }
        currentProgram.getSymbolTable().addExternalEntryPoint(toAddr(entry));
        createLabel(toAddr(entry), "NHL07_XbeEntry", true, SourceType.ANALYSIS);
        disassemble(toAddr(entry));
        createFunction(toAddr(entry), "NHL07_XbeEntry");
        println("NHL 07 mapped. Entry=" + Long.toHexString(entry));
    }
}
