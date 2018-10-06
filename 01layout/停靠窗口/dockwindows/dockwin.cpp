#include "dockwin.h"
#include <QTextEdit>
#include <QDockWidget>

dockwin::dockwin(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Dockwindows"));
    QTextEdit *text = new QTextEdit();
    text->setText(tr("main window"));
    text->setAlignment(Qt::AlignCenter);
    setCentralWidget(text);

    QDockWidget *dwin = new QDockWidget(tr("dwin1"));
    dwin->setFeatures(QDockWidget::DockWidgetMovable);
    dwin->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit *text1 = new QTextEdit();
    text1->setText(tr("hellooooo"));
    dwin->setWidget(text1);
    addDockWidget(Qt::RightDockWidgetArea,dwin);

    dwin = new QDockWidget(tr("dwin2"));
    dwin->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
    QTextEdit *text2 = new QTextEdit();
    text2->setText(tr("hellooooo"));
    dwin->setWidget(text2);
    addDockWidget(Qt::RightDockWidgetArea,dwin);

    dwin = new QDockWidget(tr("dwin3"));
    dwin->setFeatures(QDockWidget::AllDockWidgetFeatures);
    QTextEdit *text3 = new QTextEdit();
    text3->setText(tr("hellooooo"));
    dwin->setWidget(text3);
    addDockWidget(Qt::RightDockWidgetArea,dwin);


}

dockwin::~dockwin()
{

}
