#include "splash.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("/home/chh001/img/1.jpg");
    QSplashScreen spl(pixmap);
    spl.show();
    a.processEvents();
    splash w;
    w.show();
    spl.finish(&w);

    return a.exec();
}
