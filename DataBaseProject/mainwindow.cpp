#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(DatabaseService* dbService,User* user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    _user = user;
    ui->setupUi(this);
    _dbService = dbService;

    ui->saleDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->goodsDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->providerDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->servicesDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->unitsDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->priceDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->phoneDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->localityDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->invoiceDataTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->saleDataTable->setModel(_dbService->GetModel("SELECT * FROM Sales"));
    ui->saleDataTable->hideColumn(0);

    ui->goodsDataTable->setModel(_dbService->GetModel("SELECT * FROM Goods"));
    ui->goodsDataTable->hideColumn(0);

    ui->providerDataTable->setModel(_dbService->GetModel("SELECT * FROM Provider"));
    ui->providerDataTable->hideColumn(0);

    ui->servicesDataTable->setModel(_dbService->GetModel("SELECT * FROM Street"));
    ui->servicesDataTable->hideColumn(0);


    ui->unitsDataTable->setModel(_dbService->GetModel("SELECT * FROM Units"));
    ui->unitsDataTable->hideColumn(0);

    ui->priceDataTable->setModel(_dbService->GetModel("SELECT * FROM Price"));
    ui->priceDataTable->hideColumn(0);

    ui->phoneDataTable->setModel(_dbService->GetModel("SELECT * FROM Phone"));
    ui->phoneDataTable->hideColumn(0);

    ui->phoneDataTable->setModel(_dbService->GetModel("SELECT * FROM PhoneType"));
    ui->phoneDataTable->hideColumn(0);

    ui->localityDataTable->setModel(_dbService->GetModel("SELECT * FROM Locality"));
    ui->localityDataTable->hideColumn(0);

    ui->invoiceDataTable->setModel(_dbService->GetModel("SELECT * FROM Invoice"));
    ui->invoiceDataTable->hideColumn(0);
}
//ctrl+I
//ctrl+alt+up - вверх
MainWindow::~MainWindow()
{
    delete ui;
    delete _user;
    delete _dbService;
}

///GOODS
void MainWindow::on_exitButton_clicked()
{
    hide();
    close();
}
void MainWindow::on_addGoodsButton_clicked()
{
    Goods goods;
    goods.Name =  ui->NameTextEdit->toPlainText();
    goods.Price =  ui->PriceTextEdit->toPlainText();

    auto result = _dbService->
            SetQuery("INSERT INTO Goods(Name, Price)"" VALUES('"+goods.Name+"','" +goods.Price+"')");
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->goodsDataTable->setModel(_dbService->GetModel("SELECT * FROM Goods"));
    ui->goodsDataTable->hideColumn(0);
}

void MainWindow::on_editGoodsButton_clicked()
{
    Goods goods;
    goods.Name =  ui->NameTextEdit->toPlainText();
    goods.Price =  ui->PriceTextEdit->toPlainText();

    QAbstractItemModel *model = ui->goodsDataTable->model();
    int row_index =  ui->goodsDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto result = _dbService->
            SetQuery("UPDATE  Goods SET [Name]='" + goods.Name + "', [Price]='"+goods.Price+ "' WHERE Id="+Id);
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте сначала!");
    msgBox.exec();
    ui->goodsDataTable->setModel(_dbService->GetModel("SELECT * FROM Goods"));
    ui->goodsDataTable->hideColumn(0);
}
void MainWindow::on_goodsDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->goodsDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);
    QModelIndex index2 = index.model()->index(row_index, 2);

    // Получаем значения из ячеек
    QString Name = index.model()->data(index1, Qt::DisplayRole).toString();
    QString Price = index.model()->data(index2, Qt::DisplayRole).toString();

    ui->NameTextEdit->setText(Name);
    ui->PriceTextEdit->setText(Price);
}
void MainWindow::on_deleteGoodsButton_clicked()
{
    QAbstractItemModel *model = ui->goodsDataTable->model();
    int row_index =  ui->goodsDataTable->selectionModel()->currentIndex().row();\
    QModelIndex index1 = model->index(row_index, 0);

    auto result = this->_dbService->SetQuery("DELETE FROM Goods WHERE Id=" + model->data(index1, Qt::DisplayRole).toString());
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->goodsDataTable->setModel(_dbService->GetModel("SELECT * FROM Goods"));
    ui->goodsDataTable->hideColumn(0);
}

