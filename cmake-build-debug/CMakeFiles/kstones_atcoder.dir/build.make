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
include CMakeFiles/kstones_atcoder.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kstones_atcoder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kstones_atcoder.dir/flags.make

CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.obj: CMakeFiles/kstones_atcoder.dir/flags.make
CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.obj: CMakeFiles/kstones_atcoder.dir/includes_CXX.rsp
CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.obj: ../kstones_atcoder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\kstones_atcoder.dir\kstones_atcoder.cpp.obj -c C:\Users\HP\Desktop\C++\kstones_atcoder.cpp

CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\kstones_atcoder.cpp > CMakeFiles\kstones_atcoder.dir\kstones_atcoder.cpp.i

CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\kstones_atcoder.cpp -o CMakeFiles\kstones_atcoder.dir\kstones_atcoder.cpp.s

# Object files for target kstones_atcoder
kstones_atcoder_OBJECTS = \
"CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.obj"

# External object files for target kstones_atcoder
kstones_atcoder_EXTERNAL_OBJECTS =

kstones_atcoder.exe: CMakeFiles/kstones_atcoder.dir/kstones_atcoder.cpp.obj
kstones_atcoder.exe: CMakeFiles/kstones_atcoder.dir/build.make
kstones_atcoder.exe: CMakeFiles/kstones_atcoder.dir/linklibs.rsp
kstones_atcoder.exe: CMakeFiles/kstones_atcoder.dir/objects1.rsp
kstones_atcoder.exe: CMakeFiles/kstones_atcoder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kstones_atcoder.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\kstones_atcoder.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kstones_atcoder.dir/build: kstones_atcoder.exe

.PHONY : CMakeFiles/kstones_atcoder.dir/build

CMakeFiles/kstones_atcoder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kstones_atcoder.dir\cmake_clean.cmake
.PHONY : CMakeFiles/kstones_atcoder.dir/clean

CMakeFiles/kstones_atcoder.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\kstones_atcoder.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kstones_atcoder.dir/depend

