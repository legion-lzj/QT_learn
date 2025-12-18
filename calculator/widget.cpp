#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(300,250);
    this->setWindowTitle(QString::fromLocal8Bit("Qt计算器"));
    // label显示当前按下的按钮
    label = new QLabel();
    // QSignalMapper 类指针变量
    // QSignalMapper 的作用是：将多个发送者的信号捆绑在一起，并转发给一个带有特定参数的槽函数
    btMapper = new QSignalMapper;
    QFont font;
    font.setFamily(QString::fromUtf8("Agency FB"));
    font.setPointSize(20);
    font.setBold(true);
    label->setFont(font);
    label->setText("0");
    label->setAlignment(Qt::AlignRight);
    label->setGeometry(20, 5, 250, 30);
    label->setParent(this);
    label->setStyleSheet("border:1px solid red");
    QStringList btnName = {"7", "8", "9", "+", "4", "5", "6", "-",
                           "1", "2", "3", "*", ".", "0", "=", "/"};
    int row = 45;
    int col = 0;
    for(int i = 0; i < 16; i ++){
        btn[i] = new QPushButton(btnName[i], this);
        btn[i]->setGeometry(col * 60 + 30, row, 50, 30);
        col ++;
        if((col + 1) % 5 == 0){
            col = 0;
            row += 45;
        }
        btMapper->setMapping(btn[i], col + 1); // ?id
        connect(btn[i], &QPushButton::clicked, [=](){
            if(btnName[i] == "="){
                QJSEngine myEngine;
                QString calStr = label->text();
                QJSValue calResult = myEngine.evaluate(calStr);
                if(calResult.isError()){
                    label->setText("0");
                }else{
                    label->setText(calResult.toString());
                }
            }else{
                if(btnName[i] == "+" || btnName[i] == "-" || btnName[i] == "*" || btnName[i] == "/"){
                    QString inputStr = label->text();
                    // flag == true,表示上一个不是运算符
                    if(flag){
                        flag = false;
                    }else{
                        int inputLength = inputStr.length() - 1;
                        label->setText(inputStr.left(inputLength));
                    }
                }else{
                    if(label->text() == "0"){
                        label->setText("");
                    }
                    flag = true;
                }
                label->setText(label->text() + btnName[i]);
            }
        });
    }
}

Widget::~Widget()
{
    delete ui;
}
