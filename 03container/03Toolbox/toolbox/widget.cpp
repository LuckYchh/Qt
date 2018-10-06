#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    tbox = new QToolBox;

    tbutton[0] = new QToolButton;
    tbutton[1] = new QToolButton;
    tbutton[2] = new QToolButton;

    tbox->addItem(tbutton[0],"QQQQQ");
    tbox->addItem(tbutton[1],"QQtQQ");
    tbox->addItem(tbutton[2],"tQQQt");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(tbox);
    this->setLayout(vbox);
}

Widget::~Widget()
{

}
