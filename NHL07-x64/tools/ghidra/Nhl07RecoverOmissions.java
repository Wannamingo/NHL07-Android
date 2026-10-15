// Recover missing call entries in a read-only analysis session, with strict bounds.
// @category Xbox
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.address.Address;
import java.nio.file.Files;
import java.nio.file.Path;

public class Nhl07RecoverOmissions extends GhidraScript {
    public void run() throws Exception {
        String[] args=getScriptArgs();Path destination=Path.of(args[0]);Files.createDirectories(destination);
        DecompInterface decompiler=new DecompInterface();
        if(!decompiler.openProgram(currentProgram))throw new IllegalStateException("Open failed");
        StringBuilder metadata=new StringBuilder("[\n");int accepted=0,rejected=0;
        try {
            for(String line:Files.readAllLines(Path.of(args[1]))) {
                if(line.isBlank())continue;
                Address entry=toAddr(Long.parseLong(line.trim(),16));
                try {
                    Function function=getFunctionAt(entry);
                    if(function==null) {
                        if(getFunctionContaining(entry)!=null){rejected++;continue;}
                        disassemble(entry);function=createFunction(entry,"Omitted_"+entry);
                    }
                    if(function==null||function.getBody().getNumAddressRanges()!=1||function.getBody().getNumAddresses()>4096){rejected++;continue;}
                    Address end=function.getBody().getMaxAddress().add(1);
                    // Retain completed decompilations of switch dispatchers,
                    // even when Ghidra split their case blocks from the body.
                    // Python separately proves jump-table bounds and returns.
                    DecompileResults result=decompiler.decompileFunction(function,2,monitor);
                    if(!result.decompileCompleted()||result.getDecompiledFunction()==null){rejected++;continue;}
                    Files.writeString(destination.resolve(entry+".c"),"/* Original XBE, Ghidra read-only omission recovery. */\n"+result.getDecompiledFunction().getC());
                    if(accepted++>0)metadata.append(",\n");
                    metadata.append("{\"start\":\"0x").append(entry).append("\",\"end\":\"0x").append(Long.toHexString(end.getOffset()))
                        .append("\",\"body_bytes\":").append(function.getBody().getNumAddresses()).append(",\"ranges\":1}");
                    println("OMISSION "+entry+" bytes="+function.getBody().getNumAddresses());
                }catch(Exception error){rejected++;println("OMISSION_REJECT "+entry+" "+error.getClass().getSimpleName());}
            }
        }finally{decompiler.dispose();}
        Files.writeString(destination.resolve("functions.json"),metadata.append("\n]\n").toString());
        println("OMISSIONS accepted="+accepted+" rejected="+rejected);
    }
}
