# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/98/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/98/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/titan/CLionProjects/RecursionProblems

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/titan/CLionProjects/RecursionProblems/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RecursionProblems.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RecursionProblems.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RecursionProblems.dir/flags.make

CMakeFiles/RecursionProblems.dir/main.c.o: CMakeFiles/RecursionProblems.dir/flags.make
CMakeFiles/RecursionProblems.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/titan/CLionProjects/RecursionProblems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RecursionProblems.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/RecursionProblems.dir/main.c.o   -c /home/titan/CLionProjects/RecursionProblems/main.c

CMakeFiles/RecursionProblems.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RecursionProblems.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/titan/CLionProjects/RecursionProblems/main.c > CMakeFiles/RecursionProblems.dir/main.c.i

CMakeFiles/RecursionProblems.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RecursionProblems.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/titan/CLionProjects/RecursionProblems/main.c -o CMakeFiles/RecursionProblems.dir/main.c.s

# Object files for target RecursionProblems
RecursionProblems_OBJECTS = \
"CMakeFiles/RecursionProblems.dir/main.c.o"

# External object files for target RecursionProblems
RecursionProblems_EXTERNAL_OBJECTS =

RecursionProblems: CMakeFiles/RecursionProblems.dir/main.c.o
RecursionProblems: CMakeFiles/RecursionProblems.dir/build.make
RecursionProblems: CMakeFiles/RecursionProblems.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/titan/CLionProjects/RecursionProblems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RecursionProblems"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RecursionProblems.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RecursionProblems.dir/build: RecursionProblems

.PHONY : CMakeFiles/RecursionProblems.dir/build

CMakeFiles/RecursionProblems.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RecursionProblems.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RecursionProblems.dir/clean

CMakeFiles/RecursionProblems.dir/depend:
	cd /home/titan/CLionProjects/RecursionProblems/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/titan/CLionProjects/RecursionProblems /home/titan/CLionProjects/RecursionProblems /home/titan/CLionProjects/RecursionProblems/cmake-build-debug /home/titan/CLionProjects/RecursionProblems/cmake-build-debug /home/titan/CLionProjects/RecursionProblems/cmake-build-debug/CMakeFiles/RecursionProblems.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RecursionProblems.dir/depend

