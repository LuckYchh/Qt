#include "widget.h"

#include <QDialog>
#include "mydialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
#if 0
    mydialog a;
    a.setFixedSize(100, 100);
    a.exec();

    if(!a.stat)
        exit(0);
#elif 1
    int s = mydialog::getstat();

    if(!s)
          exit(0);
#endif
}

Widget::~Widget()
{

}
