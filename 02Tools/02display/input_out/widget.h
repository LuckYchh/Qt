#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>
#include <QTimeEdit>
#include <QDial>
#include <QSlider>
#include <QScrollBar>
#include <QLabel>
#include <QProgressBar>
#include <QLCDNumber>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QLineEdit *line;
    QTextEdit *text;
    QComboBox *combox;
    QTimeEdit *time;
    QDial *dia;
    QSlider *slider;
    QScrollBar *scbar;

    QLabel *label1,*label2;
    QProgressBar *prg;
    QLCDNumber *lcd;
};

#endif // WIDGET_H
