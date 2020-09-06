#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //自定义信号 写到signals下面
    //返回值类型是void, 只需要声明，不需要实现
    //可以有参数，可以重载
    void hungry();

    void hungry(QString FoodName);

public slots:
};

#endif // TEACHER_H
