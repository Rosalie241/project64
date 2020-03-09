cmake_minimum_required(VERSION 3.16.0)
#
# Project64 CMakeLists.txt
#
project(Project64)

# add current directory & binary directory
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Require C++17
set(CMAKE_CXX_STANDARD 17)

# Global include directories
include_directories(Source/ Source/3rdParty Source/3rdParty/directx/include)

# Get version using git
execute_process(
    COMMAND git describe --tags --dirty
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    OUTPUT_VARIABLE GIT_DESCRIBE_VERSION
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

add_subdirectory(Source/3rdParty/7zip)
add_subdirectory(Source/3rdParty/duktape)
add_subdirectory(Source/3rdParty/png)
add_subdirectory(Source/3rdParty/zlib)

add_subdirectory(Source/Common)
add_subdirectory(Source/Settings)
add_subdirectory(Source/UpdateVersion)

# macro for generating version.h from version.h.in
macro(GENERATE_VERSION_H)
    add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Version.h
        COMMAND $<TARGET_FILE:UpdateVersion> ${CMAKE_CURRENT_SOURCE_DIR}/Version.h.in ${CMAKE_CURRENT_BINARY_DIR}/Version.h ${GIT_DESCRIBE_VERSION}
        DEPENDS UpdateVersion
    )
endmacro()

add_subdirectory(Source/Project64-core)
#add_subdirectory(Source/Project64)
add_subdirectory(Source/Project64-qt)

# Plugins
add_subdirectory(Source/Project64-video)
add_subdirectory(Source/Project64-audio)
add_subdirectory(Source/RSP)
add_subdirectory(Source/nragev20)
