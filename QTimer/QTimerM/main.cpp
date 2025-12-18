#include "widget.h"
#include <QScreen>
#include <QStyle>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setFixedSize(400,300);

    w.show();
    return a.exec();
}
