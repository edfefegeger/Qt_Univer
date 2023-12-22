#include "mainwindoww.h"
#include "ui_mainwindoww.h"

MainWindoww::MainWindoww(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindoww)
{
    ui->setupUi(this);
}

MainWindoww::~MainWindoww()
{
    delete ui;
}
