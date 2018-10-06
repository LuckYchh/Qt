#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    stackwgt = new QStackedWidget;

    line[0] = new QTextEdit("qqqt");
    line[1] = new QTextEdit("qqt");
    line[2] = new QTextEdit("qt");
    stackwgt->addWidget(line[0]);
    stackwgt->addWidget(line[1]);
    stackwgt->addWidget(line[2]);

    button[0] = new QPushButton("A");
    button[1] = new QPushButton("B");
    button[2] = new QPushButton("C");

    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(stackwgt);
    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(button[0]);
    vbox2->addWidget(button[1]);
    vbox2->addWidget(button[2]);
    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addLayout(vbox2);
    hbox->addLayout(vbox1);

    this->setLayout(hbox);

    connect(button[0], SIGNAL(clicked(bool)), stackwgt, SLOT(indexchange(bool)));
    connect(button[1], SIGNAL(clicked(bool)), stackwgt, SLOT(indexchange(bool)));
    connect(button[2], SIGNAL(clicked(bool)), stackwgt, SLOT(indexchange(bool)));
}

Widget::~Widget()
{

}
