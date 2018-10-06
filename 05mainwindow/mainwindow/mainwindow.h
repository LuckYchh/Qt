#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QTextEdit>
#include <QLabel>
#include <QFileDialog>
#include <QColorDialog>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void openf()
    {
        QString filename = QFileDialog::getOpenFileName();
        te->setText(filename);
    }

    void newf()
    {
        MainWindow *newwin = new MainWindow;
        newwin->show();
    }

    void copyf()
    {
        te->copy();
    }

    void pastf()
    {
        te->paste();
    }

    void setcf()
    {
        QColor ccc = QColorDialog::getColor();
        te->setTextColor(ccc);
    }
private:
    QAction *openfileact;

    QAction *newfileact;

    QAction *copyfileact, *pastfileact;

    QAction *setcoloract;

    //central
    QTextEdit *te;

    //status
    QLabel *slb;
};

#endif // MAINWINDOW_H
