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
CMAKE_COMMAND = C:\Users\HP\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.4746.93\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\HP\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.4746.93\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\HP\Desktop\C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\HP\Desktop\C++\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Max_consecutive_ones_III.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Max_consecutive_ones_III.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Max_consecutive_ones_III.dir/flags.make

CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.obj: CMakeFiles/Max_consecutive_ones_III.dir/flags.make
CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.obj: ../Max_consecutive_ones_III.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.obj"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Max_consecutive_ones_III.dir\Max_consecutive_ones_III.cpp.obj -c C:\Users\HP\Desktop\C++\Max_consecutive_ones_III.cpp

CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.i"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\Max_consecutive_ones_III.cpp > CMakeFiles\Max_consecutive_ones_III.dir\Max_consecutive_ones_III.cpp.i

CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.s"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\Max_consecutive_ones_III.cpp -o CMakeFiles\Max_consecutive_ones_III.dir\Max_consecutive_ones_III.cpp.s

# Object files for target Max_consecutive_ones_III
Max_consecutive_ones_III_OBJECTS = \
"CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.obj"

# External object files for target Max_consecutive_ones_III
Max_consecutive_ones_III_EXTERNAL_OBJECTS =

Max_consecutive_ones_III.exe: CMakeFiles/Max_consecutive_ones_III.dir/Max_consecutive_ones_III.cpp.obj
Max_consecutive_ones_III.exe: CMakeFiles/Max_consecutive_ones_III.dir/build.make
Max_consecutive_ones_III.exe: CMakeFiles/Max_consecutive_ones_III.dir/linklibs.rsp
Max_consecutive_ones_III.exe: CMakeFiles/Max_consecutive_ones_III.dir/objects1.rsp
Max_consecutive_ones_III.exe: CMakeFiles/Max_consecutive_ones_III.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Max_consecutive_ones_III.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Max_consecutive_ones_III.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Max_consecutive_ones_III.dir/build: Max_consecutive_ones_III.exe
.PHONY : CMakeFiles/Max_consecutive_ones_III.dir/build

CMakeFiles/Max_consecutive_ones_III.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Max_consecutive_ones_III.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Max_consecutive_ones_III.dir/clean

CMakeFiles/Max_consecutive_ones_III.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\Max_consecutive_ones_III.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Max_consecutive_ones_III.dir/depend