///PROVIDER
void MainWindow::on_addProviderButton_clicked()
{
    Provider provider;
    provider.Name = ui->providerNameTextEdit->toPlainText();
    provider.Email = ui->providerEmailTextEdit->toPlainText();

    // Проверка на заполнение всех полей
    if (provider.Name.isEmpty() || provider.Email.isEmpty())
    {
        QMessageBox::critical(this, "Ошибка", "Вы заполнили не все поля");
        return;
    }

    // Проверка на существование поставщика с таким же именем
    if (_dbService->isProviderEmailExists(provider.Name))
    {
        QMessageBox::critical(this, "Ошибка", "Поставщик с таким именем уже существует");
        return;
    }

    // Проверка на существование поставщика с таким же email
    if (_dbService->isProviderEmailExists(provider.Email))
    {
        QMessageBox::critical(this, "Ошибка", "Поставщик с таким email уже существует");
        return;
    }

    // Вставка данных в базу данных
    auto result = _dbService->SetQuery("INSERT INTO Provider(Name, Email) VALUES('" + provider.Name + "','" + provider.Email + "')");

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Ошибка! Данный поставщик уже есть в базе данных. Проверьте корректность введенных данных и попробуйте снова.");
    msgBox.exec();

    // Обновление отображения данных
    ui->providerDataTable->setModel(_dbService->GetModel("SELECT * FROM Provider"));
    ui->providerDataTable->hideColumn(0);
}

void MainWindow::on_editProviderButton_clicked()
{
    Provider provider;
    provider.Name =  ui->providerNameTextEdit->toPlainText();
    provider.Email =  ui->providerEmailTextEdit->toPlainText();

    QAbstractItemModel *model = ui->providerDataTable->model();
    int row_index =  ui->providerDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto result = _dbService->
            SetQuery("UPDATE  Provider SET [Name]='" + provider.Name + "', [Email]='"+provider.Email+ "' WHERE Id="+Id);
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте сначала!");
    msgBox.exec();
    ui->providerDataTable->setModel(_dbService->GetModel("SELECT * FROM Provider"));
    ui->providerDataTable->hideColumn(0);
}
void MainWindow::on_deleteProviderButton_clicked()
{
    QAbstractItemModel *model = ui->providerDataTable->model();
    int row_index =  ui->providerDataTable->selectionModel()->currentIndex().row();\
    QModelIndex index1 = model->index(row_index, 0);

    auto result = this->_dbService->SetQuery("DELETE FROM Provider WHERE Id=" + model->data(index1, Qt::DisplayRole).toString());
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->providerDataTable->setModel(_dbService->GetModel("SELECT * FROM Provider"));
    ui->providerDataTable->hideColumn(0);
}
void MainWindow::on_providerDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->providerDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);
    QModelIndex index2 = index.model()->index(row_index, 2);

    // Получаем значения из ячеек
    QString Name = index.model()->data(index1, Qt::DisplayRole).toString();
    QString Email = index.model()->data(index2, Qt::DisplayRole).toString();

    ui->providerNameTextEdit->setText(Name);
    ui->providerEmailTextEdit->setText(Email);
}

