#ifndef STACKWIN_H
#define STACKWIN_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>

class stackwin : public QDialog
{
    Q_OBJECT

public:
    stackwin(QWidget *parent = 0);
    ~stackwin();
private:
    QListWidget *list;
    QStackedWidget *stwin;
    QLabel *label1,*label2,*label3;
};

#endif // STACKWIN_H
