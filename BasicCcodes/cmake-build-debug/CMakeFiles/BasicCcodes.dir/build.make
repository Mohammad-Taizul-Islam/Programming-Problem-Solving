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
CMAKE_SOURCE_DIR = /home/titan/CLionProjects/BasicCcodes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/titan/CLionProjects/BasicCcodes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BasicCcodes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BasicCcodes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BasicCcodes.dir/flags.make

CMakeFiles/BasicCcodes.dir/main.cpp.o: CMakeFiles/BasicCcodes.dir/flags.make
CMakeFiles/BasicCcodes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/titan/CLionProjects/BasicCcodes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BasicCcodes.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BasicCcodes.dir/main.cpp.o -c /home/titan/CLionProjects/BasicCcodes/main.cpp

CMakeFiles/BasicCcodes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BasicCcodes.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/titan/CLionProjects/BasicCcodes/main.cpp > CMakeFiles/BasicCcodes.dir/main.cpp.i

CMakeFiles/BasicCcodes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BasicCcodes.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/titan/CLionProjects/BasicCcodes/main.cpp -o CMakeFiles/BasicCcodes.dir/main.cpp.s

# Object files for target BasicCcodes
BasicCcodes_OBJECTS = \
"CMakeFiles/BasicCcodes.dir/main.cpp.o"

# External object files for target BasicCcodes
BasicCcodes_EXTERNAL_OBJECTS =

BasicCcodes: CMakeFiles/BasicCcodes.dir/main.cpp.o
BasicCcodes: CMakeFiles/BasicCcodes.dir/build.make
BasicCcodes: CMakeFiles/BasicCcodes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/titan/CLionProjects/BasicCcodes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BasicCcodes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BasicCcodes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BasicCcodes.dir/build: BasicCcodes

.PHONY : CMakeFiles/BasicCcodes.dir/build

CMakeFiles/BasicCcodes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BasicCcodes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BasicCcodes.dir/clean

CMakeFiles/BasicCcodes.dir/depend:
	cd /home/titan/CLionProjects/BasicCcodes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/titan/CLionProjects/BasicCcodes /home/titan/CLionProjects/BasicCcodes /home/titan/CLionProjects/BasicCcodes/cmake-build-debug /home/titan/CLionProjects/BasicCcodes/cmake-build-debug /home/titan/CLionProjects/BasicCcodes/cmake-build-debug/CMakeFiles/BasicCcodes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BasicCcodes.dir/depend

