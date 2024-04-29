#include <QApplication>
#include "view.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    View v;
    v.scale(1.5,1.5);
    v.showMaximized();

    return a.exec();
}
