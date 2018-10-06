#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    label = new QLabel;
    QPixmap pix("1.jpg");
    label->setPixmap(pix);

    sarea = new QScrollArea;
    sarea->setWidget(label);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(sarea);
    this->setLayout(vbox);
}

Widget::~Widget()
{

}
