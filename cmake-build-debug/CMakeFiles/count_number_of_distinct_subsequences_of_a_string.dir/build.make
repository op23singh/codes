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
include CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/flags.make

CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.obj: CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/flags.make
CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.obj: CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/includes_CXX.rsp
CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.obj: ../count_number_of_distinct_subsequences_of_a_string.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\count_number_of_distinct_subsequences_of_a_string.dir\count_number_of_distinct_subsequences_of_a_string.cpp.obj -c C:\Users\HP\Desktop\C++\count_number_of_distinct_subsequences_of_a_string.cpp

CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\Desktop\C++\count_number_of_distinct_subsequences_of_a_string.cpp > CMakeFiles\count_number_of_distinct_subsequences_of_a_string.dir\count_number_of_distinct_subsequences_of_a_string.cpp.i

CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\Desktop\C++\count_number_of_distinct_subsequences_of_a_string.cpp -o CMakeFiles\count_number_of_distinct_subsequences_of_a_string.dir\count_number_of_distinct_subsequences_of_a_string.cpp.s

# Object files for target count_number_of_distinct_subsequences_of_a_string
count_number_of_distinct_subsequences_of_a_string_OBJECTS = \
"CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.obj"

# External object files for target count_number_of_distinct_subsequences_of_a_string
count_number_of_distinct_subsequences_of_a_string_EXTERNAL_OBJECTS =

count_number_of_distinct_subsequences_of_a_string.exe: CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/count_number_of_distinct_subsequences_of_a_string.cpp.obj
count_number_of_distinct_subsequences_of_a_string.exe: CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/build.make
count_number_of_distinct_subsequences_of_a_string.exe: CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/linklibs.rsp
count_number_of_distinct_subsequences_of_a_string.exe: CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/objects1.rsp
count_number_of_distinct_subsequences_of_a_string.exe: CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable count_number_of_distinct_subsequences_of_a_string.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\count_number_of_distinct_subsequences_of_a_string.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/build: count_number_of_distinct_subsequences_of_a_string.exe

.PHONY : CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/build

CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\count_number_of_distinct_subsequences_of_a_string.dir\cmake_clean.cmake
.PHONY : CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/clean

CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++ C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug C:\Users\HP\Desktop\C++\cmake-build-debug\CMakeFiles\count_number_of_distinct_subsequences_of_a_string.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/count_number_of_distinct_subsequences_of_a_string.dir/depend
