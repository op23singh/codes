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
CMAKE_COMMAND = C:\Users\HP\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\HP\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\HP\Desktop\C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\HP\Desktop\C++\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/paint_house_gfg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/paint_house_gfg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/paint_house_gfg.dir/flags.make

CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.obj: CMakeFiles/paint_house_gfg.dir/flags.make
CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.obj: CMakeFiles/paint_house_gfg.dir/includes_CXX.rsp
CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.obj: ../paint_house_gfg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\paint_house_gfg.dir\paint_house_gfg.cpp.obj -c C:\Users\HP\Desktop\C++\paint_house_gfg.cpp

CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\paint_house_gfg.cpp > CMakeFiles\paint_house_gfg.dir\paint_house_gfg.cpp.i

CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\paint_house_gfg.cpp -o CMakeFiles\paint_house_gfg.dir\paint_house_gfg.cpp.s

# Object files for target paint_house_gfg
paint_house_gfg_OBJECTS = \
"CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.obj"

# External object files for target paint_house_gfg
paint_house_gfg_EXTERNAL_OBJECTS =

paint_house_gfg.exe: CMakeFiles/paint_house_gfg.dir/paint_house_gfg.cpp.obj
paint_house_gfg.exe: CMakeFiles/paint_house_gfg.dir/build.make
paint_house_gfg.exe: CMakeFiles/paint_house_gfg.dir/linklibs.rsp
paint_house_gfg.exe: CMakeFiles/paint_house_gfg.dir/objects1.rsp
paint_house_gfg.exe: CMakeFiles/paint_house_gfg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable paint_house_gfg.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\paint_house_gfg.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/paint_house_gfg.dir/build: paint_house_gfg.exe

.PHONY : CMakeFiles/paint_house_gfg.dir/build

CMakeFiles/paint_house_gfg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\paint_house_gfg.dir\cmake_clean.cmake
.PHONY : CMakeFiles/paint_house_gfg.dir/clean

CMakeFiles/paint_house_gfg.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\paint_house_gfg.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/paint_house_gfg.dir/depend

