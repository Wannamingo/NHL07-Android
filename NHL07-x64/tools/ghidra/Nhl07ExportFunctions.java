// Export independently recovered function boundaries for comparison with the lifter.
// @category Xbox
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.BufferedWriter;
import java.nio.file.Files;
import java.nio.file.Path;

public class Nhl07ExportFunctions extends GhidraScript {
    public void run() throws Exception {
        int count=0;
        try(BufferedWriter output=Files.newBufferedWriter(Path.of(getScriptArgs()[0]))) {
            output.write("[\n");
            FunctionIterator functions=currentProgram.getFunctionManager().getFunctions(true);
            while(functions.hasNext()) {
                Function f=functions.next();
                if(f.isExternal()) continue;
                if(count++>0) output.write(",\n");
                output.write("{\"start\":\"0x"+f.getEntryPoint()+"\",\"end\":\"0x"+
                    Long.toHexString(f.getBody().getMaxAddress().getOffset()+1)+"\",\"body_bytes\":"+
                    f.getBody().getNumAddresses()+",\"ranges\":"+f.getBody().getNumAddressRanges()+"}");
            }
            output.write("\n]\n");
        }
        println("Exported function boundaries: "+count);
    }
}