///SALES
void MainWindow::on_saleDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->saleDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);
    QModelIndex index2 = index.model()->index(row_index, 2);
    QModelIndex index3 = index.model()->index(row_index, 2);

    // Получаем значения из ячеек
    QString Price = index.model()->data(index1, Qt::DisplayRole).toString();
    QString Count = index.model()->data(index2, Qt::DisplayRole).toString();
    QDate Date = index.model()->data(index3, Qt::DisplayRole).toDate();

    ui->salePriceTextEdit->setText(Price);
    ui->saleCountTextEdit->setText(Count);
    ui->saleDateTimeEdit->setDate(Date);
}
void MainWindow::on_addSaleButton_clicked()
{
    Sale sale;
    sale.Count =  ui->saleCountTextEdit->toPlainText().toInt();
    sale.Price =  ui->salePriceTextEdit->toPlainText().toInt();
    sale.Date =  ui->saleDateTimeEdit->date();

    auto query = QString("INSERT INTO Provider(Price, Count,Date)"" VALUES('%1','%2','%3')")
            .arg(sale.Price).arg(sale.Count).arg(sale.Date.toString());

    auto result = _dbService->SetQuery(query);
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->saleDataTable->setModel(_dbService->GetModel("SELECT * FROM Sales"));
    ui->saleDataTable->hideColumn(0);
}
void MainWindow::on_editSaleButton_clicked()
{
    Sale sale;
    sale.Count =  ui->saleCountTextEdit->toPlainText().toInt();
    sale.Price =  ui->salePriceTextEdit->toPlainText().toInt();
    sale.Date =  ui->saleDateTimeEdit->date();

    QAbstractItemModel *model = ui->saleDataTable->model();
    int row_index =  ui->saleDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto query = QString("UPDATE  Sales SET [Price]=%1, [Count]=%2, [Date]=%3 WHERE [Id]=%4")
            .arg(sale.Price).arg(sale.Count).arg(sale.Date.toString()).arg(Id);

    auto result = _dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте сначала!");
    msgBox.exec();
    ui->saleDataTable->setModel(_dbService->GetModel("SELECT * FROM Sales"));
    ui->saleDataTable->hideColumn(0);
}
void MainWindow::on_deleteSaleButton_clicked()
{
    QAbstractItemModel *model = ui->saleDataTable->model();
    int row_index =  ui->saleDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = model->index(row_index, 0);

    auto query = QString("DELETE FROM Sales WHERE Id=%1").arg(model->data(index1, Qt::DisplayRole).toString());
    auto result = this->_dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->saleDataTable->setModel(_dbService->GetModel("SELECT * FROM Sales"));
    ui->saleDataTable->hideColumn(0);
}

///STREET
void MainWindow::on_deleteServicesButton_clicked()
{
    QAbstractItemModel *model = ui->servicesDataTable->model();
    int row_index =  ui->servicesDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = model->index(row_index, 0);

    auto query = QString("DELETE FROM Services WHERE Id=%1").arg(model->data(index1, Qt::DisplayRole).toString());
    auto result = this->_dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->servicesDataTable->setModel(_dbService->GetModel("SELECT * FROM Services"));
    ui->servicesDataTable->hideColumn(0);
}
void MainWindow::on_editServicesButton_clicked()
{
    Services services;
    services.Name =  ui->servicesNameTextEdit->toPlainText();
    services.Price =  ui->servicesPriceTextEdit->toPlainText();

    QAbstractItemModel *model = ui->servicesDataTable->model();
    int row_index =  ui->servicesDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto result = _dbService->
            SetQuery("UPDATE  Services SET [Name]='" + services.Name + "', [Price]='"+services.Price+ "' WHERE Id="+Id);
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->servicesDataTable->setModel(_dbService->GetModel("SELECT * FROM Services"));
    ui->servicesDataTable->hideColumn(0);
}
void MainWindow::on_addServicesButton_clicked()
{
    Services services;
    services.Name =  ui->servicesNameTextEdit->toPlainText();
    services.Price =  ui->servicesPriceTextEdit->toPlainText();
    auto result = _dbService->
            SetQuery("INSERT INTO Services(Name, Price)"" VALUES('"+services.Name+"','" +services.Price+"')");
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->servicesDataTable->setModel(_dbService->GetModel("SELECT * FROM Services"));
    ui->servicesDataTable->hideColumn(0);
}
void MainWindow::on_servicesDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->servicesDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);
    QModelIndex index2 = index.model()->index(row_index, 2);

    // Получаем значения из ячеек
    QString Name = index.model()->data(index1, Qt::DisplayRole).toString();
    QString Price = index.model()->data(index2, Qt::DisplayRole).toString();

    ui->servicesNameTextEdit->setText(Name);
    ui->servicesPriceTextEdit->setText(Price);
}


