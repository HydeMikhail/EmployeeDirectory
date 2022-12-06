#include "Manager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Manager m;
    m.Run();
    return a.exec();
}