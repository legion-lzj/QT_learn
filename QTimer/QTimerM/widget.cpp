#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // 初始化计时器
    m_timer= new QTimer(this);
    // 设置定时器时间是1000ms
    m_timer->setInterval(1000);
    // 当定时器m_timer时间到信号timeout发出后，执行槽函数on_timeOut
    connect(m_timer, &QTimer::timeout, this, &Widget::on_timeOut);
    // 设置窗口标题是读秒器
    this->setWindowTitle(QString::fromLocal8Bit("读秒器"));
    // 初始设置开始按钮可用，暂停按钮不可用，归零按钮可用
    ui->pushButtonStart->setEnabled(true);
    ui->pushButtonSetZero->setEnabled(true);
    ui->pushButtonPause->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonStart_clicked()
{
    // 启动计时器
    m_timer->start();
    // 初始化三个按钮
    ui->pushButtonStart->setEnabled(false);
    ui->pushButtonPause->setEnabled(true);
    ui->pushButtonSetZero->setEnabled(false);
}


void Widget::on_pushButtonPause_clicked()
{
    // 暂停计时
    m_timer->stop();
    // 控制三个按钮
    ui->pushButtonStart->setEnabled(true);
    ui->pushButtonPause->setEnabled(false);
    ui->pushButtonSetZero->setEnabled(true);
}

void Widget::on_pushButtonSetZero_clicked()
{
    // 计时器清零
    m_i = 0;
    // 显示清零
    ui->lcdNumber->display(m_i);
}

void Widget::on_timeOut()
{
    // 时间到了，计时+1，显示+1
    m_i ++;
    ui->lcdNumber->display(m_i);
}

