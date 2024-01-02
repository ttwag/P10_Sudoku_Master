#include <iostream>
#include <vector>
#include "SudokuSolver.h"

/*
 * Approach: Recursive Solution that solves a 3x3 sudoku.
 *           Rule: Have non-repeated digit 1-3 in every row and column.
 *
 *           The program needs a way to check if it followed the non-repeat rule, so we used 2 boolean constraint matrices
 *           (mat_row and mat_col) to remember the constraints.
 *
 *           We use the board's row to index the row of mat_row and the (board number - 1) to index its column.
 *           EX:  2 at board[0][0] marks mat_row[0][1] as 1, 3 marks mat_row[0][2] as 1, and 1 marks mat_row[2][0] as 1.
 *                Note that we have a way to check if the same row has duplicate now. When we perform the same operation
 *                for the second 2, we will find that the same entry in mat_row is 1 already, so we violated the constraint.
 *
 *                board = {
     *                        {2, 2, 3},
     *                        {X, X, X},
     *                        {X, 1, X}
 *                        }
 *              mat_row = {
     *                        {X, 1, 1},
     *                        {X, X, X},
     *                        {X, X, X}
 *                        }
 *              
 *           For filling numbers into the board,
 *           Think of this as we are traversing through a decision tree. We are making a decision at each sudoku entry.
 *           If a digit satisfies the constraints, we move to the next entry, which could be thought as the child
 *           of the last entry in the tree.
 *           If no digits can satisfy the current entry, we need to backtrack to the last decision and try out other possibilities.
 *
 *           For each entry, we perform the following:
 *           Check if this is the base case. If i >= 3, or we've filled all entries, so the decisions we've made were true.
 *           Check if the entry is given or not. If it's given a number by the problem already, we go to the next cell.
 *
 *           Now we know the entry is not given a number, we test all three possibilities and go down each route in the
 *           decision tree. Remember to update the constraint matrices with what we filled into the board.
 *
 *           If the recursive call returns true, that means we've reached the bottom of the tree, thus we could return true
 *           because we found a solution.
 *
 *           Else, we revert what we filled into the entry and check other possibilities.
 *           If there are no other possibilities, we have to backtrack to the last decision by returning false.
 *
 * Time Complexity: O(1), the input is always constant 3x3 size. However, the recursion depth could differ.
 * Space Complexity: O(1)
 */

// Helper Function
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

// This is the function that is called first for solving the Sudoku.
// It initialize the constraints in the constraint matrices based on given numbers.
// See the comment for solver3 for constraint matrices.
bool solveSudoku3(std::vector<std::vector<int>>& board) {
    // Matrices that enforce the constraints
    std::vector<std::vector<bool>> mat_row(3, std::vector<bool>(3));
    std::vector<std::vector<bool>> mat_col(3, std::vector<bool>(3));

    //Initializes the number
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

// Prints the 3x3 Sudoku Board
void print_board(std::vector<std::vector<int>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout<<board[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
    return;
}