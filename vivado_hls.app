<project xmlns="com.autoesl.autopilot.project" name="PINN" top="nnForwardProp">
    <files>
        <file name="../NN_FP_tb.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="PINN/NN_FP.h" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="PINN/NN_FP.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
        <solution name="solution2" status="inactive"/>
    </solutions>
</project>

