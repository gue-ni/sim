# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jakob/Projects/flight/sim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jakob/Projects/flight/sim

# Utility rule file for uninstall.

# Include the progress variables for this target.
include dependencies/GLFW/CMakeFiles/uninstall.dir/progress.make

dependencies/GLFW/CMakeFiles/uninstall:
	cd /home/jakob/Projects/flight/sim/dependencies/GLFW && /usr/bin/cmake -P /home/jakob/Projects/flight/sim/dependencies/GLFW/cmake_uninstall.cmake

uninstall: dependencies/GLFW/CMakeFiles/uninstall
uninstall: dependencies/GLFW/CMakeFiles/uninstall.dir/build.make

.PHONY : uninstall

# Rule to build all files generated by this target.
dependencies/GLFW/CMakeFiles/uninstall.dir/build: uninstall

.PHONY : dependencies/GLFW/CMakeFiles/uninstall.dir/build

dependencies/GLFW/CMakeFiles/uninstall.dir/clean:
	cd /home/jakob/Projects/flight/sim/dependencies/GLFW && $(CMAKE_COMMAND) -P CMakeFiles/uninstall.dir/cmake_clean.cmake
.PHONY : dependencies/GLFW/CMakeFiles/uninstall.dir/clean

dependencies/GLFW/CMakeFiles/uninstall.dir/depend:
	cd /home/jakob/Projects/flight/sim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jakob/Projects/flight/sim /home/jakob/Projects/flight/sim/dependencies/GLFW /home/jakob/Projects/flight/sim /home/jakob/Projects/flight/sim/dependencies/GLFW /home/jakob/Projects/flight/sim/dependencies/GLFW/CMakeFiles/uninstall.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dependencies/GLFW/CMakeFiles/uninstall.dir/depend