///Units
void MainWindow::on_unitsDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->unitsDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);
    QModelIndex index2 = index.model()->index(row_index, 2);

    // Получаем значения из ячеек
    QString Name = index.model()->data(index1, Qt::DisplayRole).toString();
    QString ShortName = index.model()->data(index2, Qt::DisplayRole).toString();

    ui->unitsNameTextEdit->setText(Name);
    ui->unitsShortNameTextEdit->setText(ShortName);
}
void MainWindow::on_addUnitsButton_clicked()
{
    Unit unit;
    unit.Name =  ui->unitsNameTextEdit->toPlainText();
    unit.ShortName =  ui->unitsShortNameTextEdit->toPlainText();
    auto result = _dbService->
            SetQuery("INSERT INTO Units(Name, ShortName)"" VALUES('"+unit.Name+"','" +unit.ShortName+"')");
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->unitsDataTable->setModel(_dbService->GetModel("SELECT * FROM Units"));
    ui->unitsDataTable->hideColumn(0);
}
void MainWindow::on_editUnitsButton_clicked()
{
    Unit unit;
    unit.Name =  ui->unitsNameTextEdit->toPlainText();
    unit.ShortName =  ui->unitsShortNameTextEdit->toPlainText();

    QAbstractItemModel *model = ui->unitsDataTable->model();
    int row_index =  ui->unitsDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto result = _dbService->
            SetQuery("UPDATE  Units SET [Name]='" + unit.Name + "', [ShortName]='"+unit.ShortName+ "' WHERE Id="+Id);
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->unitsDataTable->setModel(_dbService->GetModel("SELECT * FROM Units"));
    ui->unitsDataTable->hideColumn(0);
}
void MainWindow::on_deleteUnitsButton_clicked()
{
    QAbstractItemModel *model = ui->unitsDataTable->model();
    int row_index =  ui->unitsDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = model->index(row_index, 0);

    auto query = QString("DELETE FROM Units WHERE Id=%1").arg(model->data(index1, Qt::DisplayRole).toString());
    auto result = this->_dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->unitsDataTable->setModel(_dbService->GetModel("SELECT * FROM Units"));
    ui->unitsDataTable->hideColumn(0);
}

///PRICE
void MainWindow::on_priceDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->priceDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);
    QModelIndex index2 = index.model()->index(row_index, 2);

    // Получаем значения из ячеек
    QString Name = index.model()->data(index1, Qt::DisplayRole).toString();
    QString Count = index.model()->data(index2, Qt::DisplayRole).toString();

    ui->priceNameTextEdit->setText(Name);
    ui->priceCountTextEdit->setText(Count);
}
void MainWindow::on_addPriceButton_clicked()
{
    Price price;
    price.Name =  ui->priceNameTextEdit->toPlainText();
    price.Count =  ui->priceCountTextEdit->toPlainText().toInt();

    auto query = QString("INSERT INTO Price(Name, Count)"" VALUES('%1',%2)").arg(price.Name).arg(price.Count );
    auto result = _dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->priceDataTable->setModel(_dbService->GetModel("SELECT * FROM Price"));
    ui->priceDataTable->hideColumn(0);
}
void MainWindow::on_editPriceButton_clicked()
{
    Price price;
    price.Name =  ui->priceNameTextEdit->toPlainText();
    price.Count =  ui->priceCountTextEdit->toPlainText().toInt();

    QAbstractItemModel *model = ui->priceDataTable->model();
    int row_index =  ui->priceDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto query = QString("UPDATE Price SET [Name]=`%1`,[Count]=%2 WHERE Id=%3").arg(price.Name).arg(price.Count ).arg(Id);
    auto result = _dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->priceDataTable->setModel(_dbService->GetModel("SELECT * FROM Price"));
    ui->priceDataTable->hideColumn(0);
}
void MainWindow::on_deletePriceButton_clicked()
{
    QAbstractItemModel *model = ui->priceDataTable->model();
    int row_index =  ui->priceDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = model->index(row_index, 0);

    auto query = QString("DELETE FROM Price WHERE Id=%1").arg(model->data(index1, Qt::DisplayRole).toString());
    auto result = this->_dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->priceDataTable->setModel(_dbService->GetModel("SELECT * FROM Price"));
    ui->priceDataTable->hideColumn(0);
}

