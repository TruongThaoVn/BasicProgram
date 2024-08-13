/********************************************************************************
** Form generated from reading UI file 'basicprogram.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICPROGRAM_H
#define UI_BASICPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicProgram
{
public:
    QWidget *centralwidget;
    QPushButton *btn_basicFunction;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BasicProgram)
    {
        if (BasicProgram->objectName().isEmpty())
            BasicProgram->setObjectName("BasicProgram");
        BasicProgram->resize(800, 600);
        centralwidget = new QWidget(BasicProgram);
        centralwidget->setObjectName("centralwidget");
        btn_basicFunction = new QPushButton(centralwidget);
        btn_basicFunction->setObjectName("btn_basicFunction");
        btn_basicFunction->setGeometry(QRect(20, 20, 141, 91));
        BasicProgram->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BasicProgram);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        BasicProgram->setMenuBar(menubar);
        statusbar = new QStatusBar(BasicProgram);
        statusbar->setObjectName("statusbar");
        BasicProgram->setStatusBar(statusbar);

        retranslateUi(BasicProgram);

        QMetaObject::connectSlotsByName(BasicProgram);
    } // setupUi

    void retranslateUi(QMainWindow *BasicProgram)
    {
        BasicProgram->setWindowTitle(QCoreApplication::translate("BasicProgram", "BasicProgram", nullptr));
        btn_basicFunction->setText(QCoreApplication::translate("BasicProgram", "BasicFunction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BasicProgram: public Ui_BasicProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICPROGRAM_H
