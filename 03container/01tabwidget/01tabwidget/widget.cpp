#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    tabw = new QTabWidget;

    text1 = new QTextEdit("QQQQQQt");
    text2 = new QTextEdit("QQttttt");
    text3 = new QTextEdit("QQQttQQ");

    tabw->addTab(text1,"A");
    tabw->addTab(text2,"B");
    tabw->addTab(text3,"C");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(tabw);
    this->setLayout(vbox);

}

Widget::~Widget()
{

}