///PHONE
void MainWindow::on_phoneDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->phoneDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);

    // Получаем значения из ячеек
    QString Number = index.model()->data(index1, Qt::DisplayRole).toString();

    ui->phoneNumberTextEdit->setText(Number);
}
void MainWindow::on_addPhoneButton_clicked()
{
    Phone phone;
    phone.name =  ui->phoneNumberTextEdit->toPlainText();

    auto query = QString("INSERT INTO Phone(Number)"" VALUES('%1`)").arg(phone.name);
    auto result = _dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->phoneDataTable->setModel(_dbService->GetModel("SELECT * FROM Phone"));
    ui->phoneDataTable->hideColumn(0);
}
void MainWindow::on_deletePhoneButton_clicked()
{
    QAbstractItemModel *model = ui->phoneDataTable->model();
    int row_index =  ui->phoneDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = model->index(row_index, 0);

    auto query = QString("DELETE FROM Phone WHERE Id=%1").arg(model->data(index1, Qt::DisplayRole).toString());
    auto result = this->_dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->phoneDataTable->setModel(_dbService->GetModel("SELECT * FROM Phone"));
    ui->phoneDataTable->hideColumn(0);
}
void MainWindow::on_editPhoneButton_clicked()
{
    Phone phone;
    phone.name =  ui->phoneNumberTextEdit->toPlainText();

    QAbstractItemModel *model = ui->phoneDataTable->model();
    int row_index =  ui->phoneDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto query = QString("UPDATE Phone [Number]=`%1` WHERE Id=%2").arg(phone.name).arg(Id);
    auto result = _dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->phoneDataTable->setModel(_dbService->GetModel("SELECT * FROM Phone"));
    ui->phoneDataTable->hideColumn(0);
}


///LOCALITY
void MainWindow::on_addLocalityButton_clicked()
{
    Locality locality;
    locality.Name =  ui->localityNameTextEdit->toPlainText();
    locality.ShortName =  ui->localityShortNameTextEdit->toPlainText();
    auto result = _dbService->
            SetQuery("INSERT INTO Locality(Name, ShortName)"" VALUES('"+locality.Name+"','" +locality.ShortName+"')");
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->localityDataTable->setModel(_dbService->GetModel("SELECT * FROM Locality"));
    ui->localityDataTable->hideColumn(0);
}
void MainWindow::on_editLocalityButton_clicked()
{
    Locality locality;
    locality.Name =  ui->localityNameTextEdit->toPlainText();
    locality.ShortName =  ui->localityShortNameTextEdit->toPlainText();

    QAbstractItemModel *model = ui->localityDataTable->model();
    int row_index =  ui->localityDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto result = _dbService->
            SetQuery("UPDATE  Locality SET [Name]='" + locality.Name + "', [ShortName]='"+locality.ShortName+ "' WHERE Id="+Id);
    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->localityDataTable->setModel(_dbService->GetModel("SELECT * FROM Locality"));
    ui->localityDataTable->hideColumn(0);
}
void MainWindow::on_deleteLocalityButton_clicked()
{
    QAbstractItemModel *model = ui->localityDataTable->model();
    int row_index =  ui->localityDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = model->index(row_index, 0);

    auto query = QString("DELETE FROM Locality WHERE Id=%1").arg(model->data(index1, Qt::DisplayRole).toString());
    auto result = this->_dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->localityDataTable->setModel(_dbService->GetModel("SELECT * FROM Locality"));
    ui->localityDataTable->hideColumn(0);
}
void MainWindow::on_localityDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->localityDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);
    QModelIndex index2 = index.model()->index(row_index, 2);

    // Получаем значения из ячеек
    QString Name = index.model()->data(index1, Qt::DisplayRole).toString();
    QString ShortName = index.model()->data(index2, Qt::DisplayRole).toString();

    ui->localityNameTextEdit->setText(Name);
    ui->localityShortNameTextEdit->setText(ShortName);
}

