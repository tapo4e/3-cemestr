# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\ebat ya proger\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\ebat ya proger\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\BYBLIK_228\CLionProjects\oop_lab_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/oop_lab_2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/oop_lab_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oop_lab_2.dir/flags.make

CMakeFiles/oop_lab_2.dir/main.cpp.obj: CMakeFiles/oop_lab_2.dir/flags.make
CMakeFiles/oop_lab_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oop_lab_2.dir/main.cpp.obj"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\oop_lab_2.dir\main.cpp.obj -c C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\main.cpp

CMakeFiles/oop_lab_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oop_lab_2.dir/main.cpp.i"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\main.cpp > CMakeFiles\oop_lab_2.dir\main.cpp.i

CMakeFiles/oop_lab_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oop_lab_2.dir/main.cpp.s"
	D:\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\main.cpp -o CMakeFiles\oop_lab_2.dir\main.cpp.s

# Object files for target oop_lab_2
oop_lab_2_OBJECTS = \
"CMakeFiles/oop_lab_2.dir/main.cpp.obj"

# External object files for target oop_lab_2
oop_lab_2_EXTERNAL_OBJECTS =

oop_lab_2.exe: CMakeFiles/oop_lab_2.dir/main.cpp.obj
oop_lab_2.exe: CMakeFiles/oop_lab_2.dir/build.make
oop_lab_2.exe: CMakeFiles/oop_lab_2.dir/linklibs.rsp
oop_lab_2.exe: CMakeFiles/oop_lab_2.dir/objects1.rsp
oop_lab_2.exe: CMakeFiles/oop_lab_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable oop_lab_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\oop_lab_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oop_lab_2.dir/build: oop_lab_2.exe
.PHONY : CMakeFiles/oop_lab_2.dir/build

CMakeFiles/oop_lab_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\oop_lab_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/oop_lab_2.dir/clean

CMakeFiles/oop_lab_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\BYBLIK_228\CLionProjects\oop_lab_2 C:\Users\BYBLIK_228\CLionProjects\oop_lab_2 C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\cmake-build-debug C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\cmake-build-debug C:\Users\BYBLIK_228\CLionProjects\oop_lab_2\cmake-build-debug\CMakeFiles\oop_lab_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oop_lab_2.dir/depend
