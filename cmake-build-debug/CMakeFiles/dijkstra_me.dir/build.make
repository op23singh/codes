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
include CMakeFiles/dijkstra_me.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/dijkstra_me.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dijkstra_me.dir/flags.make

CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.obj: CMakeFiles/dijkstra_me.dir/flags.make
CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.obj: ../dijkstra_me.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.obj"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dijkstra_me.dir\dijkstra_me.cpp.obj -c C:\Users\HP\Desktop\C++\dijkstra_me.cpp

CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.i"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\dijkstra_me.cpp > CMakeFiles\dijkstra_me.dir\dijkstra_me.cpp.i

CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.s"
	C:\TDM-GCC-32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\dijkstra_me.cpp -o CMakeFiles\dijkstra_me.dir\dijkstra_me.cpp.s

# Object files for target dijkstra_me
dijkstra_me_OBJECTS = \
"CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.obj"

# External object files for target dijkstra_me
dijkstra_me_EXTERNAL_OBJECTS =

dijkstra_me.exe: CMakeFiles/dijkstra_me.dir/dijkstra_me.cpp.obj
dijkstra_me.exe: CMakeFiles/dijkstra_me.dir/build.make
dijkstra_me.exe: CMakeFiles/dijkstra_me.dir/linklibs.rsp
dijkstra_me.exe: CMakeFiles/dijkstra_me.dir/objects1.rsp
dijkstra_me.exe: CMakeFiles/dijkstra_me.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dijkstra_me.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dijkstra_me.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dijkstra_me.dir/build: dijkstra_me.exe
.PHONY : CMakeFiles/dijkstra_me.dir/build

CMakeFiles/dijkstra_me.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dijkstra_me.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dijkstra_me.dir/clean

CMakeFiles/dijkstra_me.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\dijkstra_me.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dijkstra_me.dir/depend

