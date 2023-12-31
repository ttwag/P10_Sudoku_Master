#include "sudokumaster.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SudokuMaster w;
    w.show();
    return a.exec();
}
