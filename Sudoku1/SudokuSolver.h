#include <iostream>
#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

bool solver3(std::vector<std::vector<bool>>& mat_row, std::vector<std::vector<bool>>& mat_col,
            std::vector<std::vector<int>>& board, int i, int j);
bool solveSudoku3(std::vector<std::vector<int>>& board);
void print_board(std::vector<std::vector<int>>& board);

#endif