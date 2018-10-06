#include "mydialog.h"
#include <QVBoxLayout>

mydialog::mydialog()
{
    line = new QLineEdit("Edit");
    button = new QPushButton("OK");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(line);
    vbox->addWidget(button);

    this->setLayout(vbox);

    stat = false;
    connect(button, SIGNAL(clicked(bool)), this, SLOT(pushed()));
}

mydialog::~mydialog()
{
}
