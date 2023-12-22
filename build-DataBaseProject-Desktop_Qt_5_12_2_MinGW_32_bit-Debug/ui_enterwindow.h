/********************************************************************************
** Form generated from reading UI file 'enterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERWINDOW_H
#define UI_ENTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnterWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *exitButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EnterWindow)
    {
        if (EnterWindow->objectName().isEmpty())
            EnterWindow->setObjectName(QString::fromUtf8("EnterWindow"));
        EnterWindow->resize(640, 480);
        centralwidget = new QWidget(EnterWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 209, 151, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(230, 110, 381, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        comboBox->setFont(font1);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("text-align: center;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 201, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 270, 381, 41));
        pushButton->setFont(font);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(230, 330, 381, 41));
        exitButton->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 200, 381, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(16);
        lineEdit->setFont(font2);
        lineEdit->setEchoMode(QLineEdit::Password);
        EnterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EnterWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 26));
        EnterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EnterWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EnterWindow->setStatusBar(statusbar);

        retranslateUi(EnterWindow);

        QMetaObject::connectSlotsByName(EnterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EnterWindow)
    {
        EnterWindow->setWindowTitle(QApplication::translate("EnterWindow", "\320\222\321\205\320\276\320\264", nullptr));
        label->setText(QApplication::translate("EnterWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        comboBox->setItemText(0, QApplication::translate("EnterWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        comboBox->setItemText(1, QApplication::translate("EnterWindow", "\320\237\321\200\320\270\320\272\320\273\320\260\320\264\320\275\320\276\320\271 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\201\321\202", nullptr));
        comboBox->setItemText(2, QApplication::translate("EnterWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \321\201\320\265\321\202\320\270", nullptr));
        comboBox->setItemText(3, QApplication::translate("EnterWindow", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));

        label_2->setText(QApplication::translate("EnterWindow", "\320\242\320\270\320\277 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton->setText(QApplication::translate("EnterWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        exitButton->setText(QApplication::translate("EnterWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterWindow: public Ui_EnterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERWINDOW_H
