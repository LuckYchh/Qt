#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    text = new QTextEdit;

    colobutton = new QPushButton("setcolor");
    fontbutton = new QPushButton("setfont");
    filebutton = new QPushButton("getfile");
    inputbutton = new QPushButton("inputstr");
    prgbutton = new QPushButton("progress");
    msgbutton = new QPushButton("message");
    errbutton = new QPushButton("errmsg");


    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(colobutton);
    vbox->addWidget(fontbutton);
    vbox->addWidget(filebutton);
    vbox->addWidget(inputbutton);
    vbox->addWidget(prgbutton);
    vbox->addWidget(msgbutton);
    vbox->addWidget(errbutton);

    this->setLayout(vbox);

    connect(colobutton, SIGNAL(clicked(bool)), this, SLOT(setcolorf()));
    connect(fontbutton, SIGNAL(clicked(bool)), this, SLOT(setfont()));
    connect(filebutton, SIGNAL(clicked(bool)), this, SLOT(getfile()));
    connect(inputbutton, SIGNAL(clicked(bool)), this, SLOT(getstr()));
    connect(prgbutton, SIGNAL(clicked(bool)), this, SLOT(showprogress()));
    connect(msgbutton, SIGNAL(clicked(bool)), this, SLOT(showmsg()));
    connect(errbutton, SIGNAL(clicked(bool)), this, SLOT(showerr()));
}

Widget::~Widget()
{

}
