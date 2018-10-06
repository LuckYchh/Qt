#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QTextEdit>

class Widget : public QWidget
{
    Q_OBJECT

public slots:
    void indexchange(bool flag)
    {
        if(flag)
        {
            int nindex = stackwgt->currentIndex();
            stackwgt->setCurrentIndex(nindex);
        }
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QStackedWidget *stackwgt;
    QPushButton *button[3];
    QTextEdit *line[3];

};

#endif // WIDGET_H
