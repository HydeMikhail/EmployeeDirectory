cmake_minimum_required(VERSION 3.1)
project(employee_directory VERSION 0.0.1 LANGUAGES CXX)

include_directories(vendor/json/include)
add_subdirectory(vendor/json)

# Generate Static Library
add_library(employee_lib STATIC
    src/Database.cpp
    src/Profile.cpp
)

target_include_directories(employee_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# Generate Executable and Link Libraries
add_executable(employee_directory src/main.cpp)
target_link_libraries(employee_directory
    PRIVATE
        employee_lib
)

# Copy Data Folder to Build Directory
file(COPY data DESTINATION .) 