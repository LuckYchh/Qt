#include "stackwin.h"
#include <QHBoxLayout>

stackwin::stackwin(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("stwin"));
    list = new QListWidget(this);
    list->insertItem(0,tr("win1"));
    list->insertItem(1,tr("win2"));
    list->insertItem(2,tr("win3"));

    label1 = new QLabel("hellooooo");
    label2 = new QLabel("helloooo");
    label3 = new QLabel("hellooo");

    stwin = new QStackedWidget(this);

    stwin->addWidget(label1);
    stwin->addWidget(label2);
    stwin->addWidget(label3);

    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(list);
    hbox->addWidget(stwin,0,Qt::AlignHCenter);
    hbox->setStretchFactor(list,1);
    hbox->setStretchFactor(stwin,3);

    connect(list,SIGNAL(currentRowChanged(int)),stwin,SLOT(setCurrentIndex(int)));
}

stackwin::~stackwin()
{

}
