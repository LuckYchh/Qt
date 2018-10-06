#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>

class mydialog : public QDialog
{
    Q_OBJECT
public slots:
    void pushed()
    {
        stat = true;
        close();
    }

public:
    mydialog();
    ~mydialog();

//define some functions in mydialog
public:
    static int getstat()
    {
        mydialog a;
        a.exec();

        return a.stat;
     }

public:
    int stat;

private:

    QPushButton *button;
    QLineEdit *line;

};

#endif // MYDIALOG_H
