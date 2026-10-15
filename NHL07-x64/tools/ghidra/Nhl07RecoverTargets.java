// Recover exact entries observed at runtime; export evidence separately from bulk analysis.
// @category Xbox
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.address.Address;
import java.nio.file.Files;
import java.nio.file.Path;

public class Nhl07RecoverTargets extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path destination = Path.of(args[0]);
        Files.createDirectories(destination);
        DecompInterface decompiler = new DecompInterface();
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException("Open failed");
        try {
            for (int n=1;n<args.length;n++) {
                Address entry = toAddr(Long.parseLong(args[n].replace("0x", ""),16));
                Function f=getFunctionAt(entry);
                if(f==null) {
                    disassemble(entry);
                    f=createFunction(entry, "Recovered_"+entry);
                }
                if(f==null) throw new IllegalStateException("Cannot recover "+entry);
                DecompileResults result=decompiler.decompileFunction(f,60,monitor);
                if(!result.decompileCompleted() || result.getDecompiledFunction()==null)
                    throw new IllegalStateException(result.getErrorMessage());
                Files.writeString(destination.resolve(entry+".c"),
                    "/* Ghidra recovery from an observed runtime call target. Pseudocode only. */\n"+
                    result.getDecompiledFunction().getC());
                Files.writeString(destination.resolve(entry+".json"),"{\"start\":\"0x"+entry+"\",\"end\":\"0x"+
                    Long.toHexString(f.getBody().getMaxAddress().getOffset()+1)+"\",\"body_bytes\":"+
                    f.getBody().getNumAddresses()+",\"ranges\":"+f.getBody().getNumAddressRanges()+"}");
                println("RECOVERED "+entry+" bytes="+f.getBody().getNumAddresses());
            }
        } finally { decompiler.dispose(); }
    }
}
