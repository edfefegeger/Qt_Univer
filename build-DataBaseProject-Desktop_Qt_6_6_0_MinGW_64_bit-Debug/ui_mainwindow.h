/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *providerDataTable;
    QTextEdit *providerEmailTextEdit;
    QTextEdit *providerNameTextEdit;
    QLabel *label_3;
    QPushButton *editProviderButton;
    QLabel *label_4;
    QPushButton *deleteProviderButton;
    QPushButton *addProviderButton;
    QWidget *tab_3;
    QTextEdit *saleCountTextEdit;
    QTableView *saleDataTable;
    QTextEdit *salePriceTextEdit;
    QPushButton *editSaleButton;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *deleteSaleButton;
    QPushButton *addSaleButton;
    QLabel *label_7;
    QDateTimeEdit *saleDateTimeEdit;
    QPushButton *reportOfSales;
    QWidget *tab_2;
    QTableView *goodsDataTable;
    QPushButton *editGoodsButton;
    QPushButton *addGoodsButton;
    QTextEdit *NameTextEdit;
    QLabel *label;
    QTextEdit *PriceTextEdit;
    QLabel *label_2;
    QPushButton *deleteGoodsButton;
    QWidget *tab_4;
    QTableView *servicesDataTable;
    QTextEdit *servicesPriceTextEdit;
    QTextEdit *servicesNameTextEdit;
    QPushButton *editServicesButton;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *addServicesButton;
    QPushButton *deleteServicesButton;
    QWidget *tab_6;
    QPushButton *addUnitsButton;
    QTableView *unitsDataTable;
    QLabel *label_12;
    QLabel *label_13;
    QTextEdit *unitsNameTextEdit;
    QPushButton *deleteUnitsButton;
    QPushButton *editUnitsButton;
    QTextEdit *unitsShortNameTextEdit;
    QWidget *tab_7;
    QTextEdit *priceNameTextEdit;
    QLabel *label_14;
    QPushButton *editPriceButton;
    QTableView *priceDataTable;
    QTextEdit *priceCountTextEdit;
    QPushButton *deletePriceButton;
    QPushButton *addPriceButton;
    QLabel *label_15;
    QWidget *tab_8;
    QTableView *phoneDataTable;
    QTextEdit *phoneNumberTextEdit;
    QLabel *label_17;
    QPushButton *editPhoneButton;
    QPushButton *deletePhoneButton;
    QPushButton *addPhoneButton;
    QWidget *tab_10;
    QPushButton *deleteLocalityButton;
    QLabel *label_16;
    QTableView *localityDataTable;
    QTextEdit *localityNameTextEdit;
    QLabel *label_19;
    QPushButton *editLocalityButton;
    QTextEdit *localityShortNameTextEdit;
    QPushButton *addLocalityButton;
    QWidget *tab_12;
    QPushButton *addInvoiceButton;
    QDateTimeEdit *invoiceDateTimeEdit;
    QPushButton *deleteInvoiceButton;
    QLabel *label_22;
    QTableView *invoiceDataTable;
    QPushButton *editInvoiceButton;
    QWidget *tab_13;
    QTextEdit *InvoicePositionUnitPriceTextEdit;
    QLabel *label_23;
    QTextEdit *invoicePositionTypeCountTextEdit;
    QTableView *localityTypeDataTable_2;
    QLabel *label_24;
    QPushButton *deleteInvoicePositionButton;
    QPushButton *editInvoicePositionButton;
    QPushButton *addInvoicePositionButton;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(828, 534);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 821, 441));
        tab = new QWidget();
        tab->setObjectName("tab");
        providerDataTable = new QTableView(tab);
        providerDataTable->setObjectName("providerDataTable");
        providerDataTable->setGeometry(QRect(20, 10, 781, 251));
        providerDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        providerDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        providerEmailTextEdit = new QTextEdit(tab);
        providerEmailTextEdit->setObjectName("providerEmailTextEdit");
        providerEmailTextEdit->setGeometry(QRect(230, 330, 391, 31));
        QFont font;
        font.setPointSize(12);
        providerEmailTextEdit->setFont(font);
        providerNameTextEdit = new QTextEdit(tab);
        providerNameTextEdit->setObjectName("providerNameTextEdit");
        providerNameTextEdit->setGeometry(QRect(230, 290, 391, 31));
        providerNameTextEdit->setFont(font);
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 290, 201, 31));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        editProviderButton = new QPushButton(tab);
        editProviderButton->setObjectName("editProviderButton");
        editProviderButton->setGeometry(QRect(670, 320, 131, 31));
        QFont font2;
        font2.setPointSize(10);
        editProviderButton->setFont(font2);
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 330, 201, 31));
        label_4->setFont(font1);
        deleteProviderButton = new QPushButton(tab);
        deleteProviderButton->setObjectName("deleteProviderButton");
        deleteProviderButton->setGeometry(QRect(670, 360, 131, 31));
        deleteProviderButton->setFont(font2);
        addProviderButton = new QPushButton(tab);
        addProviderButton->setObjectName("addProviderButton");
        addProviderButton->setGeometry(QRect(670, 280, 131, 31));
        addProviderButton->setFont(font2);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        saleCountTextEdit = new QTextEdit(tab_3);
        saleCountTextEdit->setObjectName("saleCountTextEdit");
        saleCountTextEdit->setGeometry(QRect(230, 320, 401, 41));
        saleCountTextEdit->setFont(font);
        saleDataTable = new QTableView(tab_3);
        saleDataTable->setObjectName("saleDataTable");
        saleDataTable->setGeometry(QRect(10, 10, 791, 181));
        saleDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        saleDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        salePriceTextEdit = new QTextEdit(tab_3);
        salePriceTextEdit->setObjectName("salePriceTextEdit");
        salePriceTextEdit->setGeometry(QRect(230, 270, 401, 41));
        salePriceTextEdit->setFont(font);
        editSaleButton = new QPushButton(tab_3);
        editSaleButton->setObjectName("editSaleButton");
        editSaleButton->setGeometry(QRect(660, 320, 141, 41));
        editSaleButton->setFont(font2);
        label_5 = new QLabel(tab_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 280, 201, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 330, 201, 31));
        label_6->setFont(font1);
        deleteSaleButton = new QPushButton(tab_3);
        deleteSaleButton->setObjectName("deleteSaleButton");
        deleteSaleButton->setGeometry(QRect(660, 370, 141, 41));
        deleteSaleButton->setFont(font2);
        addSaleButton = new QPushButton(tab_3);
        addSaleButton->setObjectName("addSaleButton");
        addSaleButton->setGeometry(QRect(660, 270, 141, 41));
        addSaleButton->setFont(font2);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 370, 201, 31));
        label_7->setFont(font1);
        saleDateTimeEdit = new QDateTimeEdit(tab_3);
        saleDateTimeEdit->setObjectName("saleDateTimeEdit");
        saleDateTimeEdit->setGeometry(QRect(230, 370, 401, 41));
        saleDateTimeEdit->setFont(font);
        reportOfSales = new QPushButton(tab_3);
        reportOfSales->setObjectName("reportOfSales");
        reportOfSales->setGeometry(QRect(10, 210, 791, 41));
        reportOfSales->setFont(font2);
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        goodsDataTable = new QTableView(tab_2);
        goodsDataTable->setObjectName("goodsDataTable");
        goodsDataTable->setGeometry(QRect(10, 10, 791, 251));
        goodsDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        goodsDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        editGoodsButton = new QPushButton(tab_2);
        editGoodsButton->setObjectName("editGoodsButton");
        editGoodsButton->setGeometry(QRect(660, 320, 141, 41));
        editGoodsButton->setFont(font2);
        addGoodsButton = new QPushButton(tab_2);
        addGoodsButton->setObjectName("addGoodsButton");
        addGoodsButton->setGeometry(QRect(660, 270, 141, 41));
        addGoodsButton->setFont(font2);
        NameTextEdit = new QTextEdit(tab_2);
        NameTextEdit->setObjectName("NameTextEdit");
        NameTextEdit->setGeometry(QRect(230, 270, 401, 41));
        NameTextEdit->setFont(font);
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 280, 201, 31));
        label->setFont(font1);
        PriceTextEdit = new QTextEdit(tab_2);
        PriceTextEdit->setObjectName("PriceTextEdit");
        PriceTextEdit->setGeometry(QRect(230, 320, 401, 41));
        PriceTextEdit->setFont(font);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 330, 201, 31));
        label_2->setFont(font1);
        deleteGoodsButton = new QPushButton(tab_2);
        deleteGoodsButton->setObjectName("deleteGoodsButton");
        deleteGoodsButton->setGeometry(QRect(10, 370, 791, 41));
        deleteGoodsButton->setFont(font2);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        servicesDataTable = new QTableView(tab_4);
        servicesDataTable->setObjectName("servicesDataTable");
        servicesDataTable->setGeometry(QRect(10, 10, 791, 251));
        servicesDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        servicesDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        servicesPriceTextEdit = new QTextEdit(tab_4);
        servicesPriceTextEdit->setObjectName("servicesPriceTextEdit");
        servicesPriceTextEdit->setGeometry(QRect(230, 320, 401, 41));
        servicesPriceTextEdit->setFont(font);
        servicesNameTextEdit = new QTextEdit(tab_4);
        servicesNameTextEdit->setObjectName("servicesNameTextEdit");
        servicesNameTextEdit->setGeometry(QRect(230, 270, 401, 41));
        servicesNameTextEdit->setFont(font);
        editServicesButton = new QPushButton(tab_4);
        editServicesButton->setObjectName("editServicesButton");
        editServicesButton->setGeometry(QRect(660, 320, 141, 41));
        editServicesButton->setFont(font2);
        label_8 = new QLabel(tab_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 280, 201, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(tab_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 330, 201, 31));
        label_9->setFont(font1);
        addServicesButton = new QPushButton(tab_4);
        addServicesButton->setObjectName("addServicesButton");
        addServicesButton->setGeometry(QRect(660, 270, 141, 41));
        addServicesButton->setFont(font2);
        deleteServicesButton = new QPushButton(tab_4);
        deleteServicesButton->setObjectName("deleteServicesButton");
        deleteServicesButton->setGeometry(QRect(10, 370, 791, 41));
        deleteServicesButton->setFont(font2);
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        addUnitsButton = new QPushButton(tab_6);
        addUnitsButton->setObjectName("addUnitsButton");
        addUnitsButton->setGeometry(QRect(670, 270, 141, 41));
        addUnitsButton->setFont(font2);
        unitsDataTable = new QTableView(tab_6);
        unitsDataTable->setObjectName("unitsDataTable");
        unitsDataTable->setGeometry(QRect(20, 10, 791, 251));
        unitsDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        unitsDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_12 = new QLabel(tab_6);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 330, 201, 31));
        label_12->setFont(font1);
        label_13 = new QLabel(tab_6);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 280, 201, 31));
        label_13->setFont(font1);
        unitsNameTextEdit = new QTextEdit(tab_6);
        unitsNameTextEdit->setObjectName("unitsNameTextEdit");
        unitsNameTextEdit->setGeometry(QRect(240, 270, 401, 41));
        unitsNameTextEdit->setFont(font);
        deleteUnitsButton = new QPushButton(tab_6);
        deleteUnitsButton->setObjectName("deleteUnitsButton");
        deleteUnitsButton->setGeometry(QRect(20, 370, 791, 41));
        deleteUnitsButton->setFont(font2);
        editUnitsButton = new QPushButton(tab_6);
        editUnitsButton->setObjectName("editUnitsButton");
        editUnitsButton->setGeometry(QRect(670, 320, 141, 41));
        editUnitsButton->setFont(font2);
        unitsShortNameTextEdit = new QTextEdit(tab_6);
        unitsShortNameTextEdit->setObjectName("unitsShortNameTextEdit");
        unitsShortNameTextEdit->setGeometry(QRect(240, 320, 401, 41));
        unitsShortNameTextEdit->setFont(font);
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        priceNameTextEdit = new QTextEdit(tab_7);
        priceNameTextEdit->setObjectName("priceNameTextEdit");
        priceNameTextEdit->setGeometry(QRect(230, 260, 401, 41));
        priceNameTextEdit->setFont(font);
        label_14 = new QLabel(tab_7);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 270, 201, 31));
        label_14->setFont(font1);
        editPriceButton = new QPushButton(tab_7);
        editPriceButton->setObjectName("editPriceButton");
        editPriceButton->setGeometry(QRect(660, 310, 141, 41));
        editPriceButton->setFont(font2);
        priceDataTable = new QTableView(tab_7);
        priceDataTable->setObjectName("priceDataTable");
        priceDataTable->setGeometry(QRect(10, 0, 791, 251));
        priceDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        priceDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        priceCountTextEdit = new QTextEdit(tab_7);
        priceCountTextEdit->setObjectName("priceCountTextEdit");
        priceCountTextEdit->setGeometry(QRect(230, 310, 401, 41));
        priceCountTextEdit->setFont(font);
        deletePriceButton = new QPushButton(tab_7);
        deletePriceButton->setObjectName("deletePriceButton");
        deletePriceButton->setGeometry(QRect(10, 360, 791, 41));
        deletePriceButton->setFont(font2);
        addPriceButton = new QPushButton(tab_7);
        addPriceButton->setObjectName("addPriceButton");
        addPriceButton->setGeometry(QRect(660, 260, 141, 41));
        addPriceButton->setFont(font2);
        label_15 = new QLabel(tab_7);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 320, 201, 31));
        label_15->setFont(font1);
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        phoneDataTable = new QTableView(tab_8);
        phoneDataTable->setObjectName("phoneDataTable");
        phoneDataTable->setGeometry(QRect(20, 20, 791, 251));
        phoneDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        phoneDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        phoneNumberTextEdit = new QTextEdit(tab_8);
        phoneNumberTextEdit->setObjectName("phoneNumberTextEdit");
        phoneNumberTextEdit->setGeometry(QRect(240, 280, 401, 41));
        phoneNumberTextEdit->setFont(font);
        label_17 = new QLabel(tab_8);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 290, 201, 31));
        label_17->setFont(font1);
        editPhoneButton = new QPushButton(tab_8);
        editPhoneButton->setObjectName("editPhoneButton");
        editPhoneButton->setGeometry(QRect(20, 330, 791, 41));
        editPhoneButton->setFont(font2);
        deletePhoneButton = new QPushButton(tab_8);
        deletePhoneButton->setObjectName("deletePhoneButton");
        deletePhoneButton->setGeometry(QRect(20, 380, 791, 41));
        deletePhoneButton->setFont(font2);
        addPhoneButton = new QPushButton(tab_8);
        addPhoneButton->setObjectName("addPhoneButton");
        addPhoneButton->setGeometry(QRect(670, 280, 141, 41));
        addPhoneButton->setFont(font2);
        tabWidget->addTab(tab_8, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        deleteLocalityButton = new QPushButton(tab_10);
        deleteLocalityButton->setObjectName("deleteLocalityButton");
        deleteLocalityButton->setGeometry(QRect(10, 370, 791, 41));
        deleteLocalityButton->setFont(font2);
        label_16 = new QLabel(tab_10);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 280, 201, 31));
        label_16->setFont(font1);
        localityDataTable = new QTableView(tab_10);
        localityDataTable->setObjectName("localityDataTable");
        localityDataTable->setGeometry(QRect(10, 10, 791, 251));
        localityDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        localityDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        localityNameTextEdit = new QTextEdit(tab_10);
        localityNameTextEdit->setObjectName("localityNameTextEdit");
        localityNameTextEdit->setGeometry(QRect(230, 270, 401, 41));
        localityNameTextEdit->setFont(font);
        label_19 = new QLabel(tab_10);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(20, 330, 201, 31));
        label_19->setFont(font1);
        editLocalityButton = new QPushButton(tab_10);
        editLocalityButton->setObjectName("editLocalityButton");
        editLocalityButton->setGeometry(QRect(660, 320, 141, 41));
        editLocalityButton->setFont(font2);
        localityShortNameTextEdit = new QTextEdit(tab_10);
        localityShortNameTextEdit->setObjectName("localityShortNameTextEdit");
        localityShortNameTextEdit->setGeometry(QRect(230, 320, 401, 41));
        localityShortNameTextEdit->setFont(font);
        addLocalityButton = new QPushButton(tab_10);
        addLocalityButton->setObjectName("addLocalityButton");
        addLocalityButton->setGeometry(QRect(660, 270, 141, 41));
        addLocalityButton->setFont(font2);
        tabWidget->addTab(tab_10, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName("tab_12");
        addInvoiceButton = new QPushButton(tab_12);
        addInvoiceButton->setObjectName("addInvoiceButton");
        addInvoiceButton->setGeometry(QRect(670, 280, 141, 41));
        addInvoiceButton->setFont(font2);
        invoiceDateTimeEdit = new QDateTimeEdit(tab_12);
        invoiceDateTimeEdit->setObjectName("invoiceDateTimeEdit");
        invoiceDateTimeEdit->setGeometry(QRect(250, 280, 401, 41));
        invoiceDateTimeEdit->setFont(font);
        deleteInvoiceButton = new QPushButton(tab_12);
        deleteInvoiceButton->setObjectName("deleteInvoiceButton");
        deleteInvoiceButton->setGeometry(QRect(30, 380, 781, 41));
        deleteInvoiceButton->setFont(font2);
        label_22 = new QLabel(tab_12);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(40, 290, 201, 31));
        label_22->setFont(font1);
        invoiceDataTable = new QTableView(tab_12);
        invoiceDataTable->setObjectName("invoiceDataTable");
        invoiceDataTable->setGeometry(QRect(20, 20, 791, 251));
        invoiceDataTable->setSelectionMode(QAbstractItemView::SingleSelection);
        invoiceDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        editInvoiceButton = new QPushButton(tab_12);
        editInvoiceButton->setObjectName("editInvoiceButton");
        editInvoiceButton->setGeometry(QRect(30, 330, 781, 41));
        editInvoiceButton->setFont(font2);
        tabWidget->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName("tab_13");
        InvoicePositionUnitPriceTextEdit = new QTextEdit(tab_13);
        InvoicePositionUnitPriceTextEdit->setObjectName("InvoicePositionUnitPriceTextEdit");
        InvoicePositionUnitPriceTextEdit->setGeometry(QRect(240, 330, 401, 41));
        InvoicePositionUnitPriceTextEdit->setFont(font);
        label_23 = new QLabel(tab_13);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(30, 290, 201, 31));
        label_23->setFont(font1);
        invoicePositionTypeCountTextEdit = new QTextEdit(tab_13);
        invoicePositionTypeCountTextEdit->setObjectName("invoicePositionTypeCountTextEdit");
        invoicePositionTypeCountTextEdit->setGeometry(QRect(240, 280, 401, 41));
        invoicePositionTypeCountTextEdit->setFont(font);
        localityTypeDataTable_2 = new QTableView(tab_13);
        localityTypeDataTable_2->setObjectName("localityTypeDataTable_2");
        localityTypeDataTable_2->setGeometry(QRect(20, 20, 791, 251));
        localityTypeDataTable_2->setSelectionMode(QAbstractItemView::SingleSelection);
        localityTypeDataTable_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_24 = new QLabel(tab_13);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(30, 340, 201, 31));
        label_24->setFont(font1);
        deleteInvoicePositionButton = new QPushButton(tab_13);
        deleteInvoicePositionButton->setObjectName("deleteInvoicePositionButton");
        deleteInvoicePositionButton->setGeometry(QRect(20, 380, 791, 41));
        deleteInvoicePositionButton->setFont(font2);
        editInvoicePositionButton = new QPushButton(tab_13);
        editInvoicePositionButton->setObjectName("editInvoicePositionButton");
        editInvoicePositionButton->setGeometry(QRect(670, 330, 141, 41));
        editInvoicePositionButton->setFont(font2);
        addInvoicePositionButton = new QPushButton(tab_13);
        addInvoicePositionButton->setObjectName("addInvoicePositionButton");
        addInvoicePositionButton->setGeometry(QRect(670, 280, 141, 41));
        addInvoicePositionButton->setFont(font2);
        tabWidget->addTab(tab_13, QString());
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(710, 450, 91, 41));
        exitButton->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 828, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        editProviderButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        deleteProviderButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addProviderButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\260\321\211\320\270\320\272\320\270", nullptr));
        editSaleButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        deleteSaleButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addSaleButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", nullptr));
        reportOfSales->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\321\221\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\260\320\266\320\270", nullptr));
        editGoodsButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        addGoodsButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        deleteGoodsButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
        editServicesButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        addServicesButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteServicesButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\243\320\273\320\270\321\206\321\213", nullptr));
        addUnitsButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        deleteUnitsButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        editUnitsButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\320\225\320\264\320\270\320\275\320\270\321\206\321\213 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        editPriceButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        deletePriceButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addPriceButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        editPhoneButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        deletePhoneButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addPhoneButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        deleteLocalityButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\202\320\272\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        editLocalityButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        addLocalityButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\320\265\320\273\321\221\320\275\320\275\321\213\320\271 \320\277\321\203\320\275\320\272\321\202", nullptr));
        addInvoiceButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteInvoiceButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", nullptr));
        editInvoiceButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QCoreApplication::translate("MainWindow", "\320\235\320\260\320\272\320\273\320\260\320\264\320\275\320\260\321\217", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 \320\267\320\260 \320\265\320\264\320\270\320\275\320\270\321\206\321\203", nullptr));
        deleteInvoicePositionButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        editInvoicePositionButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        addInvoicePositionButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QCoreApplication::translate("MainWindow", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217 \320\275\320\260\320\272\320\273\320\260\320\264\320\275\320\276\320\271", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
