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

#endif // DATABASESTRUCTS_H
