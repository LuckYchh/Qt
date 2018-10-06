#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>//button
#include <QLineEdit>//line

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QPushButton *buttom;
    QLineEdit *line1,*line2;

};

#endif // WIDGET_H
