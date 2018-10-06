#include "dockwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dockwin w;
    w.show();

    return a.exec();
}
