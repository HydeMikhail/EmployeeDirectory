cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(employee_directory VERSION 0.0.1 LANGUAGES CXX)

# Configure Qt Libraries
set(CMAKE_AUTOUIC ON) # Handle Qt uic Code Generator
set(CMAKE_AUTOMOC ON) # Handle Qt moc Preprocessor
set(CMAKE_AUTOUIC_SEARCH_PATHS forms) # Point AUTOUIC to Paths
set(CMAKE_POSITION_INDEPENDENT_CODE ON) # fPIC flag for Qt
set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.9.9/gcc_64/) # Point CMake to Qt CmakeConfig
find_package(Qt5 COMPONENTS Core Widgets REQUIRED) # Find Required Qt Packages

# Include Lib Directories
include_directories(vendor/json/include/) # Add directory to include path
add_subdirectory(vendor/json) # Add Subdirectory CMake to CMake build

# Generate Static Library
# Add all header, cpp, and ui files
# for compilation -> Library
add_library(employee_lib
    forms/loginwindow.ui
    forms/userwindow.ui
    forms/useredit.ui    

    src/LoginWindow.cpp
    src/UserWindow.cpp
    src/UserEdit.cpp
    src/Database.cpp
    src/Profile.cpp
    src/Helpers.cpp
    src/Manager.cpp

    include/LoginWindow.h
    include/UserWindow.h
    include/UserEdit.h
    include/Database.h
    include/Profile.h
    include/Helpers.h
    include/Manager.h
)

target_include_directories(employee_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/forms
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