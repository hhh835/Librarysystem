/********************************************************************************
** Form generated from reading UI file 'criticalmsgbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRITICALMSGBOX_H
#define UI_CRITICALMSGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CriticalMsgBox
{
public:
    QWidget *centralwidget;
    QLabel *img;
    QLabel *label_2;
    QLabel *text;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QMainWindow *CriticalMsgBox)
    {
        if (CriticalMsgBox->objectName().isEmpty())
            CriticalMsgBox->setObjectName("CriticalMsgBox");
        CriticalMsgBox->resize(577, 119);
        CriticalMsgBox->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #442726;\n"
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
"    color: black;\n"
"    font-size: 15px;\n"
"    background-color: #60CDFF;\n"
"    border-radius: 5px;\n"
"    font-family: \"Noto Sans\"\n"
"}\n"
"\n"
"QPushButton::hover{ \n"
"    background-color: #60CDFF;\n"
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
        centralwidget = new QWidget(CriticalMsgBox);
        centralwidget->setObjectName("centralwidget");
        img = new QLabel(centralwidget);
        img->setObjectName("img");
        img->setGeometry(QRect(20, 20, 35, 32));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 20, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"}"));
        text = new QLabel(centralwidget);
        text->setObjectName("text");
        text->setGeometry(QRect(210, 20, 351, 31));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(310, 70, 106, 30));
        okButton = new QPushButton(centralwidget);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(440, 70, 106, 30));
        CriticalMsgBox->setCentralWidget(centralwidget);

        retranslateUi(CriticalMsgBox);

        QMetaObject::connectSlotsByName(CriticalMsgBox);
    } // setupUi

    void retranslateUi(QMainWindow *CriticalMsgBox)
    {
        CriticalMsgBox->setWindowTitle(QCoreApplication::translate("CriticalMsgBox", "MainWindow", nullptr));
        img->setText(QString());
        label_2->setText(QCoreApplication::translate("CriticalMsgBox", "Warning", nullptr));
        text->setText(QCoreApplication::translate("CriticalMsgBox", "Are you sure you want to delete this book?", nullptr));
        cancelButton->setText(QCoreApplication::translate("CriticalMsgBox", "Cancel", nullptr));
        okButton->setText(QCoreApplication::translate("CriticalMsgBox", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CriticalMsgBox: public Ui_CriticalMsgBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRITICALMSGBOX_H
