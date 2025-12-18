#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QSignalMapper>
#include <QDebug>
#include <QJSEngine>
#include <QJSValue>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QSignalMapper *btMapper;
    QPushButton *btn[30];
    QLabel *label;
    bool flag = true;
};
#endif // WIDGET_H
