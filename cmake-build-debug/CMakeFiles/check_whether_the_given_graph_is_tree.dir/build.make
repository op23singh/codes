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
include CMakeFiles/check_whether_the_given_graph_is_tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/check_whether_the_given_graph_is_tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/check_whether_the_given_graph_is_tree.dir/flags.make

CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.obj: CMakeFiles/check_whether_the_given_graph_is_tree.dir/flags.make
CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.obj: CMakeFiles/check_whether_the_given_graph_is_tree.dir/includes_CXX.rsp
CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.obj: ../check_whether_the_given_graph_is_tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\check_whether_the_given_graph_is_tree.dir\check_whether_the_given_graph_is_tree.cpp.obj -c C:\Users\HP\Desktop\C++\check_whether_the_given_graph_is_tree.cpp

CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\check_whether_the_given_graph_is_tree.cpp > CMakeFiles\check_whether_the_given_graph_is_tree.dir\check_whether_the_given_graph_is_tree.cpp.i

CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\check_whether_the_given_graph_is_tree.cpp -o CMakeFiles\check_whether_the_given_graph_is_tree.dir\check_whether_the_given_graph_is_tree.cpp.s

# Object files for target check_whether_the_given_graph_is_tree
check_whether_the_given_graph_is_tree_OBJECTS = \
"CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.obj"

# External object files for target check_whether_the_given_graph_is_tree
check_whether_the_given_graph_is_tree_EXTERNAL_OBJECTS =

check_whether_the_given_graph_is_tree.exe: CMakeFiles/check_whether_the_given_graph_is_tree.dir/check_whether_the_given_graph_is_tree.cpp.obj
check_whether_the_given_graph_is_tree.exe: CMakeFiles/check_whether_the_given_graph_is_tree.dir/build.make
check_whether_the_given_graph_is_tree.exe: CMakeFiles/check_whether_the_given_graph_is_tree.dir/linklibs.rsp
check_whether_the_given_graph_is_tree.exe: CMakeFiles/check_whether_the_given_graph_is_tree.dir/objects1.rsp
check_whether_the_given_graph_is_tree.exe: CMakeFiles/check_whether_the_given_graph_is_tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable check_whether_the_given_graph_is_tree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\check_whether_the_given_graph_is_tree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/check_whether_the_given_graph_is_tree.dir/build: check_whether_the_given_graph_is_tree.exe

.PHONY : CMakeFiles/check_whether_the_given_graph_is_tree.dir/build

CMakeFiles/check_whether_the_given_graph_is_tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\check_whether_the_given_graph_is_tree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/check_whether_the_given_graph_is_tree.dir/clean

CMakeFiles/check_whether_the_given_graph_is_tree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\check_whether_the_given_graph_is_tree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check_whether_the_given_graph_is_tree.dir/depend

