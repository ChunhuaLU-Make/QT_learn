#include "widget.h"
#include "newwind.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
#if 1
    btn1 = new QPushButton(this);
    btn2 = new QPushButton(this);

    btn1->setText("创建子窗口");
    btn2->setText("隐藏子窗口");
    btn1->move(0,15);
    btn2->move(100,25);

    connect(btn1,&QPushButton::pressed,this,&Widget::create_subwindow);
    connect(btn2,&QPushButton::released,this,&Widget::delete_subwindow);
#endif

 #if 0
    QPushButton* button = new QPushButton();
    button->setParent(this);
    button->setText("openWindow");

    connect(button, &QPushButton::clicked, this, &Widget::CreateWind);
#endif

}

void Widget::create_subwindow()
{
    subwindow.setWindowTitle("sub_window");
    subwindow.show();
}

void Widget::delete_subwindow()
{
    subwindow.hide();
}


void Widget::CreateWind()
{
    subwindow.show();
    ghjg.show();
}

Widget::~Widget()
{

}
