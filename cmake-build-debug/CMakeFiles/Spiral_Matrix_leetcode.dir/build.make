# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = C:\Users\HP\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7628.27\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\HP\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7628.27\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\HP\Desktop\C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\HP\Desktop\C++\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Spiral_Matrix_leetcode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Spiral_Matrix_leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Spiral_Matrix_leetcode.dir/flags.make

CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.obj: CMakeFiles/Spiral_Matrix_leetcode.dir/flags.make
CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.obj: CMakeFiles/Spiral_Matrix_leetcode.dir/includes_CXX.rsp
CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.obj: ../Spiral_Matrix_leetcode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Spiral_Matrix_leetcode.dir\Spiral_Matrix_leetcode.cpp.obj -c C:\Users\HP\Desktop\C++\Spiral_Matrix_leetcode.cpp

CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\Spiral_Matrix_leetcode.cpp > CMakeFiles\Spiral_Matrix_leetcode.dir\Spiral_Matrix_leetcode.cpp.i

CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\Spiral_Matrix_leetcode.cpp -o CMakeFiles\Spiral_Matrix_leetcode.dir\Spiral_Matrix_leetcode.cpp.s

# Object files for target Spiral_Matrix_leetcode
Spiral_Matrix_leetcode_OBJECTS = \
"CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.obj"

# External object files for target Spiral_Matrix_leetcode
Spiral_Matrix_leetcode_EXTERNAL_OBJECTS =

Spiral_Matrix_leetcode.exe: CMakeFiles/Spiral_Matrix_leetcode.dir/Spiral_Matrix_leetcode.cpp.obj
Spiral_Matrix_leetcode.exe: CMakeFiles/Spiral_Matrix_leetcode.dir/build.make
Spiral_Matrix_leetcode.exe: CMakeFiles/Spiral_Matrix_leetcode.dir/linklibs.rsp
Spiral_Matrix_leetcode.exe: CMakeFiles/Spiral_Matrix_leetcode.dir/objects1.rsp
Spiral_Matrix_leetcode.exe: CMakeFiles/Spiral_Matrix_leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Spiral_Matrix_leetcode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Spiral_Matrix_leetcode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Spiral_Matrix_leetcode.dir/build: Spiral_Matrix_leetcode.exe

.PHONY : CMakeFiles/Spiral_Matrix_leetcode.dir/build

CMakeFiles/Spiral_Matrix_leetcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Spiral_Matrix_leetcode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Spiral_Matrix_leetcode.dir/clean

CMakeFiles/Spiral_Matrix_leetcode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\Spiral_Matrix_leetcode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Spiral_Matrix_leetcode.dir/depend

