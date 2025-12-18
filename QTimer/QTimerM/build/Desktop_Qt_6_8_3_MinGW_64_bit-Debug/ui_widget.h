/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonPause;
    QPushButton *pushButtonSetZero;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(650, 546);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 50, 312, 165));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setMinimumSize(QSize(300, 100));
        lcdNumber->setMaximumSize(QSize(300, 100));

        verticalLayout->addWidget(lcdNumber);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonStart = new QPushButton(widget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setMinimumSize(QSize(100, 40));
        pushButtonStart->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(pushButtonStart);

        pushButtonPause = new QPushButton(widget);
        pushButtonPause->setObjectName("pushButtonPause");
        pushButtonPause->setMinimumSize(QSize(100, 40));
        pushButtonPause->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(pushButtonPause);

        pushButtonSetZero = new QPushButton(widget);
        pushButtonSetZero->setObjectName("pushButtonSetZero");
        pushButtonSetZero->setMinimumSize(QSize(100, 40));
        pushButtonSetZero->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(pushButtonSetZero);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        pushButtonPause->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        pushButtonSetZero->setText(QCoreApplication::translate("Widget", "\345\275\222\351\233\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
