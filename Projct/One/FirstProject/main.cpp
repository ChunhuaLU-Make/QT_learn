#include "widget.h"
#include <QApplication> //包含一个应用程序类的头文件

// main program entrance.
int main(int argc, char *argv[])
{
    // The 'a' is Application object, in QT, must have, and only one.
    QApplication a(argc, argv);

    //The 'w' is Window object
    Widget w;

    //Use show way, show window
    w.show();

    //Use application go in message cycle mechanism
    return a.exec();
}
