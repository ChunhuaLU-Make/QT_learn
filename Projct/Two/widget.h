#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "teacher.h"
#include "student.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();


private:
    Teacher* dai;
    Student* lu;
    QPushButton* button;

   void ClassOver();
};

#endif // WIDGET_H
