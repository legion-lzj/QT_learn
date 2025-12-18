#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

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

private slots:
    void on_pushButtonStart_clicked();

    void on_pushButtonPause_clicked();

    void on_pushButtonSetZero_clicked();

    void on_timeOut();

private:
    Ui::Widget *ui;
    // 定义QTimer对象，用于开始/停止计时
    QTimer *m_timer = nullptr;
    // 读秒计时器
    int m_i = 0;
};
#endif // WIDGET_H
