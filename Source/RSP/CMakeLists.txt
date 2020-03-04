#
# RSP CMakeLists.txt
#

GENERATE_VERSION_H()

add_library(RSP SHARED
    "breakpoint.c"
    "Cpu.c"
    "dma.c"
    "Interpreter CPU.c"
    "Interpreter Ops.c"
    "log.cpp"
    "Main.cpp"
    "memory.c"
    "Mmx.c"
    "Profiling.cpp"
    "Recompiler Analysis.c"
    "Recompiler CPU.c"
    "Recompiler Ops.c"
    "Recompiler Sections.c"
    "RSP Command.c"
    "RSP Register.c"
    "Sse.c"
    "X86.c"
    "Version.h"
    "RSP.rc"
)

target_link_libraries(RSP Common Settings)