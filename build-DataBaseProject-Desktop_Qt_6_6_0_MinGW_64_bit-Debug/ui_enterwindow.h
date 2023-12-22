/********************************************************************************
** Form generated from reading UI file 'enterwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
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
    QLabel *labelPass;
    QComboBox *ComboBoxTypeUser;
    QLabel *labelTypeUser;
    QPushButton *pushButtonEnter;
    QPushButton *exitButton;
    QLineEdit *lineEditPass;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EnterWindow)
    {
        if (EnterWindow->objectName().isEmpty())
            EnterWindow->setObjectName("EnterWindow");
        EnterWindow->resize(525, 370);
        EnterWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(199, 199, 199);\n"
"background-color: rgb(226, 226, 226);\n"
"border-radius: 5px;\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(EnterWindow);
        centralwidget->setObjectName("centralwidget");
        labelPass = new QLabel(centralwidget);
        labelPass->setObjectName("labelPass");
        labelPass->setGeometry(QRect(20, 150, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        labelPass->setFont(font);
        labelPass->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelPass->setAlignment(Qt::AlignCenter);
        ComboBoxTypeUser = new QComboBox(centralwidget);
        ComboBoxTypeUser->addItem(QString());
        ComboBoxTypeUser->addItem(QString());
        ComboBoxTypeUser->addItem(QString());
        ComboBoxTypeUser->addItem(QString());
        ComboBoxTypeUser->setObjectName("ComboBoxTypeUser");
        ComboBoxTypeUser->setGeometry(QRect(220, 80, 231, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(false);
        ComboBoxTypeUser->setFont(font1);
        ComboBoxTypeUser->setLayoutDirection(Qt::LeftToRight);
        ComboBoxTypeUser->setAutoFillBackground(false);
        ComboBoxTypeUser->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(90, 90, 90);\n"
"color: rgb(52, 52, 52);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(211, 211, 211);\n"
"border-radius: 15px;"));
        labelTypeUser = new QLabel(centralwidget);
        labelTypeUser->setObjectName("labelTypeUser");
        labelTypeUser->setGeometry(QRect(30, 80, 151, 31));
        labelTypeUser->setFont(font);
        labelTypeUser->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelTypeUser->setAlignment(Qt::AlignCenter);
        labelTypeUser->setMargin(0);
        pushButtonEnter = new QPushButton(centralwidget);
        pushButtonEnter->setObjectName("pushButtonEnter");
        pushButtonEnter->setGeometry(QRect(350, 230, 101, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        pushButtonEnter->setFont(font2);
        pushButtonEnter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"background-color: rgb(211, 211, 211);\n"
"border-radius: 15px;\n"
""));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(350, 280, 101, 31));
        exitButton->setFont(font2);
        exitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 15px;\n"
""));
        lineEditPass = new QLineEdit(centralwidget);
        lineEditPass->setObjectName("lineEditPass");
        lineEditPass->setGeometry(QRect(220, 150, 231, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        lineEditPass->setFont(font3);
        lineEditPass->setCursor(QCursor(Qt::IBeamCursor));
        lineEditPass->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(90, 90, 90);\n"
"border-radius: 15px;"));
        lineEditPass->setEchoMode(QLineEdit::Password);
        lineEditPass->setAlignment(Qt::AlignCenter);
        EnterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EnterWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 525, 21));
        EnterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EnterWindow);
        statusbar->setObjectName("statusbar");
        EnterWindow->setStatusBar(statusbar);

        retranslateUi(EnterWindow);

        QMetaObject::connectSlotsByName(EnterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EnterWindow)
    {
        EnterWindow->setWindowTitle(QCoreApplication::translate("EnterWindow", "\320\222\321\205\320\276\320\264", nullptr));
        labelPass->setText(QCoreApplication::translate("EnterWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        ComboBoxTypeUser->setItemText(0, QCoreApplication::translate("EnterWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        ComboBoxTypeUser->setItemText(1, QCoreApplication::translate("EnterWindow", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        ComboBoxTypeUser->setItemText(2, QCoreApplication::translate("EnterWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \321\201\320\265\321\202\320\270", nullptr));
        ComboBoxTypeUser->setItemText(3, QCoreApplication::translate("EnterWindow", "\320\237\321\200\320\270\320\272\320\273\320\260\320\264\320\275\320\276\320\271 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\201\321\202", nullptr));

        labelTypeUser->setText(QCoreApplication::translate("EnterWindow", "\320\242\320\270\320\277 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButtonEnter->setText(QCoreApplication::translate("EnterWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        exitButton->setText(QCoreApplication::translate("EnterWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterWindow: public Ui_EnterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERWINDOW_H
