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
CMAKE_SOURCE_DIR = /Users/taowang/Desktop/Project/P10_Sudoku_Master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/taowang/Desktop/Project/P10_Sudoku_Master/build

# Include any dependencies generated for this target.
include Sudoku2/CMakeFiles/Sudoku2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Sudoku2/CMakeFiles/Sudoku2.dir/compiler_depend.make

# Include the progress variables for this target.
include Sudoku2/CMakeFiles/Sudoku2.dir/progress.make

# Include the compile flags for this target's objects.
include Sudoku2/CMakeFiles/Sudoku2.dir/flags.make

Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.o: Sudoku2/CMakeFiles/Sudoku2.dir/flags.make
Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.o: /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/main.cpp
Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.o: Sudoku2/CMakeFiles/Sudoku2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/taowang/Desktop/Project/P10_Sudoku_Master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.o"
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.o -MF CMakeFiles/Sudoku2.dir/main.cpp.o.d -o CMakeFiles/Sudoku2.dir/main.cpp.o -c /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/main.cpp

Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Sudoku2.dir/main.cpp.i"
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/main.cpp > CMakeFiles/Sudoku2.dir/main.cpp.i

Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Sudoku2.dir/main.cpp.s"
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/main.cpp -o CMakeFiles/Sudoku2.dir/main.cpp.s

Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o: Sudoku2/CMakeFiles/Sudoku2.dir/flags.make
Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o: /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/SudokuSolver.cpp
Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o: Sudoku2/CMakeFiles/Sudoku2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/taowang/Desktop/Project/P10_Sudoku_Master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o"
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o -MF CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o.d -o CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o -c /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/SudokuSolver.cpp

Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.i"
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/SudokuSolver.cpp > CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.i

Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.s"
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2/SudokuSolver.cpp -o CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.s

# Object files for target Sudoku2
Sudoku2_OBJECTS = \
"CMakeFiles/Sudoku2.dir/main.cpp.o" \
"CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o"

# External object files for target Sudoku2
Sudoku2_EXTERNAL_OBJECTS =

Sudoku2/Sudoku2: Sudoku2/CMakeFiles/Sudoku2.dir/main.cpp.o
Sudoku2/Sudoku2: Sudoku2/CMakeFiles/Sudoku2.dir/SudokuSolver.cpp.o
Sudoku2/Sudoku2: Sudoku2/CMakeFiles/Sudoku2.dir/build.make
Sudoku2/Sudoku2: Sudoku2/CMakeFiles/Sudoku2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/taowang/Desktop/Project/P10_Sudoku_Master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Sudoku2"
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sudoku2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Sudoku2/CMakeFiles/Sudoku2.dir/build: Sudoku2/Sudoku2
.PHONY : Sudoku2/CMakeFiles/Sudoku2.dir/build

Sudoku2/CMakeFiles/Sudoku2.dir/clean:
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 && $(CMAKE_COMMAND) -P CMakeFiles/Sudoku2.dir/cmake_clean.cmake
.PHONY : Sudoku2/CMakeFiles/Sudoku2.dir/clean

Sudoku2/CMakeFiles/Sudoku2.dir/depend:
	cd /Users/taowang/Desktop/Project/P10_Sudoku_Master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/taowang/Desktop/Project/P10_Sudoku_Master /Users/taowang/Desktop/Project/P10_Sudoku_Master/Sudoku2 /Users/taowang/Desktop/Project/P10_Sudoku_Master/build /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2 /Users/taowang/Desktop/Project/P10_Sudoku_Master/build/Sudoku2/CMakeFiles/Sudoku2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Sudoku2/CMakeFiles/Sudoku2.dir/depend

