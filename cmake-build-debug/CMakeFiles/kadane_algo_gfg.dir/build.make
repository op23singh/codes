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
include CMakeFiles/kadane_algo_gfg.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/kadane_algo_gfg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kadane_algo_gfg.dir/flags.make

CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.obj: CMakeFiles/kadane_algo_gfg.dir/flags.make
CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.obj: ../kadane_algo_gfg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.obj"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\kadane_algo_gfg.dir\kadane_algo_gfg.cpp.obj -c C:\Users\HP\Desktop\C++\kadane_algo_gfg.cpp

CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.i"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\kadane_algo_gfg.cpp > CMakeFiles\kadane_algo_gfg.dir\kadane_algo_gfg.cpp.i

CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.s"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\kadane_algo_gfg.cpp -o CMakeFiles\kadane_algo_gfg.dir\kadane_algo_gfg.cpp.s

# Object files for target kadane_algo_gfg
kadane_algo_gfg_OBJECTS = \
"CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.obj"

# External object files for target kadane_algo_gfg
kadane_algo_gfg_EXTERNAL_OBJECTS =

kadane_algo_gfg.exe: CMakeFiles/kadane_algo_gfg.dir/kadane_algo_gfg.cpp.obj
kadane_algo_gfg.exe: CMakeFiles/kadane_algo_gfg.dir/build.make
kadane_algo_gfg.exe: CMakeFiles/kadane_algo_gfg.dir/linklibs.rsp
kadane_algo_gfg.exe: CMakeFiles/kadane_algo_gfg.dir/objects1.rsp
kadane_algo_gfg.exe: CMakeFiles/kadane_algo_gfg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kadane_algo_gfg.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\kadane_algo_gfg.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kadane_algo_gfg.dir/build: kadane_algo_gfg.exe
.PHONY : CMakeFiles/kadane_algo_gfg.dir/build

CMakeFiles/kadane_algo_gfg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kadane_algo_gfg.dir\cmake_clean.cmake
.PHONY : CMakeFiles/kadane_algo_gfg.dir/clean

CMakeFiles/kadane_algo_gfg.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\kadane_algo_gfg.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kadane_algo_gfg.dir/depend

