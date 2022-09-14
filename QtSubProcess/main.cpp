#include "QtSubProcess.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtSubProcess w;
    w.show();
    return a.exec();
}
