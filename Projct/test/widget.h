#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);

    void create_subwindow();
    void delete_subwindow();
    void CreateWind();
    ~Widget();

private:
    QPushButton *btn1,*btn2;
    QWidget subwindow;
    QWidget ghjg;
};

#endif // WIDGET_H
