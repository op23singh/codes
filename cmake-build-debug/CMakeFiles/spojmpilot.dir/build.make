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
include CMakeFiles/spojmpilot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/spojmpilot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spojmpilot.dir/flags.make

CMakeFiles/spojmpilot.dir/spojmpilot.cpp.obj: CMakeFiles/spojmpilot.dir/flags.make
CMakeFiles/spojmpilot.dir/spojmpilot.cpp.obj: CMakeFiles/spojmpilot.dir/includes_CXX.rsp
CMakeFiles/spojmpilot.dir/spojmpilot.cpp.obj: ../spojmpilot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spojmpilot.dir/spojmpilot.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\spojmpilot.dir\spojmpilot.cpp.obj -c C:\Users\HP\Desktop\C++\spojmpilot.cpp

CMakeFiles/spojmpilot.dir/spojmpilot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spojmpilot.dir/spojmpilot.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\spojmpilot.cpp > CMakeFiles\spojmpilot.dir\spojmpilot.cpp.i

CMakeFiles/spojmpilot.dir/spojmpilot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spojmpilot.dir/spojmpilot.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\spojmpilot.cpp -o CMakeFiles\spojmpilot.dir\spojmpilot.cpp.s

# Object files for target spojmpilot
spojmpilot_OBJECTS = \
"CMakeFiles/spojmpilot.dir/spojmpilot.cpp.obj"

# External object files for target spojmpilot
spojmpilot_EXTERNAL_OBJECTS =

spojmpilot.exe: CMakeFiles/spojmpilot.dir/spojmpilot.cpp.obj
spojmpilot.exe: CMakeFiles/spojmpilot.dir/build.make
spojmpilot.exe: CMakeFiles/spojmpilot.dir/linklibs.rsp
spojmpilot.exe: CMakeFiles/spojmpilot.dir/objects1.rsp
spojmpilot.exe: CMakeFiles/spojmpilot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable spojmpilot.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\spojmpilot.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spojmpilot.dir/build: spojmpilot.exe

.PHONY : CMakeFiles/spojmpilot.dir/build

CMakeFiles/spojmpilot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\spojmpilot.dir\cmake_clean.cmake
.PHONY : CMakeFiles/spojmpilot.dir/clean

CMakeFiles/spojmpilot.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\spojmpilot.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spojmpilot.dir/depend

