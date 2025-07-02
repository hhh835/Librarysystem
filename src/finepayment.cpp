#include "include/finepayment.h"
#include "ui_finepayment.h"
#include <QMessageBox>
#include <ctime>

FinePayment::FinePayment(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::FinePayment)
{
    ui->setupUi(this);
    ui->txtFineAmount->setReadOnly(true);
}

FinePayment::~FinePayment()
{
    delete ui;
}

void FinePayment::on_btnCalculate_clicked()
{
    QString username = ui->txtUsername->text().trimmed();
    if (username.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter a username.");
        return;
    }

    double totalFine = calculateFineForUser(username);
    ui->txtFineAmount->setText("$" + QString::number(totalFine, 'f', 2));
}

double FinePayment::calculateFineForUser(const QString& username)
{
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("SELECT issue_date FROM issued_books WHERE username = :username AND return_date IS NULL");
    query.bindValue(":username", username);

    double fine = 0.0;
    int maxBorrowDays = 14;
    double finePerDay = 0.5;

    Calendar cal;
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    Date today = { now->tm_mday, now->tm_mon + 1, now->tm_year + 1900 };

    if (!query.exec()) {
        qDebug() << "Query failed:" << query.lastError().text();
        return 0.0;
    }

    while (query.next()) {
        QString issueDateStr = query.value(0).toString();
        int year = issueDateStr.mid(0, 4).toInt();
        int month = issueDateStr.mid(5, 2).toInt();
        int day = issueDateStr.mid(8, 2).toInt();
        Date issueDate = { day, month, year };

        int daysBorrowed = cal.getDifference(issueDate, today);
        if (daysBorrowed > maxBorrowDays)
            fine += (daysBorrowed - maxBorrowDays) * finePerDay;
    }

    return fine;
}

void FinePayment::on_btnPay_clicked()
{
    if (ui->txtFineAmount->text() == "$0.00") {
        QMessageBox::information(this, "Info", "No fine to pay.");
        return;
    }
    QMessageBox::information(this, "Payment", "Fine paid successfully!");
    this->close();
}

void FinePayment::on_btnClose_clicked()
{
    this->close();
}
