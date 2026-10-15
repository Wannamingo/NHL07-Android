// Export actual Ghidra decompiler output with explicit failure records.
// @category Xbox
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.BufferedWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

public class Nhl07ExportC extends GhidraScript {
    public void run() throws Exception {
        Path destination = Path.of(getScriptArgs()[0]);
        Files.createDirectories(destination);
        DecompInterface decompiler = new DecompInterface();
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException("Decompiler open failed");
        int ok = 0, failed = 0, count = 0;
        BufferedWriter source = null;
        try (BufferedWriter index = Files.newBufferedWriter(destination.resolve("functions.tsv"), StandardCharsets.UTF_8)) {
            index.write("address\tname\tstatus\tchunk\n");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                if (function.isExternal()) continue;
                int chunk = count / 250;
                if (count % 250 == 0) {
                    if (source != null) source.close();
                    source = Files.newBufferedWriter(destination.resolve(String.format("ghidra_%04d.c", chunk)), StandardCharsets.UTF_8);
                    source.write("/* Ghidra 12.1.4 pseudocode. Analysis output, not a compilable port. */\n");
                    println("Decompiling " + count + ", successful=" + ok + ", failed=" + failed);
                }
                DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
                boolean success = result.decompileCompleted() && result.getDecompiledFunction() != null;
                source.write("\n/* XBE address: " + function.getEntryPoint() + " */\n");
                if (success) { source.write(result.getDecompiledFunction().getC()); ok++; }
                else { source.write("/* DECOMPILATION FAILED: " + result.getErrorMessage().replace("*/", "* /") + " */\n"); failed++; }
                index.write(function.getEntryPoint() + "\t" + function.getName() + "\t" + (success ? "ok" : "failed") + "\t" + chunk + "\n");
                count++;
            }
        } finally {
            if (source != null) source.close();
            decompiler.dispose();
        }
        Files.writeString(destination.resolve("summary.json"), "{\"decompiled\":" + ok + ",\"failed\":" + failed + ",\"cancelled\":" + monitor.isCancelled() + "}\n");
        println("NHL07_DECOMPILER_RESULT successful=" + ok + " failed=" + failed);
    }
}
