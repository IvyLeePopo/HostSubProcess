#include "QtLocalServerDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtLocalServerDemo w;
    w.show();
    return a.exec();
}
