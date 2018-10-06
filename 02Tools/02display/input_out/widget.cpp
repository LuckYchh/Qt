#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    line = new QLineEdit;
    text = new QTextEdit;
    combox = new QComboBox;
    combox->addItem("A");
    combox->addItem("B");
    time = new QTimeEdit;
    dia = new QDial;
    slider = new QSlider;
    slider->setOrientation(Qt::Horizontal);
    scbar = new QScrollBar;
    scbar->setOrientation((Qt::Horizontal));

    QVBoxLayout *vbox = new QVBoxLayout;

    vbox->addWidget(line);
    vbox->addWidget(text);
    vbox->addWidget(combox);
    vbox->addWidget(time);
    vbox->addWidget(dia);
    vbox->addWidget(slider);
    vbox->addWidget(scbar);

    QHBoxLayout *hbox = new QHBoxLayout;
    QVBoxLayout *vbox1 = new QVBoxLayout;

    label1 = new QLabel("Qt");
    label2 = new QLabel;
    QPixmap pix("1.jpg");
    label2->setFixedSize(100,100);
    label2->setScaledContents(true);
    label2->setPixmap(pix);

    prg = new QProgressBar;
    lcd = new QLCDNumber;

    vbox1->addWidget(label1);
    vbox1->addWidget(label2);
    vbox1->addWidget(prg);
    vbox1->addWidget(lcd);

    hbox->addLayout(vbox);
    hbox->addLayout(vbox1);

    this->setLayout(hbox);

    connect(scbar, SIGNAL(valueChanged(int)), prg, SLOT(setValue(int)));
    connect(slider, SIGNAL(valueChanged(int)), lcd, SLOT(display(int)));
}

Widget::~Widget()
{

}
