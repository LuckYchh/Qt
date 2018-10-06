#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>

class Widget : public QWidget
{
    Q_OBJECT
public slots:
    void passwd(bool flag)
    {
        if(!flag)
            line->setEchoMode(QLineEdit::Password);
        else
            line->setEchoMode(QLineEdit::Normal);
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QLineEdit *line;
    QPushButton *button;
    QCheckBox *cbox;
};

#endif // WIDGET_H
