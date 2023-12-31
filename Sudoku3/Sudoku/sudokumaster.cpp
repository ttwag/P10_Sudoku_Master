#include "sudokumaster.h"
#include "./ui_sudokumaster.h"

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
