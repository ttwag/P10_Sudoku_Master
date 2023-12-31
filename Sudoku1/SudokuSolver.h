#include <iostream>
#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

bool solver3(std::vector<std::vector<bool>>& mat_row, std::vector<std::vector<bool>>& mat_col,
            std::vector<std::vector<char>>& board, int i, int j);
void solveSudoku3(std::vector<std::vector<char>>& board);
void print_board(std::vector<std::vector<char>>& board);

#endif