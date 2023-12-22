#include "reportwindow.h"
#include "ui_reportwindow.h"

ReportWindow::ReportWindow(DatabaseService* dbService,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReportWindow)
{
    ui->setupUi(this);
    _dbService = dbService;
}

ReportWindow::~ReportWindow()
{
    delete ui;
}

void ReportWindow::on_pushButton_clicked()
{
    QDate fpStart  = ui->firstPeriodStartDataEdit->date();
    QDate fpEnd = ui->firstPeriodEndDataEdit->date();
    if (fpStart > fpEnd)
    {
        QMessageBox* mb = new QMessageBox();
        mb->setText("Начало первого периода больше, чем его конец!");
        mb->exec();
        delete mb;
        return;
    }

    QDate spStart  = ui->secondPeriodStartDataEdit->date();
    QDate spEnd = ui->secondPeriodEndDataEdit->date();
    if (spStart > spEnd)
    {
        QMessageBox* mb = new QMessageBox();
        mb->setText("Начало второго периода больше, чем его конец!");
        mb->exec();
        delete mb;
        return;
    }

    QDate thpStart  = ui->thirdPeriodStartDataEdit->date();
    QDate thpEnd  = ui->thirdPeriodEndDataEdit->date();
    if (thpStart > thpEnd)
    {
        QMessageBox* mb = new QMessageBox();
        mb->setText("Начало третьего периода больше, чем его конец!");
        mb->exec();
        delete mb;
        return;
    }

    QString query = QString("SELECT * FROM Sales WHERE [Date] >'" + fpStart.toString( "yyyy-MM-dd") + "' AND [Date] < '"
                            + fpEnd.toString( "yyyy-MM-dd") + "'OR [Date] >= '" + spStart.toString( "yyyy-MM-dd")+ "' AND [Date] <= '"
                            + spEnd.toString( "yyyy-MM-dd")+"' OR [Date] >= '" + thpStart.toString( "yyyy-MM-dd")+ "' AND [Date] <= '"
                            + thpEnd.toString("yyyy-MM-dd")+"'");

    auto result = _dbService->SaleStatistic(query);
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::homePath(), tr("Text Files (*.csv);;All Files (*)"));

    if (!fileName.isEmpty())
    {
        QString data = "Цена;Количество;Дата;\n";
        for ( const auto &el : result)
        {
            data += QString::number(el.Price) + ";" + QString::number(el.Count) + ";"+ el.Date.toString()+ ";\n" ;
        }

        QFile file(fileName);
        QMessageBox* mb = new QMessageBox();
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&file);
            out << data;
            file.close();
            mb->setText("Отчет выгружен");
        }
        else
        {
            mb->setText("Не удалось открыть файл!");
        }
        mb->exec();
        delete mb;

    }
}
