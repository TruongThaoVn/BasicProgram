#ifndef BASICPROGRAM_H
#define BASICPROGRAM_H

#include <QMainWindow>
#include "dlg_basicfunction.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class BasicProgram;
}
QT_END_NAMESPACE

class BasicProgram : public QMainWindow
{
    Q_OBJECT

public:
    BasicProgram(QWidget *parent = nullptr);
    ~BasicProgram();

private slots:
    void on_btn_click_clicked();

    void on_btn_basicFunction_clicked();

private:
    Ui::BasicProgram *ui;
};
#endif // BASICPROGRAM_H
