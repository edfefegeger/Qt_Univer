#ifndef ENTERWINDOW_H
#define ENTERWINDOW_H

#include <QMessageBox>
#include "databaseservice.h"
#include "databasestructs.h"
#include "mainwindow.h"
#include <QMainWindow>

namespace Ui {
    class EnterWindow;
}

class EnterWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit EnterWindow(QWidget *parent = nullptr);
        ~EnterWindow();

    private slots:
        void on_pushButtonEnter_clicked();

        void on_exitButton_clicked();

    private:
        Ui::EnterWindow *ui;
        DatabaseService* db;
};

#endif // ENTERWINDOW_H
