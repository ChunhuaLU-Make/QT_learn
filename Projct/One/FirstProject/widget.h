#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT        //Macro definition, let use signal and slots

public:
    Widget(QWidget *parent = 0); //Constructor, init value is parent = 0.
    ~Widget();  //Destructor
};

#endif // WIDGET_H
