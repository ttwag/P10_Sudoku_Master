#ifndef SUDOKUMASTER_H
#define SUDOKUMASTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SudokuMaster;
}
QT_END_NAMESPACE

class SudokuMaster : public QMainWindow
{
    Q_OBJECT

public:
    SudokuMaster(QWidget *parent = nullptr);
    ~SudokuMaster();

private slots:

    void on_clearButton_clicked();
    void on_solveButton_clicked();


private:
    Ui::SudokuMaster *ui;
};
#endif // SUDOKUMASTER_H
