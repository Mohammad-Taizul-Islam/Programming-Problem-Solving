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
CMAKE_SOURCE_DIR = /home/titan/CLionProjects/reverseString

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/titan/CLionProjects/reverseString/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/reverseString.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reverseString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reverseString.dir/flags.make

CMakeFiles/reverseString.dir/main.c.o: CMakeFiles/reverseString.dir/flags.make
CMakeFiles/reverseString.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/titan/CLionProjects/reverseString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/reverseString.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/reverseString.dir/main.c.o   -c /home/titan/CLionProjects/reverseString/main.c

CMakeFiles/reverseString.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/reverseString.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/titan/CLionProjects/reverseString/main.c > CMakeFiles/reverseString.dir/main.c.i

CMakeFiles/reverseString.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/reverseString.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/titan/CLionProjects/reverseString/main.c -o CMakeFiles/reverseString.dir/main.c.s

# Object files for target reverseString
reverseString_OBJECTS = \
"CMakeFiles/reverseString.dir/main.c.o"

# External object files for target reverseString
reverseString_EXTERNAL_OBJECTS =

reverseString: CMakeFiles/reverseString.dir/main.c.o
reverseString: CMakeFiles/reverseString.dir/build.make
reverseString: CMakeFiles/reverseString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/titan/CLionProjects/reverseString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable reverseString"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reverseString.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reverseString.dir/build: reverseString

.PHONY : CMakeFiles/reverseString.dir/build

CMakeFiles/reverseString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reverseString.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reverseString.dir/clean

CMakeFiles/reverseString.dir/depend:
	cd /home/titan/CLionProjects/reverseString/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/titan/CLionProjects/reverseString /home/titan/CLionProjects/reverseString /home/titan/CLionProjects/reverseString/cmake-build-debug /home/titan/CLionProjects/reverseString/cmake-build-debug /home/titan/CLionProjects/reverseString/cmake-build-debug/CMakeFiles/reverseString.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reverseString.dir/depend

