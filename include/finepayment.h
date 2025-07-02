#ifndef FINEPAYMENT_H
#define FINEPAYMENT_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "include/mydb.h"
#include "calendar.h"

namespace Ui {
    class FinePayment;
}

class FinePayment : public QDialog
{
    Q_OBJECT

public:
    explicit FinePayment(QWidget* parent = nullptr);
    ~FinePayment();

private slots:
    void on_btnCalculate_clicked();
    void on_btnPay_clicked();
    void on_btnClose_clicked();

private:
    Ui::FinePayment* ui;
    double calculateFineForUser(const QString& username);
};

#endif // FINEPAYMENT_H
