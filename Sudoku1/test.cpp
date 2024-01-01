#include <iostream>
#include <vector>
#include "SudokuSolver.h"
#include "test.h"

/*
    Validate the input 3x3 sudoku board with the solution board
    Return true if both are the same, otherwise, return false.
    Note that the sudoku input is assumed to be valid.
*/ 
bool validate_board(std::vector<std::vector<int>>& board, std::vector<std::vector<int>>& board_sol) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != board_sol[i][j]) {
                return false;
            }
        }
    }
    return true;
}
/*
    n is the nth test, and 
*/
void print_message(int n, bool result) {
    if (result) {
        std::cout<<"Test "<<n<<" Passed"<<std::endl;
    }
    else {
        std::cout<<"Test "<<n<<" Failed"<<std::endl;
    }
    return;
}

/*
 * test() contains 5 test cases. It calls validate_board to validate the board then print the result with print_message
 */
void test() {
    // test 1
    std::vector<std::vector<int>> board1 = {
        {1, 2, 3},
        {0, 0, 0},
        {0, 0, 0}
    };
    std::vector<std::vector<int>> board1_sol = {
        {1, 2, 3},
        {2, 3, 1},
        {3, 1, 2}
    };
    solveSudoku3(board1);
    print_message(1, validate_board(board1, board1_sol));

    // test 2
    std::vector<std::vector<int>> board2 = {
        {1, 0, 0},
        {0, 0, 3},
        {0, 0, 0}
    };
    std::vector<std::vector<int>> board2_sol = {
        {1, 3, 2},
        {2, 1, 3},
        {3, 2, 1}
    };
    solveSudoku3(board2);
    print_message(2, validate_board(board2, board2_sol));


    // test 3
    std::vector<std::vector<int>> board3 = {
        {0, 2, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    std::vector<std::vector<int>> board3_sol = {
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}
    };
    solveSudoku3(board3);
    print_message(3, validate_board(board3, board3_sol));


    // test 4
    std::vector<std::vector<int>> board4 = {
        {0, 0, 3},
        {0, 0, 0},
        {2, 0, 0}
    };
    std::vector<std::vector<int>> board4_sol = {
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}
    };
    solveSudoku3(board4);
    print_message(4, validate_board(board4, board4_sol));

    // test 5
    std::vector<std::vector<int>> board5 = {
        {0, 0, 0},
        {3, 0, 0},
        {0, 0, 2}
    };
    std::vector<std::vector<int>> board5_sol = {
        {2, 1, 3},
        {3, 2, 1},
        {1, 3, 2}
    };
    solveSudoku3(board5);
    print_message(5, validate_board(board5, board5_sol));


    return;   
}

