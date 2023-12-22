#ifndef REPORTWINDOW_H
#define REPORTWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include "databaseservice.h"

namespace Ui {
    class ReportWindow;
}

class ReportWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit ReportWindow(DatabaseService* dbService,QWidget *parent = nullptr);
        ~ReportWindow();

    private slots:
        void on_pushButton_clicked();

    private:
        Ui::ReportWindow *ui;
        DatabaseService* _dbService;
};

#endif // REPORTWINDOW_H
