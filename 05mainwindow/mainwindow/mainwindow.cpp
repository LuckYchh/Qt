#include "mainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //create actions
    openfileact = new QAction(QIcon("open.png"), "open");
    openfileact->setShortcut(QKeySequence(tr("Ctrl+O")));

    newfileact = new QAction(QIcon("new.png"),"new");
    newfileact->setShortcut(QKeySequence(tr("Ctrl+N")));

    copyfileact = new QAction(QIcon("copy.png"),"copy");
    copyfileact->setShortcut(QKeySequence(tr("Ctrl+C")));

    pastfileact = new QAction(QIcon("past.png"),"past");
    pastfileact->setShortcut(QKeySequence(tr("Ctrl+V")));

    setcoloract = new QAction(QIcon("color.png"),"setcolor");

    //create meu
    QMenu *fileMenu = menuBar()->addMenu(tr("File"));
    fileMenu->addAction(openfileact);
    fileMenu->addAction(newfileact);

    QMenu *editMenu = menuBar()->addMenu(tr("Edit"));
    editMenu->addAction(copyfileact);
    editMenu->addAction(pastfileact);

    QMenu *setMenu = menuBar()->addMenu(tr("Set"));
    setMenu->addAction(setcoloract);


    //create toolbars
    QToolBar *tfile = addToolBar("File");
    tfile->addAction(openfileact);
    tfile->addAction(newfileact);
    QToolBar *tedit = addToolBar("Edit");
    tedit->addAction(copyfileact);
    tedit->addAction(pastfileact);
    QToolBar *tset = addToolBar("Set");
    tset->addAction(setcoloract);

    //cenctral
    te = new QTextEdit();
    te->setMinimumSize(640, 480);
    setCentralWidget(te);

    //statures
    slb = new QLabel("1.txt*");
    QStatusBar *stb = statusBar();
    stb->addWidget(slb);

    connect(openfileact, SIGNAL(triggered(bool)), this, SLOT(openf()));
    connect(newfileact, SIGNAL(triggered(bool)), this, SLOT(newf()));
    connect(copyfileact, SIGNAL(triggered(bool)), this, SLOT(copyf()));
    connect(pastfileact, SIGNAL(triggered(bool)), this, SLOT(pastf()));
    connect(setcoloract, SIGNAL(triggered(bool)), this, SLOT(setcf()));

}

MainWindow::~MainWindow()
{

}
