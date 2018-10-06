#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    line = new QLineEdit;
    button = new QPushButton("clear");
    cbox = new QCheckBox("passward");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(line);
    vbox->addWidget(button);
    vbox->addWidget(cbox);
    this->setLayout(vbox);

    connect(button,SIGNAL(clicked(bool)),line,SLOT(clear()));
    connect(cbox,SIGNAL(clicked(bool)),this,SLOT(passwd(bool)));
}

Widget::~Widget()
{

}
