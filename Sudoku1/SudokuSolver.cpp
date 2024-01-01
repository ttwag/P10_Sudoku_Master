#include <iostream>
#include "SudokuSolver.h"

/*
 * Approach: Recursive Solution that solves a 3x3 sudoku with 1 to 3 in all row and columns.
 *           We use 2 matrices to remember the constraints.
 *           For example, the row matrix has 9 vectors representing each row. If we use what we filled into the board to index
 *           this row matrix and fill 1, we will know that this number has been used in this row already, so we cannot use it on the same row.
 *           In these matrices, 0 means the index number has not been used in the board, 1 means it has been used.
 *              
 *           
 *           Think of this as we are traversing through a decision tree. We are making a decision at each sudoku entry.
 *           If a digit satisfies the constraints, we move to the next entry, which is the child of the last entry in the tree.
 *           If no digits can satisfy the current entry, we need to backtrack to the last decision and try out other possibilities.
 *
 *           Here, the base case is if i >= 3, or we've filled all entry.
 *           We check if the entry is given or not. If it's given a number by the problem already, we go to the next cell.
 *
 *           Now we know the entry is not given a number, we test all 3 possibilities and go down each route in the
 *           decision tree. Don't forget to update the constraints with what we filled into the entry.
 *
 *           if the recursive call returns true, that means we've reached the bottom of the tree, thus we could return true
 *           because we found a solution.
 *           Else, we revert what we filled into the entry and check other possibilities.
 *           If there's no other possibilities, we have to backtrack to the last decision by returning false.
 *
 *
 *           If we've checked all decisions in the tree and no route is found, print "Sudoku Unsolvable"
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

// Recursively Traverse Through the Decision Tree
bool solver3(std::vector<std::vector<bool>>& mat_row, std::vector<std::vector<bool>>& mat_col,
            std::vector<std::vector<int>>& board, int i, int j) {
    if (i >= 3) return true;
    if (board[i][j] != 0) return solver3(mat_row, mat_col, board, j >= 2 ? i + 1 : i, j >= 2 ? 0 : j + 1);

    // Recursively try all possible numbers
    for (int num = 1; num < 4; num++) {
        
        // Test constraints
        if (mat_row[i][num - 1] == 1 || mat_col[num - 1][j] == 1) continue;
        
        // Update Constraint with current entry
        mat_row[i][num - 1] = 1, mat_col[num - 1][j] = 1, board[i][j] = num;
        if (solver3(mat_row, mat_col, board, j >= 2 ? i + 1 : i, j >= 2 ? 0 : j + 1)) return true;
        
        // Revert Constraints
        mat_row[i][num - 1] = 0, mat_col[num - 1][j] = 0, board[i][j] = 0;
    }
    return false;
}

// This is the function that is called first for solving the Sudoku
// It initialize the constraints in the matrices based on given numbers
bool solveSudoku3(std::vector<std::vector<int>>& board) {
    // Matrices that enforce the constraints
    std::vector<std::vector<bool>> mat_row(3, std::vector<bool>(3));
    std::vector<std::vector<bool>> mat_col(3, std::vector<bool>(3));

    //Initialize the number
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 0) {
                int num = board[i][j];
                mat_row[i][num - 1] = 1;
                mat_col[num - 1][j] = 1;
            }
        }
    }
    return (solver3(mat_row, mat_col, board, 0, 0));
}

// Print the 3x3 Sudoku Board
void print_board(std::vector<std::vector<int>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout<<board[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
    return;
}