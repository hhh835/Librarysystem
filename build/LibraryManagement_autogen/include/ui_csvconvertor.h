/********************************************************************************
** Form generated from reading UI file 'csvconvertor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSVCONVERTOR_H
#define UI_CSVCONVERTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CsvConvertor
{
public:
    QWidget *centralwidget;
    QLabel *fileName;
    QLabel *path;
    QLineEdit *txtFileName;
    QLineEdit *txtPath;
    QPushButton *saveButton;
    QPushButton *cancelButton;

    void setupUi(QMainWindow *CsvConvertor)
    {
        if (CsvConvertor->objectName().isEmpty())
            CsvConvertor->setObjectName("CsvConvertor");
        CsvConvertor->resize(456, 200);
        CsvConvertor->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        centralwidget = new QWidget(CsvConvertor);
        centralwidget->setObjectName("centralwidget");
        fileName = new QLabel(centralwidget);
        fileName->setObjectName("fileName");
        fileName->setGeometry(QRect(30, 40, 80, 21));
        path = new QLabel(centralwidget);
        path->setObjectName("path");
        path->setGeometry(QRect(30, 90, 80, 21));
        txtFileName = new QLineEdit(centralwidget);
        txtFileName->setObjectName("txtFileName");
        txtFileName->setGeometry(QRect(130, 40, 311, 28));
        txtPath = new QLineEdit(centralwidget);
        txtPath->setObjectName("txtPath");
        txtPath->setGeometry(QRect(130, 90, 311, 28));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(330, 150, 106, 30));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(210, 150, 106, 30));
        CsvConvertor->setCentralWidget(centralwidget);

        retranslateUi(CsvConvertor);

        QMetaObject::connectSlotsByName(CsvConvertor);
    } // setupUi

    void retranslateUi(QMainWindow *CsvConvertor)
    {
        CsvConvertor->setWindowTitle(QCoreApplication::translate("CsvConvertor", "MainWindow", nullptr));
        fileName->setText(QCoreApplication::translate("CsvConvertor", "Filename", nullptr));
        path->setText(QCoreApplication::translate("CsvConvertor", "Path", nullptr));
        saveButton->setText(QCoreApplication::translate("CsvConvertor", "Save", nullptr));
        cancelButton->setText(QCoreApplication::translate("CsvConvertor", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CsvConvertor: public Ui_CsvConvertor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSVCONVERTOR_H
