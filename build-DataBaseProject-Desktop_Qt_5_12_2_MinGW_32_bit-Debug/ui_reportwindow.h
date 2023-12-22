/********************************************************************************
** Form generated from reading UI file 'reportwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWINDOW_H
#define UI_REPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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
    QDateEdit *thirdPeriodEndDataEdit;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *thirdPeriodStartDataEdit;
    QLabel *label_3;
    QDateEdit *secondPeriodEndDataEdit;
    QLabel *label_4;
    QDateEdit *secondPeriodStartDataEdit;
    QLabel *label_5;
    QDateEdit *firstPeriodEndDataEdit;
    QLabel *label_6;
    QDateEdit *firstPeriodStartDataEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReportWindow)
    {
        if (ReportWindow->objectName().isEmpty())
            ReportWindow->setObjectName(QString::fromUtf8("ReportWindow"));
        ReportWindow->resize(640, 480);
        centralwidget = new QWidget(ReportWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 370, 611, 41));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        thirdPeriodEndDataEdit = new QDateEdit(centralwidget);
        thirdPeriodEndDataEdit->setObjectName(QString::fromUtf8("thirdPeriodEndDataEdit"));
        thirdPeriodEndDataEdit->setGeometry(QRect(400, 310, 211, 41));
        QFont font1;
        font1.setPointSize(16);
        thirdPeriodEndDataEdit->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 310, 291, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(16);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 250, 291, 41));
        label_2->setFont(font2);
        thirdPeriodStartDataEdit = new QDateEdit(centralwidget);
        thirdPeriodStartDataEdit->setObjectName(QString::fromUtf8("thirdPeriodStartDataEdit"));
        thirdPeriodStartDataEdit->setGeometry(QRect(400, 250, 211, 41));
        thirdPeriodStartDataEdit->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 200, 291, 41));
        label_3->setFont(font2);
        secondPeriodEndDataEdit = new QDateEdit(centralwidget);
        secondPeriodEndDataEdit->setObjectName(QString::fromUtf8("secondPeriodEndDataEdit"));
        secondPeriodEndDataEdit->setGeometry(QRect(400, 200, 211, 41));
        secondPeriodEndDataEdit->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 291, 41));
        label_4->setFont(font2);
        secondPeriodStartDataEdit = new QDateEdit(centralwidget);
        secondPeriodStartDataEdit->setObjectName(QString::fromUtf8("secondPeriodStartDataEdit"));
        secondPeriodStartDataEdit->setGeometry(QRect(400, 150, 211, 41));
        secondPeriodStartDataEdit->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 90, 291, 41));
        label_5->setFont(font2);
        firstPeriodEndDataEdit = new QDateEdit(centralwidget);
        firstPeriodEndDataEdit->setObjectName(QString::fromUtf8("firstPeriodEndDataEdit"));
        firstPeriodEndDataEdit->setGeometry(QRect(400, 90, 211, 41));
        firstPeriodEndDataEdit->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 40, 291, 41));
        label_6->setFont(font2);
        firstPeriodStartDataEdit = new QDateEdit(centralwidget);
        firstPeriodStartDataEdit->setObjectName(QString::fromUtf8("firstPeriodStartDataEdit"));
        firstPeriodStartDataEdit->setGeometry(QRect(400, 40, 211, 41));
        firstPeriodStartDataEdit->setFont(font1);
        ReportWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReportWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 26));
        ReportWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ReportWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ReportWindow->setStatusBar(statusbar);

        retranslateUi(ReportWindow);

        QMetaObject::connectSlotsByName(ReportWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ReportWindow)
    {
        ReportWindow->setWindowTitle(QApplication::translate("ReportWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("ReportWindow", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\321\221\321\202", nullptr));
        label->setText(QApplication::translate("ReportWindow", "\320\232\320\276\320\275\320\265\321\206 \321\202\321\200\320\265\321\202\321\214\320\265\320\263\320\276 \320\277\320\265\321\200\320\270\320\276\320\264\320\260", nullptr));
        label_2->setText(QApplication::translate("ReportWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\202\321\200\320\265\321\202\321\214\320\265\320\263\320\276 \320\277\320\265\321\200\320\270\320\276\320\264\320\260", nullptr));
        label_3->setText(QApplication::translate("ReportWindow", "\320\232\320\276\320\275\320\265\321\206 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\277\320\265\321\200\320\270\320\276\320\264\320\260", nullptr));
        label_4->setText(QApplication::translate("ReportWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \320\277\320\265\321\200\320\270\320\276\320\264\320\260", nullptr));
        label_5->setText(QApplication::translate("ReportWindow", "\320\232\320\276\320\275\320\265\321\206 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \320\277\320\265\321\200\320\270\320\276\320\264\320\260", nullptr));
        label_6->setText(QApplication::translate("ReportWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \320\277\320\265\321\200\320\270\320\276\320\264\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportWindow: public Ui_ReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWINDOW_H
