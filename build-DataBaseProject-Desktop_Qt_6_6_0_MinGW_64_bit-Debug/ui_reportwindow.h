/********************************************************************************
** Form generated from reading UI file 'reportwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWINDOW_H
#define UI_REPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QDateEdit *firstPeriodStartDataEdit;
    QDateEdit *firstPeriodEndDataEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *secondPeriodStartDataEdit;
    QDateEdit *secondPeriodEndDataEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *thirdPeriodStartDataEdit;
    QDateEdit *thirdPeriodEndDataEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReportWindow)
    {
        if (ReportWindow->objectName().isEmpty())
            ReportWindow->setObjectName("ReportWindow");
        ReportWindow->resize(597, 333);
        centralwidget = new QWidget(ReportWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 230, 241, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"background-color: rgb(211, 211, 211);\n"
"border-radius: 15px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 160, 291, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(false);
        label_2->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 100, 291, 41));
        label_4->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 40, 291, 41));
        label_6->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(260, 40, 266, 39));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        firstPeriodStartDataEdit = new QDateEdit(widget);
        firstPeriodStartDataEdit->setObjectName("firstPeriodStartDataEdit");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        firstPeriodStartDataEdit->setFont(font2);

        horizontalLayout->addWidget(firstPeriodStartDataEdit);

        firstPeriodEndDataEdit = new QDateEdit(widget);
        firstPeriodEndDataEdit->setObjectName("firstPeriodEndDataEdit");
        firstPeriodEndDataEdit->setFont(font2);

        horizontalLayout->addWidget(firstPeriodEndDataEdit);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(260, 100, 266, 39));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        secondPeriodStartDataEdit = new QDateEdit(widget1);
        secondPeriodStartDataEdit->setObjectName("secondPeriodStartDataEdit");
        secondPeriodStartDataEdit->setFont(font2);

        horizontalLayout_2->addWidget(secondPeriodStartDataEdit);

        secondPeriodEndDataEdit = new QDateEdit(widget1);
        secondPeriodEndDataEdit->setObjectName("secondPeriodEndDataEdit");
        secondPeriodEndDataEdit->setFont(font2);

        horizontalLayout_2->addWidget(secondPeriodEndDataEdit);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(260, 160, 266, 39));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        thirdPeriodStartDataEdit = new QDateEdit(widget2);
        thirdPeriodStartDataEdit->setObjectName("thirdPeriodStartDataEdit");
        thirdPeriodStartDataEdit->setFont(font2);

        horizontalLayout_3->addWidget(thirdPeriodStartDataEdit);

        thirdPeriodEndDataEdit = new QDateEdit(widget2);
        thirdPeriodEndDataEdit->setObjectName("thirdPeriodEndDataEdit");
        thirdPeriodEndDataEdit->setFont(font2);

        horizontalLayout_3->addWidget(thirdPeriodEndDataEdit);

        ReportWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReportWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 597, 21));
        ReportWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ReportWindow);
        statusbar->setObjectName("statusbar");
        ReportWindow->setStatusBar(statusbar);

        retranslateUi(ReportWindow);

        QMetaObject::connectSlotsByName(ReportWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ReportWindow)
    {
        ReportWindow->setWindowTitle(QCoreApplication::translate("ReportWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("ReportWindow", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\321\221\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("ReportWindow", "\320\242\321\200\320\265\321\202\320\270\320\271 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_4->setText(QCoreApplication::translate("ReportWindow", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_6->setText(QCoreApplication::translate("ReportWindow", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportWindow: public Ui_ReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWINDOW_H
