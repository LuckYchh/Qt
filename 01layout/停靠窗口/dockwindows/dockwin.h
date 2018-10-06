#ifndef DOCKWIN_H
#define DOCKWIN_H

#include <QMainWindow>

class dockwin : public QMainWindow
{
    Q_OBJECT

public:
    dockwin(QWidget *parent = 0);
    ~dockwin();
};

#endif // DOCKWIN_H
