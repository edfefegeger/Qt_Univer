#ifndef DATABASESERVICE_H
#define DATABASESERVICE_H
#include <QtSql>
#include <QDebug>
#include <cstdarg>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVector>
#include "databasestructs.h"

class DatabaseService
{
    public:
        DatabaseService();
        ~DatabaseService();
        QSqlDatabase _dataBase;

        bool SetQuery(const QString& queryString);
        QSqlQueryModel* GetModel(const QString& queryString);
        User* GetUser(QString role,QString password);
        QVector<Sale> SaleStatistic(const QString& queryString);

    private:

};

#endif // DATABASESERVICE_H
