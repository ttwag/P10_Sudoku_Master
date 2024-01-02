# P10_Sudoku_Master
A program that solves any sudoku puzzle and provides an intuitive user experience.

![Figure1](./FIgure1.png)

https://github.com/ttwag/P10_Sudoku_Master/assets/113254272/8f4533a9-1f42-496b-8e0a-a60d453bad1c


## What is Sudoku Puzzle?
A sudoku puzzle is a 9x9 board with some pre-filled number.
You solved a sudoku puzzle if and only if:
1. You filled in every cell in the board.
2. Each row has number 1-9 with no repeat.
3. Each column has number 1-9 with no repeat.
4. Each 3x3 quadrant has number 1-9 with no repeat.

## Installation



## How to Use This Program

After launching the Sudoku program, fill in the numbers given by the problem, then click the "Solve" button to solve it.

If you want to clear the numbers, click the "Clear" button to clear everything.

The message box on the top left could display these messages:
* **Please Enter the Numbers**: enter numbers given by the problem.
* **Puzzle Solved**: your sudoku board is solved.
* **Bad Inputs**: you gave an input that's not number 1 - 9.
* **Unsolvable Puzzle**: the input sudoku board does not have a solution. EX: you entered identical number in a row.



## Development
### Sudoku1 - 3x3 Sudoku
* Designed a solver that solves the 3x3 sudoku puzzle that needs all row and column to have unique numbers 1 to 3.
* Implemented the solver in C++.
* Tested the program with various test cases.
### Sudoku2 - 9x9 Sudoku
* Expanded the version 1 solver to cover 9x9 sudoku and the square constraint.
* Revised the C++ code.
* Tested the program with various test cases.
* Made assuming valid Sudoku input with char
### Sudoku3 - 9x9 Sudoku with User Interface
* Use the SDL library to create GUI. 
* When the user runs the program, a pop-up window will show a Sudoku board. User fill out the initial value and hit a button, 
then the program solves it and show the process in real-time.


## Dependencies and File Structure
This repository contains Sudoku1, Sudoku2, and Sudoku3. 

### Run Sudoku1 and Sudoku2
Sudoku1 and Sudoku2 currently execute two C++ test scripts that test the 3x3 and 9x9 Sudoku solvers.

To run Sudoku1 and Sudoku2, 
clone the repository and head inside the main P10_Sudoku_Master directory

The CMakeLists.txt inside the P10_Sudoku_Master directory creates Makefile for the Sudoku1 and Sudoku2 programs.

Build the two programs in Linux or macOS terminal with 
```
# In P10_Sudoku_Master directory

$ cmake .
$ make
```

then inside Sudoku1 or Sudoku2, 

```
# In Sudoku1 directory

$ ./Sudoku1     # Execute Sudoku1 executable

# In Sudoku2 directory

$ ./Sudoku2     # Execute Sudoku2 executable
```

Note: your system will need a C++ compiler and CMake installed.

### Sudoku3
Sudoku3 contains the GUI app. Its installation guide is included in the Installation section.
You would need to install the qtbase5-dev package in the terminal to make this program.

### Other Files

 


## Helpful Links
There are some web sudoku problems that you could play with this solver: https://www.websudoku.com
Credit