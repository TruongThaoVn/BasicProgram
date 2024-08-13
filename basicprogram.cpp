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
    ui->lbl_show->setText("Hello!!!");
}

