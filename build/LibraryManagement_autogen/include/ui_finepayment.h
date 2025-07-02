/********************************************************************************
** Form generated from reading UI file 'finepayment.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINEPAYMENT_H
#define UI_FINEPAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FinePayment
{
public:
    QLabel *lblUsername;
    QLineEdit *txtUsername;
    QLabel *lblFineAmount;
    QLineEdit *txtFineAmount;
    QPushButton *btnCalculate;
    QPushButton *btnPay;
    QPushButton *btnClose;

    void setupUi(QDialog *FinePayment)
    {
        if (FinePayment->objectName().isEmpty())
            FinePayment->setObjectName("FinePayment");
        FinePayment->resize(400, 300);
        FinePayment->setStyleSheet(QString::fromUtf8("\n"
"QWidget {\n"
"    background-color: #1C1C1C;\n"
"}\n"
"QLabel, QLineEdit {\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-family: \"Noto Sans\";\n"
"}\n"
"QPushButton {\n"
"    color: white;\n"
"    background-color: #292929;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"    background-color: #2F2F2F;\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 1px solid white;\n"
"}\n"
"   "));
        lblUsername = new QLabel(FinePayment);
        lblUsername->setObjectName("lblUsername");
        lblUsername->setGeometry(QRect(30, 30, 100, 30));
        txtUsername = new QLineEdit(FinePayment);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(140, 30, 220, 30));
        lblFineAmount = new QLabel(FinePayment);
        lblFineAmount->setObjectName("lblFineAmount");
        lblFineAmount->setGeometry(QRect(30, 80, 100, 30));
        txtFineAmount = new QLineEdit(FinePayment);
        txtFineAmount->setObjectName("txtFineAmount");
        txtFineAmount->setGeometry(QRect(140, 80, 220, 30));
        txtFineAmount->setReadOnly(true);
        btnCalculate = new QPushButton(FinePayment);
        btnCalculate->setObjectName("btnCalculate");
        btnCalculate->setGeometry(QRect(30, 130, 150, 30));
        btnPay = new QPushButton(FinePayment);
        btnPay->setObjectName("btnPay");
        btnPay->setGeometry(QRect(210, 130, 150, 30));
        btnClose = new QPushButton(FinePayment);
        btnClose->setObjectName("btnClose");
        btnClose->setGeometry(QRect(150, 200, 100, 30));

        retranslateUi(FinePayment);

        QMetaObject::connectSlotsByName(FinePayment);
    } // setupUi

    void retranslateUi(QDialog *FinePayment)
    {
        FinePayment->setWindowTitle(QCoreApplication::translate("FinePayment", "Fine Payment", nullptr));
        lblUsername->setText(QCoreApplication::translate("FinePayment", "Username:", nullptr));
        lblFineAmount->setText(QCoreApplication::translate("FinePayment", "Fine Amount:", nullptr));
        btnCalculate->setText(QCoreApplication::translate("FinePayment", "Calculate Fine", nullptr));
        btnPay->setText(QCoreApplication::translate("FinePayment", "Pay Fine", nullptr));
        btnClose->setText(QCoreApplication::translate("FinePayment", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinePayment: public Ui_FinePayment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINEPAYMENT_H
