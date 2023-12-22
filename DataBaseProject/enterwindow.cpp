#include "enterwindow.h"
#include "ui_enterwindow.h"

EnterWindow::EnterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EnterWindow)
{
    ui->setupUi(this);
    db = new DatabaseService();
}

EnterWindow::~EnterWindow()
{
    delete ui;
    delete db;
}

void EnterWindow::on_pushButtonEnter_clicked()
{
    QString password = ui->lineEditPass->text(),
    role= ui->ComboBoxTypeUser->currentText();

    auto user = this->db->GetUser(role,password);
    QMessageBox msgBox;
    QString message;
    if (user)
    {
        MainWindow* w = new MainWindow(db,user,this);

        w->show();
    }
    else
    {
        message = "Вы ввели неправильный логин или пароль!";
        msgBox.setText(message);
        msgBox.exec();
    }
}

void EnterWindow::on_exitButton_clicked()
{
    hide();
    close();
}
