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
include CMakeFiles/Next_Greater_to_left.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Next_Greater_to_left.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Next_Greater_to_left.dir/flags.make

CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.obj: CMakeFiles/Next_Greater_to_left.dir/flags.make
CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.obj: CMakeFiles/Next_Greater_to_left.dir/includes_CXX.rsp
CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.obj: ../Next_Greater_to_left.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Next_Greater_to_left.dir\Next_Greater_to_left.cpp.obj -c C:\Users\HP\Desktop\C++\Next_Greater_to_left.cpp

CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\Next_Greater_to_left.cpp > CMakeFiles\Next_Greater_to_left.dir\Next_Greater_to_left.cpp.i

CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\Next_Greater_to_left.cpp -o CMakeFiles\Next_Greater_to_left.dir\Next_Greater_to_left.cpp.s

# Object files for target Next_Greater_to_left
Next_Greater_to_left_OBJECTS = \
"CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.obj"

# External object files for target Next_Greater_to_left
Next_Greater_to_left_EXTERNAL_OBJECTS =

Next_Greater_to_left.exe: CMakeFiles/Next_Greater_to_left.dir/Next_Greater_to_left.cpp.obj
Next_Greater_to_left.exe: CMakeFiles/Next_Greater_to_left.dir/build.make
Next_Greater_to_left.exe: CMakeFiles/Next_Greater_to_left.dir/linklibs.rsp
Next_Greater_to_left.exe: CMakeFiles/Next_Greater_to_left.dir/objects1.rsp
Next_Greater_to_left.exe: CMakeFiles/Next_Greater_to_left.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Next_Greater_to_left.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Next_Greater_to_left.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Next_Greater_to_left.dir/build: Next_Greater_to_left.exe

.PHONY : CMakeFiles/Next_Greater_to_left.dir/build

CMakeFiles/Next_Greater_to_left.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Next_Greater_to_left.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Next_Greater_to_left.dir/clean

CMakeFiles/Next_Greater_to_left.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\Next_Greater_to_left.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Next_Greater_to_left.dir/depend

