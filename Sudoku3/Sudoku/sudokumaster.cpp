#include <iostream>
#include <vector>
#include "sudokumaster.h"
#include "./ui_sudokumaster.h"
#include "SudokuSolver.h"

SudokuMaster::SudokuMaster(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SudokuMaster)
{
    ui->setupUi(this);
}

SudokuMaster::~SudokuMaster()
{
    delete ui;
}


// Clear the cell if user clicks the clearButton
void SudokuMaster::on_clearButton_clicked()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            QLineEdit* cell = this->findChild<QLineEdit *>(QString("lineEdit_%1_%2").arg(i).arg(j));
            cell->clear();
        }
    }
    // Display the message to prompt user to enter numbers again
    ui->messageLabel->setText("Please Enter the Numbers:");
}


void SudokuMaster::on_solveButton_clicked()
{
    std::vector<std::vector<int>> board(9, std::vector<int>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            QLineEdit* cell = this->findChild<QLineEdit *>(QString("lineEdit_%1_%2").arg(i).arg(j));
            if (cell) {
                QString cellText = cell->text();
                if (cellText.isEmpty()) board[i][j] = 0;
                else if (cellText.at(0).isDigit() && cellText != '0') board[i][j] = cellText.toInt();
                else {
                    ui->messageLabel->setText("Bad Input :(");
                    return;
                }
            }
        }
    }

    // Solve the sudoku based on input board
    if (solveSudoku9(board)) {
        // Display message
        ui->messageLabel->setText("Puzzle Solved :)");

        // Display the solved board back
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                QLineEdit* cell = this->findChild<QLineEdit *>(QString("lineEdit_%1_%2").arg(i).arg(j));
                if (cell) {
                    int num = board[i][j];
                    cell->setText(QString::number(num));
                }
            }
        }
    }

    else {
        ui->messageLabel->setText("Unsolvable Puzzle :(");
        return;
    }


}

