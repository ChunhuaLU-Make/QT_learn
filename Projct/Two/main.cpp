#include "widget.h"
#include <QApplication>


/**
 *  功能需求
 * 1.下课
 * 2.老师发送饿了信号
 * 3.学生接受信号
 * 4.请老师吃饭
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
