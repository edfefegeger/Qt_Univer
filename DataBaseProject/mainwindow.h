#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "databaseservice.h"
#include "databasestructs.h"
#include "reportwindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
         explicit   MainWindow(DatabaseService* dbService,User* user ,QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_addGoodsButton_clicked();

        void on_editGoodsButton_clicked();

        void on_goodsDataTable_doubleClicked(const QModelIndex &index);

        void on_exitButton_clicked();

        void on_deleteGoodsButton_clicked();

        void on_addProviderButton_clicked();

        void on_editProviderButton_clicked();

        void on_deleteProviderButton_clicked();

        void on_providerDataTable_doubleClicked(const QModelIndex &index);

        void on_saleDataTable_doubleClicked(const QModelIndex &index);

        void on_addSaleButton_clicked();

        void on_editSaleButton_clicked();

        void on_deleteSaleButton_clicked();

        void on_deleteServicesButton_clicked();

        void on_editServicesButton_clicked();

        void on_addServicesButton_clicked();

        void on_servicesDataTable_doubleClicked(const QModelIndex &index);

        void on_unitsDataTable_doubleClicked(const QModelIndex &index);

        void on_addUnitsButton_clicked();

        void on_editUnitsButton_clicked();

        void on_deleteUnitsButton_clicked();

        void on_priceDataTable_doubleClicked(const QModelIndex &index);

        void on_addPriceButton_clicked();

        void on_editPriceButton_clicked();

        void on_deletePriceButton_clicked();

        void on_phoneDataTable_doubleClicked(const QModelIndex &index);

        void on_addPhoneButton_clicked();

        void on_deletePhoneButton_clicked();

        void on_editPhoneButton_clicked();

        void on_addLocalityButton_clicked();

        void on_editLocalityButton_clicked();

        void on_deleteLocalityButton_clicked();

        void on_localityDataTable_doubleClicked(const QModelIndex &index);

        void on_invoiceDataTable_doubleClicked(const QModelIndex &index);

        void on_addInvoiceButton_clicked();

        void on_editInvoiceButton_clicked();

        void on_deleteInvoiceButton_clicked();

        void on_reportOfSales_clicked();

        void on_exitButton_5_clicked();

        void on_exitButton_2_clicked();

        void on_exitButton_3_clicked();

        void on_exitButton_4_clicked();

        void on_exitButton_6_clicked();

        void on_exitButton_7_clicked();

        void on_exitButton_9_clicked();

        void on_exitButton_10_clicked();

        void on_exitButton_8_clicked();

        void on_addInvoicePositionButton_clicked();

        void on_editInvoicePositionButton_clicked();

        void on_deleteInvoicePositionButton_clicked();

        void on_providerDataTable_activated(const QModelIndex &index);

private:
        Ui::MainWindow *ui;
        User* _user;
        DatabaseService* _dbService;
};

#endif // MAINWINDOW_H
