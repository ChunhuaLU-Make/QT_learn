#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    //早期的版本必须写到 public slots 下， 5.5以上可以写到全局及public下
    // 返回值void， 需要声明，需要实现
    //可以有参数， 可以重载
    void treat();

    void treat(QString FoodName);

};

#endif // STUDENT_H
