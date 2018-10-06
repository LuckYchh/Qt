#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
   gb = new QGroupBox("choice");

   r1 = new QRadioButton("aaaa");
   r2 = new QRadioButton("bbbb");
   r3 = new QRadioButton("cccc");

   QVBoxLayout *vbox = new QVBoxLayout;
   vbox->addWidget(r1);
   vbox->addWidget(r2);
   vbox->addWidget(r3);

   gb->setLayout(vbox);

   QVBoxLayout *box = new QVBoxLayout;
   box->addWidget(gb);
   this->setLayout(box);
}

Widget::~Widget()
{

}
