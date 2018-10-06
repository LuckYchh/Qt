#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    buttom = new QPushButton("hello",this);
    line1 = new QLineEdit(this);
    line2 = new QLineEdit(this);
    buttom->setGeometry(0,100,100,30);//(0,100)set position (100 30)set length and width
    buttom->setFont( QFont( "Times", 18, QFont::Bold ) );
#if 0
    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addWidget(line1);
    hbox->addWidget(line2);
    hbox->addWidget(buttom);

    this->setLayout(hbox);
#elif 0
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(line1);
    vbox->addWidget(line2);
    vbox->addWidget(buttom);

    this->setLayout(vbox);
#elif 0
    QGridLayout *gbox = new QGridLayout;
    gbox->addWidget(line1,0,0);
    gbox->addWidget(line2,1,1);
    gbox->addWidget(buttom,2,2);

    this->setLayout(gbox);
#elif 1
    QFormLayout *fbox = new QFormLayout;
    fbox->addRow("usr",line1);
    fbox->addRow("pwd",line2);
    fbox->addRow("",buttom);

    this->setLayout(fbox);
#endif
}

Widget::~Widget()
{

}
