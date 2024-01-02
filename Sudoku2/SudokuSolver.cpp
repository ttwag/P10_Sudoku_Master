#include <iostream>
#include <vector>
#include "SudokuSolver.h"

/*
 * Helper function
 * Recursively solves the 9x9 sudoku board.
 * Implements the exact same logic as that of the 3x3 sudoku solver in Sudoku1 but added the quadrant constraint matrix.
 *
 * The quadrant matrix thinks of the 9 quadrants as 9 rows and performs the same checks as that of mat_row and mat_col.
 * The k = 3 * (i / 3) + j / 3 is the row index for the quadrant matrix. It transforms i and j of the cells from the 9 quadrants into 9 rows.
 */
bool solver9(std::vector<std::vector<bool>>& mat_row, std::vector<std::vector<bool>>& mat_col,
            std::vector<std::vector<bool>>& mat_square, std::vector<std::vector<int>>& board, int i, int j) {
    if (i >= 9) return true;
    if (j >= 9) return solver9(mat_row,mat_col,mat_square,board, i + 1, 0);
    if (board[i][j] != 0) return solver9(mat_row,mat_col,mat_square,board, i, j + 1);
    int k = 3 * (i / 3) + j / 3;
    for (int num = 1; num < 10; num++) {
        if (mat_row[i][num - 1] == 1 || mat_col[num - 1][j] == 1 || mat_square[k][num - 1] == 1) continue;
        // Set Condition
        mat_row[i][num - 1] = 1, mat_col[num - 1][j] = 1, mat_square[k][num - 1] = 1, board[i][j] = num;
        if (solver9(mat_row, mat_col, mat_square, board, i, j + 1)) return true;
        // Revert Condition
        mat_row[i][num - 1] = 0, mat_col[num - 1][j] = 0, mat_square[k][num - 1] = 0, board[i][j] = 0;
    }
    return false;
}

/*
 * This function solves the 9x9 sudoku puzzle by taking care of user inputs then calling solver9 to fill in the board.
 * Note that this sudoku solver assumes a valid input board. EX: there won't be two identical numbers in a row.
 */
bool solveSudoku9(std::vector<std::vector<int>>& board) {
    std::vector<std::vector<bool>> mat_row(9, std::vector<bool>(9));
    std::vector<std::vector<bool>> mat_col(9, std::vector<bool>(9));
    std::vector<std::vector<bool>> mat_square(9, std::vector<bool>(9));

    //Initializes the number
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == 0) continue;
            int k = 3 * (i / 3) + j / 3;
            int num = board[i][j];
            // Prevent user enter invalid sudoku
            if (mat_row[i][num - 1] == 1 || mat_col[num - 1][j] == 1 || mat_square[k][num - 1] == 1) return false;
            else {
                mat_row[i][num - 1] = 1;
                mat_col[num - 1][j] = 1;
                mat_square[3 * (i / 3) + (j / 3)][num - 1] = 1;
            }
        }
    }
    return solver9(mat_row, mat_col, mat_square, board, 0, 0);
}

// Prints the 9x9 Sudoku Board
void print_board(std::vector<std::vector<int>>& board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cout<<board[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
    return;
}
