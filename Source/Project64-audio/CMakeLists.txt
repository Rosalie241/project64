#
# Project64-audio CMakeLists.txt
#

GENERATE_VERSION_H()

add_library(Project64-audio SHARED
    "AudioMain.cpp"
    "AudioSettings.cpp"
    "ConfigUI.cpp"
    "Driver/DirectSound.cpp"
    "Driver/OpenSLES.cpp"
    "Driver/SoundBase.cpp"
    "trace.cpp"
    "Version.h"
    "Project64-audio.rc"
)

target_link_libraries(Project64-audio Common Settings dsound)