**********************************************************************
** Visual Studio 2022 Developer PowerShell v17.14.5
** Copyright (c) 2025 Microsoft Corporation
**********************************************************************
PS C:\Users\0ANew\source\repos> PowerShell  vs 2022
vs : The term 'vs' is not recognized as the name of a cmdlet, function, script file, or operable program. Check the
spelling of the name, or if a path was included, verify that the path is correct and try again.
At line:1 char:1
+ vs 2022
+ ~~
    + CategoryInfo          : ObjectNotFound: (vs:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

PS C:\Users\0ANew\source\repos> # กำหนดโฟลเดอรตนทางทตองการสแกน (เชน D:\0newtosell\Snowman)
PS C:\Users\0ANew\source\repos> $root = "E:\ProjectTry\capstone6"
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos> # เลอก generator, architecture และ config
PS C:\Users\0ANew\source\repos> $generator = "Visual Studio 17 2022"
PS C:\Users\0ANew\source\repos> $arch      = "x64"
PS C:\Users\0ANew\source\repos> $config    = "Release"
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos> # สแกนหา CMakeLists.txt ทงหมด
PS C:\Users\0ANew\source\repos> Get-ChildItem -Path $root -Filter CMakeLists.txt -Recurse | ForEach-Object {
>>     $srcDir   = $_.Directory.FullName
>>     $buildDir = Join-Path $srcDir "build"
>>
>>     Write-Host "==> Found CMakeLists in: $srcDir" -ForegroundColor Cyan
>>
>>     # สรางโฟลเดอร build ถายงไมม
>>     if (-not (Test-Path $buildDir)) {
>>         New-Item -ItemType Directory -Path $buildDir | Out-Null
>>     }
>>
>>     # 1) Configure / Generate
>>     cmake `
>>       -S "$srcDir" `
>>       -B "$buildDir" `
>>       -G "$generator" `
>>       -A $arch `
>>       -DCMAKE_BUILD_TYPE=$config `
>>       -DSNOWMAN_BUILD_GUI=OFF `
>>       -DSNOWMAN_BUILD_TESTS=OFF
>>
>>     # 2) Build Release
>>     cmake --build "$buildDir" --config $config -- /maxcpucount
>>
>>     Write-Host "==> Built project in: $buildDir (`$config`)" -ForegroundColor Green
>> }
==> Found CMakeLists in: E:\ProjectTry\capstone6
-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- The C compiler identification is MSVC 19.44.35209.0
-- The CXX compiler identification is MSVC 19.44.35209.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Performing Test SUPPORTS_MU
-- Performing Test SUPPORTS_MU - Failed
-- Performing Test SUPPORTS_SHADOWING
-- Performing Test SUPPORTS_SHADOWING - Failed
-- Performing Test SUPPORTS_SUNINIT
-- Performing Test SUPPORTS_SUNINIT - Failed
Enabling CAPSTONE_ARM_SUPPORT
Enabling CAPSTONE_AARCH64_SUPPORT
Enabling CAPSTONE_M68K_SUPPORT
Enabling CAPSTONE_MIPS_SUPPORT
Enabling CAPSTONE_PPC_SUPPORT
Enabling CAPSTONE_SPARC_SUPPORT
Enabling CAPSTONE_SYSTEMZ_SUPPORT
Enabling CAPSTONE_XCORE_SUPPORT
Enabling CAPSTONE_X86_SUPPORT
Enabling CAPSTONE_TMS320C64X_SUPPORT
Enabling CAPSTONE_M680X_SUPPORT
Enabling CAPSTONE_EVM_SUPPORT
Enabling CAPSTONE_MOS65XX_SUPPORT
Enabling CAPSTONE_WASM_SUPPORT
Enabling CAPSTONE_BPF_SUPPORT
Enabling CAPSTONE_RISCV_SUPPORT
Enabling CAPSTONE_SH_SUPPORT
Enabling CAPSTONE_TRICORE_SUPPORT
Enabling CAPSTONE_ALPHA_SUPPORT
Enabling CAPSTONE_HPPA_SUPPORT
Enabling CAPSTONE_LOONGARCH_SUPPORT
Enabling CAPSTONE_XTENSA_SUPPORT
-- Configuring done (3.0s)
-- Generating done (0.1s)
CMake Warning:
  Manually-specified variables were not used by the project:

    SNOWMAN_BUILD_GUI
    SNOWMAN_BUILD_TESTS


-- Build files have been written to: E:/ProjectTry/capstone6/build
MSBuild version 17.14.10+8b8e13593 for .NET Framework

  1>Checking Build System
  Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
  cs.c
  Mapping.c
  MCInst.c
  MCInstrDesc.c
  MCInstPrinter.c
  MCRegisterInfo.c
  SStream.c
  utils.c
  ARMBaseInfo.c
  ARMDisassembler.c
  ARMDisassemblerExtension.c
  ARMInstPrinter.c
  ARMMapping.c
E:\ProjectTry\capstone6\arch\ARM\ARMMapping.c(619,19): warning C5287: operands are different enum types 'arm_op_type' a
nd 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\ARM\ARMMapping.c(621,24): warning C5287: operands are different enum types 'arm_op_type' a
nd 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  ARMModule.c
  AArch64BaseInfo.c
  AArch64Disassembler.c
E:\ProjectTry\capstone6\arch\AArch64\AArch64Disassembler.c(1948,53): warning C4133: 'function': incompatible types - fr
om 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Disassembler.c(1973,53): warning C4133: 'function': incompatible types - fr
om 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  AArch64DisassemblerExtension.c
  AArch64InstPrinter.c
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(727,48): warning C4133: 'function': incompatible types - from
 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(754,26): warning C4133: 'function': incompatible types - from
 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(776,26): warning C4133: 'function': incompatible types - from
 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(798,17): warning C4133: 'function': incompatible types - from
 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(867,17): warning C4133: 'function': incompatible types - from
 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(1456,1): warning C4133: 'function': incompatible types - from
 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(1457,1): warning C4133: 'function': incompatible types - from
 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2154,36): warning C4133: 'function': incompatible types - fro
m 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2248,20): warning C4133: 'function': incompatible types - fro
m 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2252,17): warning C4133: 'function': incompatible types - fro
m 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  AArch64Mapping.c
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(309,48): warning C5287: operands are different enum types 'aarch6
4_op_type' and 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxpr
oj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1559,11): warning C4133: 'function': incompatible types - from 'c
onst aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1696,21): warning C4133: 'function': incompatible types - from 'c
onst aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1704,18): warning C4133: 'function': incompatible types - from 'c
onst aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1306,8): warning C5286: implicit conversion from enum type 'aarch
64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\caps
tone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1310,8): warning C5286: implicit conversion from enum type 'aarch
64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\caps
tone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1314,8): warning C5286: implicit conversion from enum type 'aarch
64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\caps
tone.vcxproj]
E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1944,15): warning C4133: 'function': incompatible types - from 'c
onst aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  AArch64Module.c
  Generating Code...
  Compiling...
  MipsDisassembler.c
  MipsInstPrinter.c
E:\ProjectTry\capstone6\arch\Mips\MipsInstPrinter.c(205,3): warning C4098: 'printJumpOperand': 'void' function returnin
g a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsInstPrinter.c(218,3): warning C4098: 'printBranchOperand': 'void' function return
ing a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  MipsMapping.c
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(389,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(391,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(393,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(395,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(397,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(399,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(401,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(403,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(405,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(407,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(409,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(411,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(413,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(415,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(417,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(419,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(421,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(423,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(425,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(427,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(429,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(431,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(433,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(435,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(437,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(439,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(441,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(445,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(447,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning
a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  MipsModule.c
  PPCDisassembler.c
E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(49,27): warning C5287: operands are different enum types 'ppc_pred
' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  (compiling source file '../arch/PowerPC/PPCDisassembler.c')

E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(55,27): warning C5287: operands are different enum types 'ppc_pred
' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  (compiling source file '../arch/PowerPC/PPCDisassembler.c')

  PPCInstPrinter.c
E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(49,27): warning C5287: operands are different enum types 'ppc_pred
' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  (compiling source file '../arch/PowerPC/PPCInstPrinter.c')

E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(55,27): warning C5287: operands are different enum types 'ppc_pred
' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxproj]
  (compiling source file '../arch/PowerPC/PPCInstPrinter.c')

  PPCMapping.c
  PPCModule.c
  X86Disassembler.c
  X86DisassemblerDecoder.c
  X86IntelInstPrinter.c
  X86InstPrinterCommon.c
  X86Mapping.c
  X86Module.c
  X86ATTInstPrinter.c
  SparcDisassembler.c
  SparcInstPrinter.c
  SparcMapping.c
  SparcModule.c
  SystemZDisassembler.c
  Generating Code...
  Compiling...
  SystemZDisassemblerExtension.c
  SystemZInstPrinter.c
  SystemZMapping.c
  SystemZModule.c
  SystemZMCTargetDesc.c
  XCoreDisassembler.c
  XCoreInstPrinter.c
  XCoreMapping.c
  XCoreModule.c
  M68KDisassembler.c
  M68KInstPrinter.c
  M68KModule.c
  TMS320C64xDisassembler.c
  TMS320C64xInstPrinter.c
  TMS320C64xMapping.c
  TMS320C64xModule.c
  M680XDisassembler.c
  M680XInstPrinter.c
  M680XModule.c
  EVMDisassembler.c
  Generating Code...
  Compiling...
  EVMInstPrinter.c
  EVMMapping.c
  EVMModule.c
  WASMDisassembler.c
  WASMInstPrinter.c
  WASMMapping.c
  WASMModule.c
  MOS65XXModule.c
  MOS65XXDisassembler.c
  BPFDisassembler.c
  BPFInstPrinter.c
  BPFMapping.c
  BPFModule.c
  RISCVDisassembler.c
  RISCVInstPrinter.c
  RISCVMapping.c
  RISCVModule.c
  SHDisassembler.c
  SHInstPrinter.c
  SHModule.c
  Generating Code...
  Compiling...
  TriCoreDisassembler.c
  TriCoreInstPrinter.c
  TriCoreMapping.c
  TriCoreModule.c
  AlphaDisassembler.c
  AlphaInstPrinter.c
  AlphaMapping.c
  AlphaModule.c
  HPPADisassembler.c
  HPPAInstPrinter.c
  HPPAMapping.c
  HPPAModule.c
  LoongArchDisassembler.c
  LoongArchDisassemblerExtension.c
  LoongArchInstPrinter.c
  LoongArchMapping.c
  LoongArchModule.c
  XtensaDisassembler.c
  XtensaInstPrinter.c
  XtensaMapping.c
  Generating Code...
  Compiling...
  XtensaModule.c
  Generating Code...
  capstone.vcxproj -> E:\ProjectTry\capstone6\build\Release\capstone.lib
  Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
  Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
  onefile.c
  cstool.c
  fuzz_disasm.c
  cstool_aarch64.c
  platform.c
  cstool_alpha.c
  Generating Code...
  cstool_arm.c
  cstool_bpf.c
  cstool_evm.c
  cstool_hppa.c
  cstool_loongarch.c
  cstool_m680x.c
  fuzz_disasm.vcxproj -> E:\ProjectTry\capstone6\build\Release\fuzz_disasm.exe
  cstool_m68k.c
  cstool_mips.c
  cstool_mos65xx.c
  cstool_powerpc.c
  cstool_riscv.c
  cstool_sh.c
  cstool_sparc.c
  cstool_systemz.c
  cstool_tms320c64x.c
  cstool_tricore.c
  cstool_wasm.c
  Generating Code...
  Compiling...
  cstool_x86.c
  cstool_xcore.c
  cstool_xtensa.c
  getopt.c
  Generating Code...
  cstool.vcxproj -> E:\ProjectTry\capstone6\build\Release\cstool.exe
  Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
==> Built project in: E:\ProjectTry\capstone6\build ($config)
==> Found CMakeLists in: E:\ProjectTry\capstone6\suite\cstest
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- The C compiler identification is MSVC 19.44.35209.0
-- The CXX compiler identification is MSVC 19.44.35209.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Error at CMakeLists.txt:4 (find_library):
  Could not find libyaml using the following names: libyaml, yaml


-- Configuring incomplete, errors occurred!
MSBuild version 17.14.10+8b8e13593 for .NET Framework
MSBUILD : error MSB1009: Project file does not exist.
Switch: ALL_BUILD.vcxproj
==> Built project in: E:\ProjectTry\capstone6\suite\cstest\build ($config)
==> Found CMakeLists in: E:\ProjectTry\capstone6\suite\cstest\test
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- The C compiler identification is MSVC 19.44.35209.0
-- The CXX compiler identification is MSVC 19.44.35209.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (2.0s)
CMake Error at CMakeLists.txt:12 (add_executable):
  No SOURCES given to target: unit_test


CMake Generate step failed.  Build files cannot be regenerated correctly.
CMake is re-running because E:/ProjectTry/capstone6/suite/cstest/test/build/CMakeFiles/generate.stamp dependency file is missing.
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- Configuring done (0.0s)
CMake Error at CMakeLists.txt:12 (add_executable):
  No SOURCES given to target: unit_test


CMake Generate step failed.  Build files cannot be regenerated correctly.
==> Built project in: E:\ProjectTry\capstone6\suite\cstest\test\build ($config)
==> Found CMakeLists in: E:\ProjectTry\capstone6\tests\integration
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- The C compiler identification is MSVC 19.44.35209.0
-- The CXX compiler identification is MSVC 19.44.35209.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (2.0s)
CMake Error at CMakeLists.txt:39 (add_executable):
  Cannot find source file:

    //test_litbase.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:27 (add_executable):
  No SOURCES given to target: compat_header_build_test


CMake Error at CMakeLists.txt:39 (add_executable):
  No SOURCES given to target: test_litbase


CMake Generate step failed.  Build files cannot be regenerated correctly.
CMake is re-running because E:/ProjectTry/capstone6/tests/integration/build/CMakeFiles/generate.stamp dependency file is missing.
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- Configuring done (0.0s)
CMake Error at CMakeLists.txt:39 (add_executable):
  Cannot find source file:

    //test_litbase.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:27 (add_executable):
  No SOURCES given to target: compat_header_build_test


CMake Error at CMakeLists.txt:39 (add_executable):
  No SOURCES given to target: test_litbase


CMake Generate step failed.  Build files cannot be regenerated correctly.
==> Built project in: E:\ProjectTry\capstone6\tests\integration\build ($config)
==> Found CMakeLists in: E:\ProjectTry\capstone6\tests\unit
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- The C compiler identification is MSVC 19.44.35209.0
-- The CXX compiler identification is MSVC 19.44.35209.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (2.0s)
CMake Error at CMakeLists.txt:9 (add_executable):
  Cannot find source file:

    //sstream.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:9 (add_executable):
  Cannot find source file:

    //utils.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:9 (add_executable):
  No SOURCES given to target: sstream


CMake Error at CMakeLists.txt:9 (add_executable):
  No SOURCES given to target: utils


CMake Generate step failed.  Build files cannot be regenerated correctly.
CMake is re-running because E:/ProjectTry/capstone6/tests/unit/build/CMakeFiles/generate.stamp dependency file is missing.
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- Configuring done (0.0s)
CMake Error at CMakeLists.txt:9 (add_executable):
  Cannot find source file:

    //sstream.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:9 (add_executable):
  Cannot find source file:

    //utils.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:9 (add_executable):
  No SOURCES given to target: sstream


CMake Error at CMakeLists.txt:9 (add_executable):
  No SOURCES given to target: utils


CMake Generate step failed.  Build files cannot be regenerated correctly.
==> Built project in: E:\ProjectTry\capstone6\tests\unit\build ($config)
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos> # กำหนด root โปรเจกต ใชตว บว MSBuild build
PS C:\Users\0ANew\source\repos> $root = "E:\ProjectTry\capstone6"
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos> # เลอก generator, architecture และ config
PS C:\Users\0ANew\source\repos> $generator = "Visual Studio 17 2022"
PS C:\Users\0ANew\source\repos> $arch      = "x64"
PS C:\Users\0ANew\source\repos> $config    = "Release"
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos> # หา path ของ MSBuild.exe (Visual Studio 2022)
PS C:\Users\0ANew\source\repos> $msbuildPath = (Get-Command msbuild.exe | Select-Object -ExpandProperty Source)
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos> Write-Host "Using MSBuild at: $msbuildPath" -ForegroundColor Yellow
Using MSBuild at: C:\Program Files\Microsoft Visual Studio\2022\Professional\\MSBuild\Current\Bin\amd64\MSBuild.exe
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos> # สแกนหา CMakeLists.txt และ build ทละโมดล
PS C:\Users\0ANew\source\repos> Get-ChildItem -Path $root -Filter CMakeLists.txt -Recurse | ForEach-Object {
>>     $srcDir   = $_.Directory.FullName
>>     $buildDir = Join-Path $srcDir "build"
>>
>>     Write-Host "`n==> Found CMakeLists in: $srcDir" -ForegroundColor Cyan
>>
>>     # สรางโฟลเดอร build ถายงไมม
>>     if (-not (Test-Path $buildDir)) {
>>         New-Item -ItemType Directory -Path $buildDir | Out-Null
>>     }
>>
>>     # 1) Configure / Generate ดวย CMake + VS generator
>>     cmake `
>>       -S "$srcDir" `
>>       -B "$buildDir" `
>>       -G "$generator" `
>>       -A $arch `
>>       -DCMAKE_BUILD_TYPE=$config `
>>       -DSNOWMAN_BUILD_GUI=OFF `
>>       -DSNOWMAN_BUILD_TESTS=OFF
>>
>>     # 2) หาไฟล .sln ท CMake สรางไว
>>     $sln = Get-ChildItem -Path $buildDir -Filter *.sln | Select-Object -First 1
>>     if (-not $sln) {
>>         Write-Warning "Solution file not found in $buildDir, skipping..."
>>         return
>>     }
>>
>>     Write-Host "-> Building solution: $($sln.Name)" -ForegroundColor DarkCyan
>>
>>     # 3) Build ดวย MSBuild
>>     & $msbuildPath $sln.FullName `
>>        /m `                                  # ใชงานหลาย core
>>        /p:Configuration=$config;Platform=$arch
>>
>>     Write-Host "==> Built project in: $buildDir ($config|$arch)" -ForegroundColor Green
>> }

==> Found CMakeLists in: E:\ProjectTry\capstone6
-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
Enabling CAPSTONE_ARM_SUPPORT
Enabling CAPSTONE_AARCH64_SUPPORT
Enabling CAPSTONE_M68K_SUPPORT
Enabling CAPSTONE_MIPS_SUPPORT
Enabling CAPSTONE_PPC_SUPPORT
Enabling CAPSTONE_SPARC_SUPPORT
Enabling CAPSTONE_SYSTEMZ_SUPPORT
Enabling CAPSTONE_XCORE_SUPPORT
Enabling CAPSTONE_X86_SUPPORT
Enabling CAPSTONE_TMS320C64X_SUPPORT
Enabling CAPSTONE_M680X_SUPPORT
Enabling CAPSTONE_EVM_SUPPORT
Enabling CAPSTONE_MOS65XX_SUPPORT
Enabling CAPSTONE_WASM_SUPPORT
Enabling CAPSTONE_BPF_SUPPORT
Enabling CAPSTONE_RISCV_SUPPORT
Enabling CAPSTONE_SH_SUPPORT
Enabling CAPSTONE_TRICORE_SUPPORT
Enabling CAPSTONE_ALPHA_SUPPORT
Enabling CAPSTONE_HPPA_SUPPORT
Enabling CAPSTONE_LOONGARCH_SUPPORT
Enabling CAPSTONE_XTENSA_SUPPORT
-- Configuring done (0.1s)
-- Generating done (0.1s)
-- Build files have been written to: E:/ProjectTry/capstone6/build
-> Building solution: capstone.sln
MSBuild version 17.14.10+8b8e13593 for .NET Framework
Build started 18/6/2568 3:51:38.

     1>Project "E:\ProjectTry\capstone6\build\capstone.sln" on node 1 (default targets).
     1>ValidateSolutionConfiguration:
         Building solution configuration "Debug|x64".
       ValidateProjects:
         The project "INSTALL" is not selected for building in solution configuration "Debug|x64".
         The project "UNINSTALL" is not selected for building in solution configuration "Debug|x64".
     1>Project "E:\ProjectTry\capstone6\build\capstone.sln" (1) is building "E:\ProjectTry\capstone6\build\ZERO_CHECK.vcxproj" (6) on node 2 (default targets).
     6>PrepareForBuild:
         Creating directory "x64\Debug\ZERO_CHECK\".
         Structured output is enabled. The formatting of compiler diagnostics will reflect the error hierarchy. See https://aka.ms/cpp/structured-output for more details.
         Creating directory "x64\Debug\ZERO_CHECK\ZERO_CHECK.tlog\".
       InitializeBuildStatus:
         Creating "x64\Debug\ZERO_CHECK\ZERO_CHECK.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
         Touching "x64\Debug\ZERO_CHECK\ZERO_CHECK.tlog\unsuccessfulbuild".
       CustomBuild:
         1>Checking Build System
       FinalizeBuildStatus:
         Deleting file "x64\Debug\ZERO_CHECK\ZERO_CHECK.tlog\unsuccessfulbuild".
         Touching "x64\Debug\ZERO_CHECK\ZERO_CHECK.tlog\ZERO_CHECK.lastbuildstate".
     6>Done Building Project "E:\ProjectTry\capstone6\build\ZERO_CHECK.vcxproj" (default targets).
     1>Project "E:\ProjectTry\capstone6\build\capstone.sln" (1) is building "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj.metaproj" (2) on node 1 (default targets).
     2>Project "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj.metaproj" (2) is building "E:\ProjectTry\capstone6\build\capstone.vcxproj.metaproj" (3) on node 1 (default targets).
     3>Project "E:\ProjectTry\capstone6\build\capstone.vcxproj.metaproj" (3) is building "E:\ProjectTry\capstone6\build\capstone.vcxproj" (7) on node 1 (default targets).
     7>PrepareForBuild:
         Creating directory "capstone.dir\Debug\".
         Structured output is enabled. The formatting of compiler diagnostics will reflect the error hierarchy. See https://aka.ms/cpp/structured-output for more details.
         Creating directory "E:\ProjectTry\capstone6\build\Debug\".
         Creating directory "capstone.dir\Debug\capstone.tlog\".
       InitializeBuildStatus:
         Creating "capstone.dir\Debug\capstone.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
         Touching "capstone.dir\Debug\capstone.tlog\unsuccessfulbuild".
       CustomBuild:
         Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
       ClCompile:
         C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.44.35207\bin\HostX64\x64\CL.exe /c /IE:\ProjectTry\capstone6\include /Zi /nologo /W1 /WX- /diagnostics:column /Od /Ob0 /D _MBCS /D WIN32 /D _WINDOW
         S /D CAPSTONE_USE_SYS_DYN_MEM /D CAPSTONE_ARM_SUPPORT /D CAPSTONE_AARCH64_SUPPORT /D CAPSTONE_M68K_SUPPORT /D CAPSTONE_MIPS_SUPPORT /D CAPSTONE_PPC_SUPPORT /D CAPSTONE_SPARC_SUPPORT /D CAPSTONE_SYSTEMZ_SUPPORT /D CAPSTONE_X
         CORE_SUPPORT /D CAPSTONE_X86_SUPPORT /D CAPSTONE_TMS320C64X_SUPPORT /D CAPSTONE_M680X_SUPPORT /D CAPSTONE_EVM_SUPPORT /D CAPSTONE_MOS65XX_SUPPORT /D CAPSTONE_WASM_SUPPORT /D CAPSTONE_BPF_SUPPORT /D CAPSTONE_RISCV_SUPPORT /D
          CAPSTONE_SH_SUPPORT /D CAPSTONE_TRICORE_SUPPORT /D CAPSTONE_ALPHA_SUPPORT /D CAPSTONE_HPPA_SUPPORT /D CAPSTONE_LOONGARCH_SUPPORT /D CAPSTONE_XTENSA_SUPPORT /D CAPSTONE_HAS_ARM /D CAPSTONE_HAS_AARCH64 /D CAPSTONE_HAS_MIPS /
         D CAPSTONE_HAS_POWERPC /D CAPSTONE_HAS_X86 /D CAPSTONE_HAS_SPARC /D CAPSTONE_HAS_SYSTEMZ /D CAPSTONE_HAS_XCORE /D CAPSTONE_HAS_M68K /D CAPSTONE_HAS_TMS320C64X /D CAPSTONE_HAS_M680X /D CAPSTONE_HAS_EVM /D CAPSTONE_HAS_WASM /
         D CAPSTONE_HAS_MOS65XX /D CAPSTONE_HAS_BPF /D CAPSTONE_HAS_RISCV /D CAPSTONE_HAS_SH /D CAPSTONE_HAS_TRICORE /D CAPSTONE_HAS_ALPHA /D CAPSTONE_HAS_HPPA /D CAPSTONE_HAS_LOONGARCH /D CAPSTONE_HAS_XTENSA /D "CMAKE_INTDIR=\"Debu
         g\"" /RTC1 /MDd /GS /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /Fo"capstone.dir\Debug\\" /Fd"E:\ProjectTry\capstone6\build\Debug\capstone.pdb" /external:W1 /Gd /TC /errorReport:queue  /w14189 E:\ProjectTry\capstone6\cs
         .c E:\ProjectTry\capstone6\Mapping.c E:\ProjectTry\capstone6\MCInst.c E:\ProjectTry\capstone6\MCInstrDesc.c E:\ProjectTry\capstone6\MCInstPrinter.c E:\ProjectTry\capstone6\MCRegisterInfo.c E:\ProjectTry\capstone6\SStream.c
         E:\ProjectTry\capstone6\utils.c E:\ProjectTry\capstone6\arch\ARM\ARMBaseInfo.c E:\ProjectTry\capstone6\arch\ARM\ARMDisassembler.c E:\ProjectTry\capstone6\arch\ARM\ARMDisassemblerExtension.c E:\ProjectTry\capstone6\arch\ARM\
         ARMInstPrinter.c E:\ProjectTry\capstone6\arch\ARM\ARMMapping.c E:\ProjectTry\capstone6\arch\ARM\ARMModule.c E:\ProjectTry\capstone6\arch\AArch64\AArch64BaseInfo.c E:\ProjectTry\capstone6\arch\AArch64\AArch64Disassembler.c E
         :\ProjectTry\capstone6\arch\AArch64\AArch64DisassemblerExtension.c E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c E:\ProjectTry\capstone6\arch\AArch64\AArch64
         Module.c E:\ProjectTry\capstone6\arch\Mips\MipsDisassembler.c E:\ProjectTry\capstone6\arch\Mips\MipsInstPrinter.c E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c E:\ProjectTry\capstone6\arch\Mips\MipsModule.c E:\ProjectTry\
         capstone6\arch\PowerPC\PPCDisassembler.c E:\ProjectTry\capstone6\arch\PowerPC\PPCInstPrinter.c E:\ProjectTry\capstone6\arch\PowerPC\PPCMapping.c E:\ProjectTry\capstone6\arch\PowerPC\PPCModule.c E:\ProjectTry\capstone6\arch\
         X86\X86Disassembler.c E:\ProjectTry\capstone6\arch\X86\X86DisassemblerDecoder.c E:\ProjectTry\capstone6\arch\X86\X86IntelInstPrinter.c E:\ProjectTry\capstone6\arch\X86\X86InstPrinterCommon.c E:\ProjectTry\capstone6\arch\X86
         \X86Mapping.c E:\ProjectTry\capstone6\arch\X86\X86Module.c E:\ProjectTry\capstone6\arch\X86\X86ATTInstPrinter.c E:\ProjectTry\capstone6\arch\Sparc\SparcDisassembler.c E:\ProjectTry\capstone6\arch\Sparc\SparcInstPrinter.c E:
         \ProjectTry\capstone6\arch\Sparc\SparcMapping.c E:\ProjectTry\capstone6\arch\Sparc\SparcModule.c E:\ProjectTry\capstone6\arch\SystemZ\SystemZDisassembler.c E:\ProjectTry\capstone6\arch\SystemZ\SystemZDisassemblerExtension.c
          E:\ProjectTry\capstone6\arch\SystemZ\SystemZInstPrinter.c E:\ProjectTry\capstone6\arch\SystemZ\SystemZMapping.c E:\ProjectTry\capstone6\arch\SystemZ\SystemZModule.c E:\ProjectTry\capstone6\arch\SystemZ\SystemZMCTargetDesc.
         c E:\ProjectTry\capstone6\arch\XCore\XCoreDisassembler.c E:\ProjectTry\capstone6\arch\XCore\XCoreInstPrinter.c E:\ProjectTry\capstone6\arch\XCore\XCoreMapping.c E:\ProjectTry\capstone6\arch\XCore\XCoreModule.c E:\ProjectTry
         \capstone6\arch\M68K\M68KDisassembler.c E:\ProjectTry\capstone6\arch\M68K\M68KInstPrinter.c E:\ProjectTry\capstone6\arch\M68K\M68KModule.c E:\ProjectTry\capstone6\arch\TMS320C64x\TMS320C64xDisassembler.c E:\ProjectTry\capst
         one6\arch\TMS320C64x\TMS320C64xInstPrinter.c E:\ProjectTry\capstone6\arch\TMS320C64x\TMS320C64xMapping.c E:\ProjectTry\capstone6\arch\TMS320C64x\TMS320C64xModule.c E:\ProjectTry\capstone6\arch\M680X\M680XDisassembler.c E:\P
         rojectTry\capstone6\arch\M680X\M680XInstPrinter.c E:\ProjectTry\capstone6\arch\M680X\M680XModule.c E:\ProjectTry\capstone6\arch\EVM\EVMDisassembler.c E:\ProjectTry\capstone6\arch\EVM\EVMInstPrinter.c E:\ProjectTry\capstone6
         \arch\EVM\EVMMapping.c E:\ProjectTry\capstone6\arch\EVM\EVMModule.c E:\ProjectTry\capstone6\arch\WASM\WASMDisassembler.c E:\ProjectTry\capstone6\arch\WASM\WASMInstPrinter.c E:\ProjectTry\capstone6\arch\WASM\WASMMapping.c E:
         \ProjectTry\capstone6\arch\WASM\WASMModule.c E:\ProjectTry\capstone6\arch\MOS65XX\MOS65XXModule.c E:\ProjectTry\capstone6\arch\MOS65XX\MOS65XXDisassembler.c E:\ProjectTry\capstone6\arch\BPF\BPFDisassembler.c E:\ProjectTry\c
         apstone6\arch\BPF\BPFInstPrinter.c E:\ProjectTry\capstone6\arch\BPF\BPFMapping.c E:\ProjectTry\capstone6\arch\BPF\BPFModule.c E:\ProjectTry\capstone6\arch\RISCV\RISCVDisassembler.c E:\ProjectTry\capstone6\arch\RISCV\RISCVIn
         stPrinter.c E:\ProjectTry\capstone6\arch\RISCV\RISCVMapping.c E:\ProjectTry\capstone6\arch\RISCV\RISCVModule.c E:\ProjectTry\capstone6\arch\SH\SHDisassembler.c E:\ProjectTry\capstone6\arch\SH\SHInstPrinter.c E:\ProjectTry\c
         apstone6\arch\SH\SHModule.c E:\ProjectTry\capstone6\arch\TriCore\TriCoreDisassembler.c E:\ProjectTry\capstone6\arch\TriCore\TriCoreInstPrinter.c E:\ProjectTry\capstone6\arch\TriCore\TriCoreMapping.c E:\ProjectTry\capstone6\
         arch\TriCore\TriCoreModule.c E:\ProjectTry\capstone6\arch\Alpha\AlphaDisassembler.c E:\ProjectTry\capstone6\arch\Alpha\AlphaInstPrinter.c E:\ProjectTry\capstone6\arch\Alpha\AlphaMapping.c E:\ProjectTry\capstone6\arch\Alpha\
         AlphaModule.c E:\ProjectTry\capstone6\arch\HPPA\HPPADisassembler.c E:\ProjectTry\capstone6\arch\HPPA\HPPAInstPrinter.c E:\ProjectTry\capstone6\arch\HPPA\HPPAMapping.c E:\ProjectTry\capstone6\arch\HPPA\HPPAModule.c E:\Projec
         tTry\capstone6\arch\LoongArch\LoongArchDisassembler.c E:\ProjectTry\capstone6\arch\LoongArch\LoongArchDisassemblerExtension.c E:\ProjectTry\capstone6\arch\LoongArch\LoongArchInstPrinter.c E:\ProjectTry\capstone6\arch\LoongA
         rch\LoongArchMapping.c E:\ProjectTry\capstone6\arch\LoongArch\LoongArchModule.c E:\ProjectTry\capstone6\arch\Xtensa\XtensaDisassembler.c E:\ProjectTry\capstone6\arch\Xtensa\XtensaInstPrinter.c E:\ProjectTry\capstone6\arch\X
         tensa\XtensaMapping.c E:\ProjectTry\capstone6\arch\Xtensa\XtensaModule.c
         cs.c
         Mapping.c
         MCInst.c
         MCInstrDesc.c
         MCInstPrinter.c
         MCRegisterInfo.c
         SStream.c
         utils.c
         ARMBaseInfo.c
         ARMDisassembler.c
         ARMDisassemblerExtension.c
         ARMInstPrinter.c
         ARMMapping.c
     7>E:\ProjectTry\capstone6\arch\ARM\ARMMapping.c(619,19): warning C5287: operands are different enum types 'arm_op_type' and 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxp
       roj]
     7>E:\ProjectTry\capstone6\arch\ARM\ARMMapping.c(621,24): warning C5287: operands are different enum types 'arm_op_type' and 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vcxp
       roj]
         ARMModule.c
         AArch64BaseInfo.c
         AArch64Disassembler.c
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Disassembler.c(1948,53): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Disassembler.c(1973,53): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         AArch64DisassemblerExtension.c
         AArch64InstPrinter.c
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(727,48): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(754,26): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(776,26): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(798,17): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(867,17): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(1456,1): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(1457,1): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2154,36): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj
       ]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2248,20): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj
       ]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2252,17): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj
       ]
         AArch64Mapping.c
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(309,48): warning C5287: operands are different enum types 'aarch64_op_type' and 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\c
       apstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1559,11): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1696,21): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1704,18): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1306,8): warning C5286: implicit conversion from enum type 'aarch64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capston
       e6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1310,8): warning C5286: implicit conversion from enum type 'aarch64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capston
       e6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1314,8): warning C5286: implicit conversion from enum type 'aarch64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capston
       e6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1944,15): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         AArch64Module.c
         Generating Code...
         Compiling...
         MipsDisassembler.c
         MipsInstPrinter.c
     7>E:\ProjectTry\capstone6\arch\Mips\MipsInstPrinter.c(205,3): warning C4098: 'printJumpOperand': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsInstPrinter.c(218,3): warning C4098: 'printBranchOperand': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         MipsMapping.c
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(389,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(391,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(393,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(395,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(397,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(399,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(401,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(403,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(405,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(407,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(409,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(411,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(413,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(415,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(417,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(419,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(421,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(423,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(425,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(427,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(429,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(431,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(433,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(435,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(437,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(439,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(441,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(445,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
     7>E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(447,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         MipsModule.c
         PPCDisassembler.c
     7>E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(49,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.
       vcxproj]
         (compiling source file '../arch/PowerPC/PPCDisassembler.c')

     7>E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(55,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.
       vcxproj]
         (compiling source file '../arch/PowerPC/PPCDisassembler.c')

         PPCInstPrinter.c
     7>E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(49,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.
       vcxproj]
         (compiling source file '../arch/PowerPC/PPCInstPrinter.c')

     7>E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(55,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.
       vcxproj]
         (compiling source file '../arch/PowerPC/PPCInstPrinter.c')

         PPCMapping.c
         PPCModule.c
         X86Disassembler.c
         X86DisassemblerDecoder.c
         X86IntelInstPrinter.c
         X86InstPrinterCommon.c
         X86Mapping.c
         X86Module.c
         X86ATTInstPrinter.c
         SparcDisassembler.c
         SparcInstPrinter.c
         SparcMapping.c
         SparcModule.c
         SystemZDisassembler.c
         Generating Code...
         Compiling...
         SystemZDisassemblerExtension.c
         SystemZInstPrinter.c
         SystemZMapping.c
         SystemZModule.c
         SystemZMCTargetDesc.c
         XCoreDisassembler.c
         XCoreInstPrinter.c
         XCoreMapping.c
         XCoreModule.c
         M68KDisassembler.c
         M68KInstPrinter.c
         M68KModule.c
         TMS320C64xDisassembler.c
         TMS320C64xInstPrinter.c
         TMS320C64xMapping.c
         TMS320C64xModule.c
         M680XDisassembler.c
         M680XInstPrinter.c
         M680XModule.c
         EVMDisassembler.c
         Generating Code...
         Compiling...
         EVMInstPrinter.c
         EVMMapping.c
         EVMModule.c
         WASMDisassembler.c
         WASMInstPrinter.c
         WASMMapping.c
         WASMModule.c
         MOS65XXModule.c
         MOS65XXDisassembler.c
         BPFDisassembler.c
         BPFInstPrinter.c
         BPFMapping.c
         BPFModule.c
         RISCVDisassembler.c
         RISCVInstPrinter.c
         RISCVMapping.c
         RISCVModule.c
         SHDisassembler.c
         SHInstPrinter.c
         SHModule.c
         Generating Code...
         Compiling...
         TriCoreDisassembler.c
         TriCoreInstPrinter.c
         TriCoreMapping.c
         TriCoreModule.c
         AlphaDisassembler.c
         AlphaInstPrinter.c
         AlphaMapping.c
         AlphaModule.c
         HPPADisassembler.c
         HPPAInstPrinter.c
         HPPAMapping.c
         HPPAModule.c
         LoongArchDisassembler.c
         LoongArchDisassemblerExtension.c
         LoongArchInstPrinter.c
         LoongArchMapping.c
         LoongArchModule.c
         XtensaDisassembler.c
         XtensaInstPrinter.c
         XtensaMapping.c
         Generating Code...
         Compiling...
         XtensaModule.c
         Generating Code...
       Lib:
         C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.44.35207\bin\HostX64\x64\Lib.exe /OUT:"E:\ProjectTry\capstone6\build\Debug\capstone.lib" /NOLOGO /MACHINE:X64  /machine:x64 capstone.dir\Debug\cs.o
         bj
         capstone.dir\Debug\Mapping.obj
         capstone.dir\Debug\MCInst.obj
         capstone.dir\Debug\MCInstrDesc.obj
         capstone.dir\Debug\MCInstPrinter.obj
         capstone.dir\Debug\MCRegisterInfo.obj
         capstone.dir\Debug\SStream.obj
         capstone.dir\Debug\utils.obj
         capstone.dir\Debug\ARMBaseInfo.obj
         capstone.dir\Debug\ARMDisassembler.obj
         capstone.dir\Debug\ARMDisassemblerExtension.obj
         capstone.dir\Debug\ARMInstPrinter.obj
         capstone.dir\Debug\ARMMapping.obj
         capstone.dir\Debug\ARMModule.obj
         capstone.dir\Debug\AArch64BaseInfo.obj
         capstone.dir\Debug\AArch64Disassembler.obj
         capstone.dir\Debug\AArch64DisassemblerExtension.obj
         capstone.dir\Debug\AArch64InstPrinter.obj
         capstone.dir\Debug\AArch64Mapping.obj
         capstone.dir\Debug\AArch64Module.obj
         capstone.dir\Debug\MipsDisassembler.obj
         capstone.dir\Debug\MipsInstPrinter.obj
         capstone.dir\Debug\MipsMapping.obj
         capstone.dir\Debug\MipsModule.obj
         capstone.dir\Debug\PPCDisassembler.obj
         capstone.dir\Debug\PPCInstPrinter.obj
         capstone.dir\Debug\PPCMapping.obj
         capstone.dir\Debug\PPCModule.obj
         capstone.dir\Debug\X86Disassembler.obj
         capstone.dir\Debug\X86DisassemblerDecoder.obj
         capstone.dir\Debug\X86IntelInstPrinter.obj
         capstone.dir\Debug\X86InstPrinterCommon.obj
         capstone.dir\Debug\X86Mapping.obj
         capstone.dir\Debug\X86Module.obj
         capstone.dir\Debug\X86ATTInstPrinter.obj
         capstone.dir\Debug\SparcDisassembler.obj
         capstone.dir\Debug\SparcInstPrinter.obj
         capstone.dir\Debug\SparcMapping.obj
         capstone.dir\Debug\SparcModule.obj
         capstone.dir\Debug\SystemZDisassembler.obj
         capstone.dir\Debug\SystemZDisassemblerExtension.obj
         capstone.dir\Debug\SystemZInstPrinter.obj
         capstone.dir\Debug\SystemZMapping.obj
         capstone.dir\Debug\SystemZModule.obj
         capstone.dir\Debug\SystemZMCTargetDesc.obj
         capstone.dir\Debug\XCoreDisassembler.obj
         capstone.dir\Debug\XCoreInstPrinter.obj
         capstone.dir\Debug\XCoreMapping.obj
         capstone.dir\Debug\XCoreModule.obj
         capstone.dir\Debug\M68KDisassembler.obj
         capstone.dir\Debug\M68KInstPrinter.obj
         capstone.dir\Debug\M68KModule.obj
         capstone.dir\Debug\TMS320C64xDisassembler.obj
         capstone.dir\Debug\TMS320C64xInstPrinter.obj
         capstone.dir\Debug\TMS320C64xMapping.obj
         capstone.dir\Debug\TMS320C64xModule.obj
         capstone.dir\Debug\M680XDisassembler.obj
         capstone.dir\Debug\M680XInstPrinter.obj
         capstone.dir\Debug\M680XModule.obj
         capstone.dir\Debug\EVMDisassembler.obj
         capstone.dir\Debug\EVMInstPrinter.obj
         capstone.dir\Debug\EVMMapping.obj
         capstone.dir\Debug\EVMModule.obj
         capstone.dir\Debug\WASMDisassembler.obj
         capstone.dir\Debug\WASMInstPrinter.obj
         capstone.dir\Debug\WASMMapping.obj
         capstone.dir\Debug\WASMModule.obj
         capstone.dir\Debug\MOS65XXModule.obj
         capstone.dir\Debug\MOS65XXDisassembler.obj
         capstone.dir\Debug\BPFDisassembler.obj
         capstone.dir\Debug\BPFInstPrinter.obj
         capstone.dir\Debug\BPFMapping.obj
         capstone.dir\Debug\BPFModule.obj
         capstone.dir\Debug\RISCVDisassembler.obj
         capstone.dir\Debug\RISCVInstPrinter.obj
         capstone.dir\Debug\RISCVMapping.obj
         capstone.dir\Debug\RISCVModule.obj
         capstone.dir\Debug\SHDisassembler.obj
         capstone.dir\Debug\SHInstPrinter.obj
         capstone.dir\Debug\SHModule.obj
         capstone.dir\Debug\TriCoreDisassembler.obj
         capstone.dir\Debug\TriCoreInstPrinter.obj
         capstone.dir\Debug\TriCoreMapping.obj
         capstone.dir\Debug\TriCoreModule.obj
         capstone.dir\Debug\AlphaDisassembler.obj
         capstone.dir\Debug\AlphaInstPrinter.obj
         capstone.dir\Debug\AlphaMapping.obj
         capstone.dir\Debug\AlphaModule.obj
         capstone.dir\Debug\HPPADisassembler.obj
         capstone.dir\Debug\HPPAInstPrinter.obj
         capstone.dir\Debug\HPPAMapping.obj
         capstone.dir\Debug\HPPAModule.obj
         capstone.dir\Debug\LoongArchDisassembler.obj
         capstone.dir\Debug\LoongArchDisassemblerExtension.obj
         capstone.dir\Debug\LoongArchInstPrinter.obj
         capstone.dir\Debug\LoongArchMapping.obj
         capstone.dir\Debug\LoongArchModule.obj
         capstone.dir\Debug\XtensaDisassembler.obj
         capstone.dir\Debug\XtensaInstPrinter.obj
         capstone.dir\Debug\XtensaMapping.obj
         capstone.dir\Debug\XtensaModule.obj
         capstone.vcxproj -> E:\ProjectTry\capstone6\build\Debug\capstone.lib
       FinalizeBuildStatus:
         Deleting file "capstone.dir\Debug\capstone.tlog\unsuccessfulbuild".
         Touching "capstone.dir\Debug\capstone.tlog\capstone.lastbuildstate".
     7>Done Building Project "E:\ProjectTry\capstone6\build\capstone.vcxproj" (default targets).
     3>Done Building Project "E:\ProjectTry\capstone6\build\capstone.vcxproj.metaproj" (default targets).
     2>Project "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj.metaproj" (2) is building "E:\ProjectTry\capstone6\build\cstool.vcxproj.metaproj" (4) on node 1 (default targets).
     4>Project "E:\ProjectTry\capstone6\build\cstool.vcxproj.metaproj" (4) is building "E:\ProjectTry\capstone6\build\cstool.vcxproj" (8) on node 1 (default targets).
     8>PrepareForBuild:
         Creating directory "cstool.dir\Debug\".
     2>Project "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj.metaproj" (2) is building "E:\ProjectTry\capstone6\build\fuzz_disasm.vcxproj.metaproj" (5) on node 1 (default targets).
     5>Project "E:\ProjectTry\capstone6\build\fuzz_disasm.vcxproj.metaproj" (5) is building "E:\ProjectTry\capstone6\build\fuzz_disasm.vcxproj" (9) on node 2 (default targets).
     9>PrepareForBuild:
         Creating directory "fuzz_disasm.dir\Debug\".
     8>PrepareForBuild:
         Structured output is enabled. The formatting of compiler diagnostics will reflect the error hierarchy. See https://aka.ms/cpp/structured-output for more details.
         Creating directory "cstool.dir\Debug\cstool.tlog\".
     9>PrepareForBuild:
         Structured output is enabled. The formatting of compiler diagnostics will reflect the error hierarchy. See https://aka.ms/cpp/structured-output for more details.
         Creating directory "fuzz_disasm.dir\Debug\fuzz_disasm.tlog\".
     8>InitializeBuildStatus:
         Creating "cstool.dir\Debug\cstool.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
         Touching "cstool.dir\Debug\cstool.tlog\unsuccessfulbuild".
     9>InitializeBuildStatus:
         Creating "fuzz_disasm.dir\Debug\fuzz_disasm.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
         Touching "fuzz_disasm.dir\Debug\fuzz_disasm.tlog\unsuccessfulbuild".
     8>CustomBuild:
         Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
     9>CustomBuild:
         Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
       ClCompile:
         C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.44.35207\bin\HostX64\x64\CL.exe /c /IE:\ProjectTry\capstone6\include /Zi /nologo /W1 /WX- /diagnostics:column /Od /Ob0 /D _MBCS /D WIN32 /D _WINDOW
         S /D CAPSTONE_USE_SYS_DYN_MEM /D CAPSTONE_ARM_SUPPORT /D CAPSTONE_AARCH64_SUPPORT /D CAPSTONE_M68K_SUPPORT /D CAPSTONE_MIPS_SUPPORT /D CAPSTONE_PPC_SUPPORT /D CAPSTONE_SPARC_SUPPORT /D CAPSTONE_SYSTEMZ_SUPPORT /D CAPSTONE_X
         CORE_SUPPORT /D CAPSTONE_X86_SUPPORT /D CAPSTONE_TMS320C64X_SUPPORT /D CAPSTONE_M680X_SUPPORT /D CAPSTONE_EVM_SUPPORT /D CAPSTONE_MOS65XX_SUPPORT /D CAPSTONE_WASM_SUPPORT /D CAPSTONE_BPF_SUPPORT /D CAPSTONE_RISCV_SUPPORT /D
          CAPSTONE_SH_SUPPORT /D CAPSTONE_TRICORE_SUPPORT /D CAPSTONE_ALPHA_SUPPORT /D CAPSTONE_HPPA_SUPPORT /D CAPSTONE_LOONGARCH_SUPPORT /D CAPSTONE_XTENSA_SUPPORT /D CAPSTONE_HAS_ARM /D CAPSTONE_HAS_AARCH64 /D CAPSTONE_HAS_MIPS /
         D CAPSTONE_HAS_POWERPC /D CAPSTONE_HAS_X86 /D CAPSTONE_HAS_SPARC /D CAPSTONE_HAS_SYSTEMZ /D CAPSTONE_HAS_XCORE /D CAPSTONE_HAS_M68K /D CAPSTONE_HAS_TMS320C64X /D CAPSTONE_HAS_M680X /D CAPSTONE_HAS_EVM /D CAPSTONE_HAS_WASM /
         D CAPSTONE_HAS_MOS65XX /D CAPSTONE_HAS_BPF /D CAPSTONE_HAS_RISCV /D CAPSTONE_HAS_SH /D CAPSTONE_HAS_TRICORE /D CAPSTONE_HAS_ALPHA /D CAPSTONE_HAS_HPPA /D CAPSTONE_HAS_LOONGARCH /D CAPSTONE_HAS_XTENSA /D "CMAKE_INTDIR=\"Debu
         g\"" /RTC1 /MDd /GS /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /Fo"fuzz_disasm.dir\Debug\\" /Fd"fuzz_disasm.dir\Debug\vc143.pdb" /external:W1 /Gd /TC /errorReport:queue  /w14189 E:\ProjectTry\capstone6\suite\fuzz\onefi
         le.c E:\ProjectTry\capstone6\suite\fuzz\fuzz_disasm.c E:\ProjectTry\capstone6\suite\fuzz\platform.c
     8>ClCompile:
         C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.44.35207\bin\HostX64\x64\CL.exe /c /IE:\ProjectTry\capstone6\include /Zi /nologo /W1 /WX- /diagnostics:column /Od /Ob0 /D _MBCS /D WIN32 /D _WINDOW
         S /D CAPSTONE_USE_SYS_DYN_MEM /D CAPSTONE_ARM_SUPPORT /D CAPSTONE_AARCH64_SUPPORT /D CAPSTONE_M68K_SUPPORT /D CAPSTONE_MIPS_SUPPORT /D CAPSTONE_PPC_SUPPORT /D CAPSTONE_SPARC_SUPPORT /D CAPSTONE_SYSTEMZ_SUPPORT /D CAPSTONE_X
         CORE_SUPPORT /D CAPSTONE_X86_SUPPORT /D CAPSTONE_TMS320C64X_SUPPORT /D CAPSTONE_M680X_SUPPORT /D CAPSTONE_EVM_SUPPORT /D CAPSTONE_MOS65XX_SUPPORT /D CAPSTONE_WASM_SUPPORT /D CAPSTONE_BPF_SUPPORT /D CAPSTONE_RISCV_SUPPORT /D
          CAPSTONE_SH_SUPPORT /D CAPSTONE_TRICORE_SUPPORT /D CAPSTONE_ALPHA_SUPPORT /D CAPSTONE_HPPA_SUPPORT /D CAPSTONE_LOONGARCH_SUPPORT /D CAPSTONE_XTENSA_SUPPORT /D CAPSTONE_HAS_ARM /D CAPSTONE_HAS_AARCH64 /D CAPSTONE_HAS_MIPS /
         D CAPSTONE_HAS_POWERPC /D CAPSTONE_HAS_X86 /D CAPSTONE_HAS_SPARC /D CAPSTONE_HAS_SYSTEMZ /D CAPSTONE_HAS_XCORE /D CAPSTONE_HAS_M68K /D CAPSTONE_HAS_TMS320C64X /D CAPSTONE_HAS_M680X /D CAPSTONE_HAS_EVM /D CAPSTONE_HAS_WASM /
         D CAPSTONE_HAS_MOS65XX /D CAPSTONE_HAS_BPF /D CAPSTONE_HAS_RISCV /D CAPSTONE_HAS_SH /D CAPSTONE_HAS_TRICORE /D CAPSTONE_HAS_ALPHA /D CAPSTONE_HAS_HPPA /D CAPSTONE_HAS_LOONGARCH /D CAPSTONE_HAS_XTENSA /D "CMAKE_INTDIR=\"Debu
         g\"" /RTC1 /MDd /GS /fp:precise /Zc:wchar_t /Zc:forScope /Zc:inline /Fo"cstool.dir\Debug\\" /Fd"cstool.dir\Debug\vc143.pdb" /external:W1 /Gd /TC /errorReport:queue  /w14189 E:\ProjectTry\capstone6\cstool\cstool.c E:\Project
         Try\capstone6\cstool\cstool_aarch64.c E:\ProjectTry\capstone6\cstool\cstool_alpha.c E:\ProjectTry\capstone6\cstool\cstool_arm.c E:\ProjectTry\capstone6\cstool\cstool_bpf.c E:\ProjectTry\capstone6\cstool\cstool_evm.c E:\Proj
         ectTry\capstone6\cstool\cstool_hppa.c E:\ProjectTry\capstone6\cstool\cstool_loongarch.c E:\ProjectTry\capstone6\cstool\cstool_m680x.c E:\ProjectTry\capstone6\cstool\cstool_m68k.c E:\ProjectTry\capstone6\cstool\cstool_mips.c
          E:\ProjectTry\capstone6\cstool\cstool_mos65xx.c E:\ProjectTry\capstone6\cstool\cstool_powerpc.c E:\ProjectTry\capstone6\cstool\cstool_riscv.c E:\ProjectTry\capstone6\cstool\cstool_sh.c E:\ProjectTry\capstone6\cstool\cstool
         _sparc.c E:\ProjectTry\capstone6\cstool\cstool_systemz.c E:\ProjectTry\capstone6\cstool\cstool_tms320c64x.c E:\ProjectTry\capstone6\cstool\cstool_tricore.c E:\ProjectTry\capstone6\cstool\cstool_wasm.c E:\ProjectTry\capstone
         6\cstool\cstool_x86.c E:\ProjectTry\capstone6\cstool\cstool_xcore.c E:\ProjectTry\capstone6\cstool\cstool_xtensa.c E:\ProjectTry\capstone6\cstool\getopt.c
     9>ClCompile:
         onefile.c
     8>ClCompile:
         cstool.c
     9>ClCompile:
         fuzz_disasm.c
     8>ClCompile:
         cstool_aarch64.c
     9>ClCompile:
         platform.c
     8>ClCompile:
         cstool_alpha.c
     9>ClCompile:
         Generating Code...
     8>ClCompile:
         cstool_arm.c
     9>Link:
         C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.44.35207\bin\HostX64\x64\link.exe /ERRORREPORT:QUEUE /OUT:"E:\ProjectTry\capstone6\build\Debug\fuzz_disasm.exe" /INCREMENTAL /ILK:"fuzz_disasm.dir\
         Debug\fuzz_disasm.ilk" /NOLOGO Debug\capstone.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib /MANIFEST /MANIFESTUAC:"level='asInvoker' uiAccess='fals
         e'" /manifest:embed /DEBUG /PDB:"E:/ProjectTry/capstone6/build/Debug/fuzz_disasm.pdb" /SUBSYSTEM:CONSOLE /TLBID:1 /DYNAMICBASE /NXCOMPAT /IMPLIB:"E:/ProjectTry/capstone6/build/Debug/fuzz_disasm.lib" /MACHINE:X64  /machine:x
         64 fuzz_disasm.dir\Debug\onefile.obj
         fuzz_disasm.dir\Debug\fuzz_disasm.obj
         fuzz_disasm.dir\Debug\platform.obj
     8>ClCompile:
         cstool_bpf.c
         cstool_evm.c
         cstool_hppa.c
         cstool_loongarch.c
     9>Link:
         fuzz_disasm.vcxproj -> E:\ProjectTry\capstone6\build\Debug\fuzz_disasm.exe
       FinalizeBuildStatus:
         Deleting file "fuzz_disasm.dir\Debug\fuzz_disasm.tlog\unsuccessfulbuild".
         Touching "fuzz_disasm.dir\Debug\fuzz_disasm.tlog\fuzz_disasm.lastbuildstate".
     9>Done Building Project "E:\ProjectTry\capstone6\build\fuzz_disasm.vcxproj" (default targets).
     5>Done Building Project "E:\ProjectTry\capstone6\build\fuzz_disasm.vcxproj.metaproj" (default targets).
     8>ClCompile:
         cstool_m680x.c
         cstool_m68k.c
         cstool_mips.c
         cstool_mos65xx.c
         cstool_powerpc.c
         cstool_riscv.c
         cstool_sh.c
         cstool_sparc.c
         cstool_systemz.c
         cstool_tms320c64x.c
         cstool_tricore.c
         cstool_wasm.c
         Generating Code...
         Compiling...
         cstool_x86.c
         cstool_xcore.c
         cstool_xtensa.c
         getopt.c
         Generating Code...
       Link:
         C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.44.35207\bin\HostX64\x64\link.exe /ERRORREPORT:QUEUE /OUT:"E:\ProjectTry\capstone6\build\Debug\cstool.exe" /INCREMENTAL /ILK:"cstool.dir\Debug\csto
         ol.ilk" /NOLOGO Debug\capstone.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib /MANIFEST /MANIFESTUAC:"level='asInvoker' uiAccess='false'" /manifest:e
         mbed /DEBUG /PDB:"E:/ProjectTry/capstone6/build/Debug/cstool.pdb" /SUBSYSTEM:CONSOLE /TLBID:1 /DYNAMICBASE /NXCOMPAT /IMPLIB:"E:/ProjectTry/capstone6/build/Debug/cstool.lib" /MACHINE:X64  /machine:x64 cstool.dir\Debug\cstoo
         l.obj
         cstool.dir\Debug\cstool_aarch64.obj
         cstool.dir\Debug\cstool_alpha.obj
         cstool.dir\Debug\cstool_arm.obj
         cstool.dir\Debug\cstool_bpf.obj
         cstool.dir\Debug\cstool_evm.obj
         cstool.dir\Debug\cstool_hppa.obj
         cstool.dir\Debug\cstool_loongarch.obj
         cstool.dir\Debug\cstool_m680x.obj
         cstool.dir\Debug\cstool_m68k.obj
         cstool.dir\Debug\cstool_mips.obj
         cstool.dir\Debug\cstool_mos65xx.obj
         cstool.dir\Debug\cstool_powerpc.obj
         cstool.dir\Debug\cstool_riscv.obj
         cstool.dir\Debug\cstool_sh.obj
         cstool.dir\Debug\cstool_sparc.obj
         cstool.dir\Debug\cstool_systemz.obj
         cstool.dir\Debug\cstool_tms320c64x.obj
         cstool.dir\Debug\cstool_tricore.obj
         cstool.dir\Debug\cstool_wasm.obj
         cstool.dir\Debug\cstool_x86.obj
         cstool.dir\Debug\cstool_xcore.obj
         cstool.dir\Debug\cstool_xtensa.obj
         cstool.dir\Debug\getopt.obj
         cstool.vcxproj -> E:\ProjectTry\capstone6\build\Debug\cstool.exe
       FinalizeBuildStatus:
         Deleting file "cstool.dir\Debug\cstool.tlog\unsuccessfulbuild".
         Touching "cstool.dir\Debug\cstool.tlog\cstool.lastbuildstate".
     8>Done Building Project "E:\ProjectTry\capstone6\build\cstool.vcxproj" (default targets).
     4>Done Building Project "E:\ProjectTry\capstone6\build\cstool.vcxproj.metaproj" (default targets).
     2>Project "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj.metaproj" (2) is building "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj" (10) on node 1 (default targets).
    10>PrepareForBuild:
         Creating directory "x64\Debug\ALL_BUILD\".
         Structured output is enabled. The formatting of compiler diagnostics will reflect the error hierarchy. See https://aka.ms/cpp/structured-output for more details.
         Creating directory "x64\Debug\ALL_BUILD\ALL_BUILD.tlog\".
       InitializeBuildStatus:
         Creating "x64\Debug\ALL_BUILD\ALL_BUILD.tlog\unsuccessfulbuild" because "AlwaysCreate" was specified.
         Touching "x64\Debug\ALL_BUILD\ALL_BUILD.tlog\unsuccessfulbuild".
       CustomBuild:
         Building Custom Rule E:/ProjectTry/capstone6/CMakeLists.txt
       FinalizeBuildStatus:
         Deleting file "x64\Debug\ALL_BUILD\ALL_BUILD.tlog\unsuccessfulbuild".
         Touching "x64\Debug\ALL_BUILD\ALL_BUILD.tlog\ALL_BUILD.lastbuildstate".
    10>Done Building Project "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj" (default targets).
     2>Done Building Project "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj.metaproj" (default targets).
     1>Done Building Project "E:\ProjectTry\capstone6\build\capstone.sln" (default targets).

Build succeeded.

       "E:\ProjectTry\capstone6\build\capstone.sln" (default target) (1) ->
       "E:\ProjectTry\capstone6\build\ALL_BUILD.vcxproj.metaproj" (default target) (2) ->
       "E:\ProjectTry\capstone6\build\capstone.vcxproj.metaproj" (default target) (3) ->
       "E:\ProjectTry\capstone6\build\capstone.vcxproj" (default target) (7) ->
       (ClCompile target) ->
         E:\ProjectTry\capstone6\arch\ARM\ARMMapping.c(619,19): warning C5287: operands are different enum types 'arm_op_type' and 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vc
       xproj]
         E:\ProjectTry\capstone6\arch\ARM\ARMMapping.c(621,24): warning C5287: operands are different enum types 'arm_op_type' and 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capstone.vc
       xproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Disassembler.c(1948,53): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxp
       roj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Disassembler.c(1973,53): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxp
       roj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(727,48): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(754,26): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(776,26): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(798,17): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(867,17): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(1456,1): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(1457,1): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpro
       j]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2154,36): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpr
       oj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2248,20): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpr
       oj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64InstPrinter.c(2252,17): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxpr
       oj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(309,48): warning C5287: operands are different enum types 'aarch64_op_type' and 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build
       \capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1559,11): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1696,21): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1704,18): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1306,8): warning C5286: implicit conversion from enum type 'aarch64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capst
       one6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1310,8): warning C5286: implicit conversion from enum type 'aarch64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capst
       one6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1314,8): warning C5286: implicit conversion from enum type 'aarch64_op_type' to enum type 'cs_op_type'; use an explicit cast to silence this warning [E:\ProjectTry\capst
       one6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\AArch64\AArch64Mapping.c(1944,15): warning C4133: 'function': incompatible types - from 'const aarch64_insn_group [3]' to 'const unsigned int *' [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsInstPrinter.c(205,3): warning C4098: 'printJumpOperand': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsInstPrinter.c(218,3): warning C4098: 'printBranchOperand': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(389,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(391,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(393,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(395,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(397,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(399,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(401,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(403,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(405,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(407,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(409,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(411,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(413,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(415,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(417,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(419,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(421,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(423,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(425,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(427,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(429,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(431,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(433,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(435,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(437,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(439,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(441,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(445,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\Mips\MipsMapping.c(447,3): warning C4098: 'Mips_add_cs_detail': 'void' function returning a value [E:\ProjectTry\capstone6\build\capstone.vcxproj]
         E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(49,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capston
       e.vcxproj]
         E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(55,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capston
       e.vcxproj]
         E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(49,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capston
       e.vcxproj]
         E:\ProjectTry\capstone6\arch\PowerPC\PPCPredicates.h(55,27): warning C5287: operands are different enum types 'ppc_pred' and 'ppc_br_hint'; use an explicit cast to silence this warning [E:\ProjectTry\capstone6\build\capston
       e.vcxproj]

    57 Warning(s)
    0 Error(s)

Time Elapsed 00:00:09.51
/p:Configuration=$config : The term '/p:Configuration=$config' is not recognized as the name of a cmdlet, function, script file, or operable program. Check the spelling of the name, or if a path was included, verify that the path
is correct and try again.
At line:34 char:8
+        /p:Configuration=$config;Platform=$arch
+        ~~~~~~~~~~~~~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (/p:Configuration=$config:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

Platform=$arch : The term 'Platform=$arch' is not recognized as the name of a cmdlet, function, script file, or operable program. Check the spelling of the name, or if a path was included, verify that the path is correct and try
again.
At line:34 char:33
+        /p:Configuration=$config;Platform=$arch
+                                 ~~~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (Platform=$arch:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

==> Built project in: E:\ProjectTry\capstone6\build (Release|x64)

==> Found CMakeLists in: E:\ProjectTry\capstone6\suite\cstest
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
CMake Error at CMakeLists.txt:4 (find_library):
  Could not find libyaml using the following names: libyaml, yaml


-- Configuring incomplete, errors occurred!
WARNING: Solution file not found in E:\ProjectTry\capstone6\suite\cstest\build, skipping...

==> Found CMakeLists in: E:\ProjectTry\capstone6\suite\cstest\test
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- Configuring done (0.0s)
CMake Error at CMakeLists.txt:12 (add_executable):
  No SOURCES given to target: unit_test


CMake Generate step failed.  Build files cannot be regenerated correctly.
WARNING: Solution file not found in E:\ProjectTry\capstone6\suite\cstest\test\build, skipping...

==> Found CMakeLists in: E:\ProjectTry\capstone6\tests\integration
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- Configuring done (0.0s)
CMake Error at CMakeLists.txt:39 (add_executable):
  Cannot find source file:

    //test_litbase.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:27 (add_executable):
  No SOURCES given to target: compat_header_build_test


CMake Error at CMakeLists.txt:39 (add_executable):
  No SOURCES given to target: test_litbase


CMake Generate step failed.  Build files cannot be regenerated correctly.
WARNING: Solution file not found in E:\ProjectTry\capstone6\tests\integration\build, skipping...

==> Found CMakeLists in: E:\ProjectTry\capstone6\tests\unit
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Warning (dev) in CMakeLists.txt:
  cmake_minimum_required() should be called prior to this top-level project()
  call.  Please see the cmake-commands(7) manual for usage documentation of
  both commands.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Selecting Windows SDK version 10.0.26100.0 to target Windows 10.0.22631.
-- Configuring done (0.0s)
CMake Error at CMakeLists.txt:9 (add_executable):
  Cannot find source file:

    //sstream.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:9 (add_executable):
  Cannot find source file:

    //utils.c

  Tried extensions .c .C .c++ .cc .cpp .cxx .cu .mpp .m .M .mm .ixx .cppm
  .ccm .cxxm .c++m .h .hh .h++ .hm .hpp .hxx .in .txx .f .F .for .f77 .f90
  .f95 .f03 .hip .ispc


CMake Error at CMakeLists.txt:9 (add_executable):
  No SOURCES given to target: sstream


CMake Error at CMakeLists.txt:9 (add_executable):
  No SOURCES given to target: utils


CMake Generate step failed.  Build files cannot be regenerated correctly.
WARNING: Solution file not found in E:\ProjectTry\capstone6\tests\unit\build, skipping...
PS C:\Users\0ANew\source\repos>
PS C:\Users\0ANew\source\repos>





