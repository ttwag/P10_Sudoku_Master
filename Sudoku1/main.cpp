#include <iostream>
#include "SudokuSolver.h"


int main() {
    std::vector<std::vector<char>> board = {
        {'3', '.', '.'},
        {'2', '.', '.'},
        {'1', '.', '.'}
    };

    print_board(board);
    solveSudoku3(board);
    std::cout<<std::endl;
    print_board(board);
    return 0;
}
