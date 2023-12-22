#ifndef DATABASESTRUCTS_H
#define DATABASESTRUCTS_H
#include<QString>
#include<QDate>

struct Goods  //Было product
{
        QString Name;
        QString Price;
};

struct Provider  //остается неизменным
{
        int Id;
        QString Name;
        QString Email;
};

struct Sale
{
        int Id;
        int Count;
        int Price;
        QDate Date;
};

struct User  //остается неизменным
{
        int Id;
        QString Role;
        QString Password;
};

struct Services  //было street
{
        QString Name;
        QString Price;
};


struct Unit{
        QString Name;
        QString ShortName;
};

struct Price{
        QString Name;
        int Count;
};


struct Phone{
        QString name;
};

struct Locality{
        QString Name;
        QString ShortName;
};


struct Invoice{
        QDate Date;
};

struct InvoicePosition{
        int Count;
        QString Unit;
};

struct InvoiceType{
        QString Name;
        QString ShortName;
};
// Новые структуры для таблиц employees, clients и orders
struct Employee
{
    int Id;
    QString Name;
    QString Position;
    int Salary;
};

struct Client
{
    int Id;
    QString Name;
    QString Email;
    QString Phone;
};

struct Order
{
    int Id;
    int ClientId;
    int EmployeeId;
    int TotalPrice;
    QDate OrderDate;
};
#endif // DATABASESTRUCTS_H
