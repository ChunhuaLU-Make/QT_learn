#include "widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton* button = new QPushButton;
    button->setParent(this);    //把子窗口设置在父类中
    //button->show();   //以顶层方式弹出

    /* 输出文本 */
    button->setText("this is yellow book");

    QPushButton* button2 = new QPushButton("This is two", this);
    button2->move(100,100);     //移动button2的位置

    resize(600, 400);   //重置窗口大小

    setFixedSize(600, 400); //设置固定的窗体大小

    setWindowTitle("first window"); //设置窗口标题

    connect(button2, &QPushButton::clicked, this, &Widget::close);

}

Widget::~Widget()
{

}
