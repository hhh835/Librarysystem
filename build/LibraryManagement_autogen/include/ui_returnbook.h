/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReturnBook
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *txtReturnDate;
    QPushButton *returnButton;
    QPushButton *cancelButton;

    void setupUi(QMainWindow *ReturnBook)
    {
        if (ReturnBook->objectName().isEmpty())
            ReturnBook->setObjectName("ReturnBook");
        ReturnBook->resize(371, 146);
        ReturnBook->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #1C1C1C;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color: #2F2F2F;\n"
"	border-radius: 3px;\n"
"	color: white;\n"
"	border-bottom: 1px;\n"
"	border-style: solid;\n"
"	border-color: #979797;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border-color: #60CDFF;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: white;\n"
"    font-size: 15px;\n"
"    background-color: #292929;\n"
"    border-radius: 5px;\n"
"    font-family: \"Noto Sans\"\n"
"}\n"
"\n"
"QPushButton::hover{ \n"
"    background-color: #2F2F2F;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"	border-color: white;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"    color: white;\n"
"	font-size: 16px;\n"
"    font-family: \"Noto Sans\";l\n"
"    border-radius: 5px;\n"
"}"));
        centralwidget = new QWidget(ReturnBook);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 110, 28));
        txtReturnDate = new QLineEdit(centralwidget);
        txtReturnDate->setObjectName("txtReturnDate");
        txtReturnDate->setGeometry(QRect(150, 20, 191, 31));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(210, 90, 106, 30));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(50, 90, 106, 30));
        ReturnBook->setCentralWidget(centralwidget);

        retranslateUi(ReturnBook);

        QMetaObject::connectSlotsByName(ReturnBook);
    } // setupUi

    void retranslateUi(QMainWindow *ReturnBook)
    {
        ReturnBook->setWindowTitle(QCoreApplication::translate("ReturnBook", "Return Book", nullptr));
        label->setText(QCoreApplication::translate("ReturnBook", "Return Date", nullptr));
        returnButton->setText(QCoreApplication::translate("ReturnBook", "Return", nullptr));
        cancelButton->setText(QCoreApplication::translate("ReturnBook", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnBook: public Ui_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
