#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->dai = new Teacher;
    this->lu = new Student;
    this->button = new QPushButton;

    this->button->setParent(this);
    this->button->setText("Eat reas");

    void (Teacher:: *TeacherHungry)(QString FoodName) = &Teacher::hungry;
    void (Student:: *StudentEat)(QString FoodName) = &Student::treat;

    connect(dai, TeacherHungry, lu, StudentEat);

//    this->ClassOver();     //自己出发下课吃饭信号

     //点击按钮触发
    connect(button, &QPushButton::clicked, this, &Widget::ClassOver);   //信号链接槽
    //connect(button, &QPushButton::clicked, dai, TeacherHungry);   //信号跟槽参数要匹配

    disconnect(dai, TeacherHungry, lu, StudentEat); //断开信号跟槽的链接

    /** 信号可以连接信号
      *  一个信号可以连接多个槽
      * 多个信号可以连接同一个槽
      * 信号跟槽槽函数的参数必须一一对应
      * 信号的参数可以多与槽。
      */
}

void Widget::ClassOver()
{
    //emit dai->hungry();
    emit dai->hungry("Dog meet");
}

Widget::~Widget()
{

}
