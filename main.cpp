#include "basicprogram.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BasicProgram w;
    w.show();
    return a.exec();
}
