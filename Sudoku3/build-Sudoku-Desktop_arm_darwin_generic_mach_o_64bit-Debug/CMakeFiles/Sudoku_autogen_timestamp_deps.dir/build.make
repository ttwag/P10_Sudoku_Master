# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/Sudoku

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/build-Sudoku-Desktop_arm_darwin_generic_mach_o_64bit-Debug

# Utility rule file for Sudoku_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include CMakeFiles/Sudoku_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Sudoku_autogen_timestamp_deps.dir/progress.make

CMakeFiles/Sudoku_autogen_timestamp_deps: /Users/taowang/Qt6.6.1/6.6.1/macos/./libexec/uic
CMakeFiles/Sudoku_autogen_timestamp_deps: /Users/taowang/Qt6.6.1/6.6.1/macos/./libexec/moc
CMakeFiles/Sudoku_autogen_timestamp_deps: /Users/taowang/Qt6.6.1/6.6.1/macos/lib/QtCore.framework/Versions/A/QtCore
CMakeFiles/Sudoku_autogen_timestamp_deps: /Users/taowang/Qt6.6.1/6.6.1/macos/lib/QtWidgets.framework/Versions/A/QtWidgets

Sudoku_autogen_timestamp_deps: CMakeFiles/Sudoku_autogen_timestamp_deps
Sudoku_autogen_timestamp_deps: CMakeFiles/Sudoku_autogen_timestamp_deps.dir/build.make
.PHONY : Sudoku_autogen_timestamp_deps

# Rule to build all files generated by this target.
CMakeFiles/Sudoku_autogen_timestamp_deps.dir/build: Sudoku_autogen_timestamp_deps
.PHONY : CMakeFiles/Sudoku_autogen_timestamp_deps.dir/build

CMakeFiles/Sudoku_autogen_timestamp_deps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sudoku_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sudoku_autogen_timestamp_deps.dir/clean

CMakeFiles/Sudoku_autogen_timestamp_deps.dir/depend:
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/build-Sudoku-Desktop_arm_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/Sudoku /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/Sudoku /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/build-Sudoku-Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/build-Sudoku-Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku3/build-Sudoku-Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Sudoku_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Sudoku_autogen_timestamp_deps.dir/depend