///INVOICE
void MainWindow::on_invoiceDataTable_doubleClicked(const QModelIndex &index)
{
    int row_index =  ui->invoiceDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = index.model()->index(row_index, 1);

    // Получаем значения из ячеек
    QDate Date = index.model()->data(index1, Qt::DisplayRole).toDate();
    ui->invoiceDateTimeEdit->setDate(Date);
}
void MainWindow::on_addInvoiceButton_clicked()
{
    Invoice invoice;
    invoice.Date =  ui->invoiceDateTimeEdit->date();

    auto query = QString("INSERT INTO Invoice(Date)"" VALUES(%1)").arg(invoice.Date.toString());
    auto result = _dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->invoiceDataTable->setModel(_dbService->GetModel("SELECT * FROM Invoice"));
    ui->invoiceDataTable->hideColumn(0);
}
void MainWindow::on_editInvoiceButton_clicked()
{
    Invoice invoice;
    invoice.Date =  ui->invoiceDateTimeEdit->date();

    QAbstractItemModel *model = ui->invoiceDataTable->model();
    int row_index =  ui->invoiceDataTable->selectionModel()->currentIndex().row();
    QString Id =  model->data(model->index(row_index, 0), Qt::DisplayRole).toString();

    auto query = QString("UPDATE  Invoice SET [Date]=%1 WHERE Id=%2").arg(invoice.Date.toString()).arg(Id);
    auto result = _dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте заново!");
    msgBox.exec();
    ui->invoiceDataTable->setModel(_dbService->GetModel("SELECT * FROM Invoice"));
    ui->invoiceDataTable->hideColumn(0);
}
void MainWindow::on_deleteInvoiceButton_clicked()
{
    QAbstractItemModel *model = ui->invoiceDataTable->model();
    int row_index =  ui->invoiceDataTable->selectionModel()->currentIndex().row();
    QModelIndex index1 = model->index(row_index, 0);

    auto query = QString("DELETE FROM Invoice WHERE Id=%1").arg(model->data(index1, Qt::DisplayRole).toString());
    auto result = this->_dbService->SetQuery(query);

    QMessageBox msgBox;
    msgBox.setText(result ? "Успешно!" : "Произошла ошибка! попробуйте снова!");
    msgBox.exec();
    ui->invoiceDataTable->setModel(_dbService->GetModel("SELECT * FROM Invoice"));
    ui->invoiceDataTable->hideColumn(0);
}
void MainWindow::on_reportOfSales_clicked()
{
       auto w = new ReportWindow(this->_dbService,this);
       w->show();
}




void MainWindow::on_exitButton_2_clicked()
{
    hide();
    close();
}


void MainWindow::on_exitButton_3_clicked()
{
    hide();
    close();
}

void MainWindow::on_exitButton_4_clicked()
{
    hide();
    close();
}

void MainWindow::on_exitButton_5_clicked()
{
    hide();
    close();
}
void MainWindow::on_exitButton_6_clicked()
{
    hide();
    close();
}
void MainWindow::on_exitButton_7_clicked()
{
    hide();
    close();
}
void MainWindow::on_exitButton_8_clicked()
{
    hide();
    close();
}
void MainWindow::on_exitButton_9_clicked()
{
    hide();
    close();
}
void MainWindow::on_exitButton_10_clicked()
{
    hide();
    close();
}




