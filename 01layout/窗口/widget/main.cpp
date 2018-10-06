#include "window.h"
#include <QApplication>
#include <QSplitter>
#include <QTextEdit>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("ZYSong18030",12);
    a.setFont(font);

    QSplitter *spMain = new QSplitter(Qt::Horizontal);
    QTextEdit *textLeft = new QTextEdit(QObject::tr("Left Widget"),spMain);
    textLeft->setAlignment(Qt::AlignCenter);

    QSplitter *spRight = new QSplitter(Qt::Vertical,spMain);
    spRight->setOpaqueResize(false);
    QTextEdit *textUp = new QTextEdit(QObject::tr("Top Widget"),spRight);
    textUp->setAlignment(Qt::AlignCenter);

    QTextEdit *textbottom = new QTextEdit(QObject::tr("bottom Widget"),spRight);
    textbottom->setAlignment(Qt::AlignCenter);

    spMain->setStretchFactor(1,1);
    spMain->setWindowTitle(QObject::tr("spliter"));
    spMain->show();



  //  window w;
  //  w.show();

    return a.exec();
}
