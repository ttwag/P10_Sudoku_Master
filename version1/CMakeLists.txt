# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(MyCMakeProject)

set(CMAKE_CXX_STANDARD 17)

# Add an executable target
add_executable(MyCMakeExecutable main.cpp SudokuSolver.cpp)
