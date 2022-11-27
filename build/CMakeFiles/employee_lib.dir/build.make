# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mikhail/Documents/C++/proj_tmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikhail/Documents/C++/proj_tmp/build

# Include any dependencies generated for this target.
include CMakeFiles/employee_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/employee_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/employee_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/employee_lib.dir/flags.make

CMakeFiles/employee_lib.dir/src/Database.cpp.o: CMakeFiles/employee_lib.dir/flags.make
CMakeFiles/employee_lib.dir/src/Database.cpp.o: ../src/Database.cpp
CMakeFiles/employee_lib.dir/src/Database.cpp.o: CMakeFiles/employee_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikhail/Documents/C++/proj_tmp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/employee_lib.dir/src/Database.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/employee_lib.dir/src/Database.cpp.o -MF CMakeFiles/employee_lib.dir/src/Database.cpp.o.d -o CMakeFiles/employee_lib.dir/src/Database.cpp.o -c /home/mikhail/Documents/C++/proj_tmp/src/Database.cpp

CMakeFiles/employee_lib.dir/src/Database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/employee_lib.dir/src/Database.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/Documents/C++/proj_tmp/src/Database.cpp > CMakeFiles/employee_lib.dir/src/Database.cpp.i

CMakeFiles/employee_lib.dir/src/Database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/employee_lib.dir/src/Database.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/Documents/C++/proj_tmp/src/Database.cpp -o CMakeFiles/employee_lib.dir/src/Database.cpp.s

CMakeFiles/employee_lib.dir/src/Profile.cpp.o: CMakeFiles/employee_lib.dir/flags.make
CMakeFiles/employee_lib.dir/src/Profile.cpp.o: ../src/Profile.cpp
CMakeFiles/employee_lib.dir/src/Profile.cpp.o: CMakeFiles/employee_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikhail/Documents/C++/proj_tmp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/employee_lib.dir/src/Profile.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/employee_lib.dir/src/Profile.cpp.o -MF CMakeFiles/employee_lib.dir/src/Profile.cpp.o.d -o CMakeFiles/employee_lib.dir/src/Profile.cpp.o -c /home/mikhail/Documents/C++/proj_tmp/src/Profile.cpp

CMakeFiles/employee_lib.dir/src/Profile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/employee_lib.dir/src/Profile.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/Documents/C++/proj_tmp/src/Profile.cpp > CMakeFiles/employee_lib.dir/src/Profile.cpp.i

CMakeFiles/employee_lib.dir/src/Profile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/employee_lib.dir/src/Profile.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/Documents/C++/proj_tmp/src/Profile.cpp -o CMakeFiles/employee_lib.dir/src/Profile.cpp.s

# Object files for target employee_lib
employee_lib_OBJECTS = \
"CMakeFiles/employee_lib.dir/src/Database.cpp.o" \
"CMakeFiles/employee_lib.dir/src/Profile.cpp.o"

# External object files for target employee_lib
employee_lib_EXTERNAL_OBJECTS =

libemployee_lib.a: CMakeFiles/employee_lib.dir/src/Database.cpp.o
libemployee_lib.a: CMakeFiles/employee_lib.dir/src/Profile.cpp.o
libemployee_lib.a: CMakeFiles/employee_lib.dir/build.make
libemployee_lib.a: CMakeFiles/employee_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mikhail/Documents/C++/proj_tmp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libemployee_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/employee_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/employee_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/employee_lib.dir/build: libemployee_lib.a
.PHONY : CMakeFiles/employee_lib.dir/build

CMakeFiles/employee_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/employee_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/employee_lib.dir/clean

CMakeFiles/employee_lib.dir/depend:
	cd /home/mikhail/Documents/C++/proj_tmp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikhail/Documents/C++/proj_tmp /home/mikhail/Documents/C++/proj_tmp /home/mikhail/Documents/C++/proj_tmp/build /home/mikhail/Documents/C++/proj_tmp/build /home/mikhail/Documents/C++/proj_tmp/build/CMakeFiles/employee_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/employee_lib.dir/depend

