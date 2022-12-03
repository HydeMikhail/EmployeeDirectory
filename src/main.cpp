#include "Manager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    Manager m(argc, argv);
    m.Run();
    return m.exec();
}