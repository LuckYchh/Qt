#include "widget.h"

widget::widget(QWidget *parent)
    : QWidget(parent)
{
    startTimer(1000);
}

widget::~widget()
{

}
