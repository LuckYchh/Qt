#include "splash.h"
#include <QTextEdit>
#include <unistd.h>

splash::splash(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("HELLO");
    QTextEdit *edit = new QTextEdit;
    edit->setText("I LOVE YOU");
    setCentralWidget(edit);
    resize(600,500);
    sleep(1);
}

splash::~splash()
{

}
