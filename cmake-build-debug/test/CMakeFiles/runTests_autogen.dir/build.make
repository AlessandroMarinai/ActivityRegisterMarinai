# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/simone/Downloads/clion-2020.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/simone/Downloads/clion-2020.1.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/simone/CLionProjects/ActivityRegister

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/simone/CLionProjects/ActivityRegister/cmake-build-debug

# Utility rule file for runTests_autogen.

# Include the progress variables for this target.
include test/CMakeFiles/runTests_autogen.dir/progress.make

test/CMakeFiles/runTests_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/simone/CLionProjects/ActivityRegister/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target runTests"
	cd /home/simone/CLionProjects/ActivityRegister/cmake-build-debug/test && /home/simone/Downloads/clion-2020.1.2/bin/cmake/linux/bin/cmake -E cmake_autogen /home/simone/CLionProjects/ActivityRegister/cmake-build-debug/test/CMakeFiles/runTests_autogen.dir/AutogenInfo.json Debug

runTests_autogen: test/CMakeFiles/runTests_autogen
runTests_autogen: test/CMakeFiles/runTests_autogen.dir/build.make

.PHONY : runTests_autogen

# Rule to build all files generated by this target.
test/CMakeFiles/runTests_autogen.dir/build: runTests_autogen

.PHONY : test/CMakeFiles/runTests_autogen.dir/build

test/CMakeFiles/runTests_autogen.dir/clean:
	cd /home/simone/CLionProjects/ActivityRegister/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/runTests_autogen.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/runTests_autogen.dir/clean

test/CMakeFiles/runTests_autogen.dir/depend:
	cd /home/simone/CLionProjects/ActivityRegister/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/simone/CLionProjects/ActivityRegister /home/simone/CLionProjects/ActivityRegister/test /home/simone/CLionProjects/ActivityRegister/cmake-build-debug /home/simone/CLionProjects/ActivityRegister/cmake-build-debug/test /home/simone/CLionProjects/ActivityRegister/cmake-build-debug/test/CMakeFiles/runTests_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/runTests_autogen.dir/depend

