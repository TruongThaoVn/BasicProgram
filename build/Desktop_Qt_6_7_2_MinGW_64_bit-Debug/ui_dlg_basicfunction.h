/********************************************************************************
** Form generated from reading UI file 'dlg_basicfunction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_BASICFUNCTION_H
#define UI_DLG_BASICFUNCTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dlg_BasicFunction
{
public:
    QPushButton *btn_sum;
    QLineEdit *txt_array;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_minus;
    QPushButton *btn_multiply;
    QPushButton *btn_divide;
    QPushButton *btn_divide_2;
    QPushButton *btn_minus_2;
    QLabel *label_3;
    QPushButton *btn_multiply_2;
    QPushButton *btn_sum_2;
    QLabel *lbl_results;

    void setupUi(QDialog *Dlg_BasicFunction)
    {
        if (Dlg_BasicFunction->objectName().isEmpty())
            Dlg_BasicFunction->setObjectName("Dlg_BasicFunction");
        Dlg_BasicFunction->resize(800, 600);
        btn_sum = new QPushButton(Dlg_BasicFunction);
        btn_sum->setObjectName("btn_sum");
        btn_sum->setGeometry(QRect(150, 90, 71, 61));
        btn_sum->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/resources/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_sum->setIcon(icon);
        btn_sum->setIconSize(QSize(100, 50));
        txt_array = new QLineEdit(Dlg_BasicFunction);
        txt_array->setObjectName("txt_array");
        txt_array->setGeometry(QRect(150, 30, 621, 41));
        label = new QLabel(Dlg_BasicFunction);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 101, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(85, 0, 255);"));
        label_2 = new QLabel(Dlg_BasicFunction);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 110, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(85, 0, 255);"));
        btn_minus = new QPushButton(Dlg_BasicFunction);
        btn_minus->setObjectName("btn_minus");
        btn_minus->setGeometry(QRect(260, 90, 71, 61));
        btn_minus->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/resources/minus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_minus->setIcon(icon1);
        btn_minus->setIconSize(QSize(100, 50));
        btn_multiply = new QPushButton(Dlg_BasicFunction);
        btn_multiply->setObjectName("btn_multiply");
        btn_multiply->setGeometry(QRect(370, 90, 71, 61));
        btn_multiply->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/resources/multiplies.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_multiply->setIcon(icon2);
        btn_multiply->setIconSize(QSize(100, 50));
        btn_divide = new QPushButton(Dlg_BasicFunction);
        btn_divide->setObjectName("btn_divide");
        btn_divide->setGeometry(QRect(480, 90, 71, 61));
        btn_divide->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/resources/Devide.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_divide->setIcon(icon3);
        btn_divide->setIconSize(QSize(100, 50));
        btn_divide_2 = new QPushButton(Dlg_BasicFunction);
        btn_divide_2->setObjectName("btn_divide_2");
        btn_divide_2->setGeometry(QRect(480, 180, 71, 61));
        btn_divide_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        btn_divide_2->setIcon(icon3);
        btn_divide_2->setIconSize(QSize(100, 50));
        btn_minus_2 = new QPushButton(Dlg_BasicFunction);
        btn_minus_2->setObjectName("btn_minus_2");
        btn_minus_2->setGeometry(QRect(260, 180, 71, 61));
        btn_minus_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        btn_minus_2->setIcon(icon1);
        btn_minus_2->setIconSize(QSize(100, 50));
        label_3 = new QLabel(Dlg_BasicFunction);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 200, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(85, 0, 255);"));
        btn_multiply_2 = new QPushButton(Dlg_BasicFunction);
        btn_multiply_2->setObjectName("btn_multiply_2");
        btn_multiply_2->setGeometry(QRect(370, 180, 71, 61));
        btn_multiply_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        btn_multiply_2->setIcon(icon2);
        btn_multiply_2->setIconSize(QSize(100, 50));
        btn_sum_2 = new QPushButton(Dlg_BasicFunction);
        btn_sum_2->setObjectName("btn_sum_2");
        btn_sum_2->setGeometry(QRect(150, 180, 71, 61));
        btn_sum_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 0, 255);"));
        btn_sum_2->setIcon(icon);
        btn_sum_2->setIconSize(QSize(100, 50));
        lbl_results = new QLabel(Dlg_BasicFunction);
        lbl_results->setObjectName("lbl_results");
        lbl_results->setGeometry(QRect(10, 330, 781, 51));
        lbl_results->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(85, 0, 255);"));

        retranslateUi(Dlg_BasicFunction);

        QMetaObject::connectSlotsByName(Dlg_BasicFunction);
    } // setupUi

    void retranslateUi(QDialog *Dlg_BasicFunction)
    {
        Dlg_BasicFunction->setWindowTitle(QCoreApplication::translate("Dlg_BasicFunction", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dlg_BasicFunction", "Input Array", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_BasicFunction", "Normal way", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_BasicFunction", "Better way", nullptr));
        lbl_results->setText(QCoreApplication::translate("Dlg_BasicFunction", "Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_BasicFunction: public Ui_Dlg_BasicFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_BASICFUNCTION_H
