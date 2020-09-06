#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}

 void Student::treat()
 {
     qDebug() << "You is dog";
 }


 void Student::treat(QString FoodName)
 {
     qDebug() << "Teacher is eat " << FoodName.toUtf8().data();
 }

