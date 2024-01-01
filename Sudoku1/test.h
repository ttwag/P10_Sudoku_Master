#include <iostream>
#include <vector>
#ifndef SUDOKU_SOLVER_test
#define SUDOKU_SOLVER_test

bool validate_board(std::vector<std::vector<int>>& board, std::vector<std::vector<int>>& board_sol);
void print_message(int n, bool result);
void test();

#endif