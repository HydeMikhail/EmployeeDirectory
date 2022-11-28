cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(employee_directory VERSION 0.0.1 LANGUAGES CXX)

# Configure Qt Libraries
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.9.9/gcc_64/)
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

# Include Vendor Directories
include_directories(vendor/json/include)
add_subdirectory(vendor/json)

# Generate Static Library
add_library(employee_lib
    src/MainWindow.cpp
    src/Database.cpp
    src/Profile.cpp
    src/Helpers.cpp
    src/mainwindow.ui

    include/Database.h
    include/Profile.h
    include/Helpers.h
    include/MainWindow.h
)

target_include_directories(employee_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        ${CMAKE_PREFIX_PATH}/include
)

# Generate Executable and Link Libraries
add_executable(employee_directory src/main.cpp)
target_link_libraries(employee_directory
    PRIVATE
        employee_lib
        Qt5::Core
        Qt5::Widgets
)

# Copy Data Folder to Build Directory
file(COPY data DESTINATION .)