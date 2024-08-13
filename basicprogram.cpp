#include "basicprogram.h"
#include "ui_basicprogram.h"

BasicProgram::BasicProgram(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BasicProgram)
{
    ui->setupUi(this);
}

BasicProgram::~BasicProgram()
{
    delete ui;
}

void BasicProgram::on_btn_click_clicked()
{

}


void BasicProgram::on_btn_basicFunction_clicked()
{
    Dlg_BasicFunction *dlgBasic=new Dlg_BasicFunction();
    this->hide();
    dlgBasic->show();
}

