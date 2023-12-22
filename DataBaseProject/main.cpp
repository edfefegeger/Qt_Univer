#include "enterwindow.h"
#include "databaseservice.h"
#include <QtSql>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    EnterWindow w;
    w.show();

    return a.exec();
}
