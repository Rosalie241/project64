#
# Project64-qt CMakeLists.txt
#

# we use C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# enable automatic Qt stuff
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

add_executable(Project64-qt
    UserInterface/MainWindow.ui
    UserInterface/MainWindow.cpp
    UserInterface/Notification.cpp
    main.cpp
)

target_link_libraries(Project64-qt Qt5::Widgets Project64-core Common 7zip zlib)