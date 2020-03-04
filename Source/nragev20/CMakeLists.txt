#
# nragev20 CMakeLists.txt
#

GENERATE_VERSION_H()

add_library(nragev20 SHARED
    "Debug.cpp"
    "DirectInput.cpp"
    "FileAccess.cpp"
    "GBCart.cpp"
    "Interface.cpp"
    "International.cpp"
    "NRagePluginV2.cpp"
    "PakIO.cpp"
    "XInputController.cpp"
    "Version.h"
    "NRagePluginV2.rc"
)

target_link_libraries(nragev20 xinput dinput8 dxguid Comctl32)