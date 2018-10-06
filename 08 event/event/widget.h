#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QWheelEvent>
#include <QTimerEvent>
#include <QPaintEvent>

class widget : public QWidget
{
    Q_OBJECT

public:
    widget(QWidget *parent = 0);
    ~widget();

   void mousePressEvent(QMouseEvent *event)
   {
       qDebug()<<event->type()<<event->pos();

   }

   void mouseReleaseEvent(QMouseEvent *event)
   {
      qDebug()<<event->type()<<event->pos();
   }

   void mouseMoveEvent(QMouseEvent *event)
   {
       qDebug()<<event->type()<<event->pos();
   }

   void mouseDoubleClickEvent(QMouseEvent *event)
   {
       qDebug()<<event->type()<<event->pos();
   }

   void keyPressEvent(QKeyEvent *event)
   {
       qDebug()<<event->type()<<event->key();
   }

   void wheelEvent(QWheelEvent *event)
   {
       qDebug()<<event->type()<<event->delta();
   }

   void timerEvent(QTimerEvent *event)
   {
       qDebug()<<event->type()<<event->timerId();
   }

   void paintEvent(QPaintEvent *event)
   {
       qDebug()<<event->type()<<event->Paint;
   }
};

#endif // WIDGET_H
