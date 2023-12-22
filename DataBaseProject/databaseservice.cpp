#include "databaseservice.h"

DatabaseService::DatabaseService()
{
    _dataBase = QSqlDatabase::addDatabase("QODBC");
    _dataBase.setDatabaseName("DRIVER={SQL Server};Server=LAPTOP-PRDMAD7Q\\SQLEXPRESS;Database=QTDataBase;Trusted_Connection=yes");

    if (!_dataBase.open())
    {
        qDebug() << "Ошибка подключения к базе данных:" << _dataBase.lastError().text();
    }
}

DatabaseService::~DatabaseService()
{
    if(this->_dataBase.isOpen())
    {
        this->_dataBase.close();
    }
}

User* DatabaseService::GetUser(QString role, QString password)
{
    User* realUser = nullptr;

    QSqlQueryModel model;
    QSqlQuery query(_dataBase);
    query.prepare("SELECT * FROM [User] WHERE [Role] = ? AND [Password] = ?");
    query.addBindValue(role);
    query.addBindValue(password);

    if (query.exec())
    {
        model.setQuery(query);
        if (model.rowCount() > 0)
        {
            realUser = new User();
            realUser->Id = model.data(model.index(0, 0)).toInt();
            realUser->Role = model.data(model.index(0, 1)).toString();
            realUser->Password = model.data(model.index(0, 2)).toString();
        }
    }

    return realUser;
}
bool DatabaseService::isProviderNameExists(const QString& name)
{
    QSqlQueryModel model;
    QSqlQuery query(_dataBase);
    query.prepare("SELECT * FROM Provider WHERE Name = ?");
    query.addBindValue(name);

    if (query.exec())
    {
        model.setQuery(query);
        return model.rowCount() > 0;
    }

    return false;
}
bool DatabaseService::isProviderEmailExists(const QString& email)
{
    QSqlQueryModel model;
    QSqlQuery query(_dataBase);
    query.prepare("SELECT * FROM Provider WHERE Email = ?");
    query.addBindValue(email);

    if (query.exec())
    {
        model.setQuery(query);
        return model.rowCount() > 0;
    }

    return false;
}
QSqlQueryModel*  DatabaseService::GetModel(const QString &queryString)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery(this->_dataBase);

    query->prepare(queryString);
    if (!query->exec())
    {
        return nullptr;
    }
    model->setQuery(*query);
    return model;
}

QVector<Sale> DatabaseService::SaleStatistic(const QString &queryString)
{
    auto model = GetModel(queryString);
    QVector<Sale> result;

    if(!model)
    {
        return  result;
    }

    for (int i = 0; i < model->rowCount() ; ++i)
    {
        Sale sale;
        sale.Id = model->data(model->index(i, 0)).value<int>();
        sale.Price = model->data(model->index(i, 1)).value<int>();
        sale.Count = model->data(model->index(i, 2)).value<int>();
        sale.Date = model->data(model->index(i, 3)).value<QDate>();
        result.push_back(sale);
    }

    return  result;
}

bool DatabaseService::SetQuery(const QString& queryString)
{
    QSqlQuery* query = new QSqlQuery(this->_dataBase);

    query->prepare(queryString);
    return query->exec();
}




