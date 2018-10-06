#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QColorDialog>
#include <QFontDialog>
#include <QFileDialog>
#include <QInputDialog>
#include <QProgressDialog>
#include <QMessageBox>
#include <QErrorMessage>

#include <QTextEdit>
#include <QPushButton>
#include <QDebug>


class Widget : public QWidget
{
    Q_OBJECT

public slots:
    void setcolorf()
    {
        QColor c =  QColorDialog::getColor();

        text->setTextColor(c);
    }

    void setfont()
        {
            bool ok;
            QFont myfont = QFontDialog::getFont(&ok);
            if(ok)
                 text->setFont(myfont);
        }

    void getfile()
    {
        QString filename = QFileDialog::getOpenFileName();

        qDebug()<<filename;//cout<<filename  #include <QDebug>
        text->setText(filename);
    }

    void getstr()
    {
         QString str =  QInputDialog::getText(this, "input","name");
         text->setText(str);
    }

    void showprogress()
    {
           QProgressDialog p;
           p.setValue(79);
           p.exec();
    }

    void showmsg()
    {
        QMessageBox::information(this, "Tips", "Qt", "OK");
    }

    void showerr()
    {
        QErrorMessage *msg = QErrorMessage::qtHandler();
        msg->showMessage("Error");
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QPushButton *colobutton;
    QPushButton *fontbutton;
    QPushButton *filebutton;
    QPushButton *inputbutton;
    QPushButton *prgbutton;
    QPushButton *msgbutton;
    QPushButton *errbutton;
    QTextEdit *text;

};

#endif // WIDGET_H
