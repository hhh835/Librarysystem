/********************************************************************************
** Form generated from reading UI file 'messagebox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEBOX_H
#define UI_MESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageBox
{
public:
    QWidget *centralwidget;
    QLabel *text;
    QPushButton *okButton;
    QLabel *title;
    QLabel *img;

    void setupUi(QMainWindow *MessageBox)
    {
        if (MessageBox->objectName().isEmpty())
            MessageBox->setObjectName("MessageBox");
        MessageBox->resize(568, 74);
        MessageBox->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        centralwidget = new QWidget(MessageBox);
        centralwidget->setObjectName("centralwidget");
        text = new QLabel(centralwidget);
        text->setObjectName("text");
        text->setGeometry(QRect(180, 20, 311, 31));
        okButton = new QPushButton(centralwidget);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(510, 20, 40, 35));
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(60, 20, 111, 31));
        title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"}"));
        img = new QLabel(centralwidget);
        img->setObjectName("img");
        img->setGeometry(QRect(10, 20, 35, 32));
        MessageBox->setCentralWidget(centralwidget);

        retranslateUi(MessageBox);

        QMetaObject::connectSlotsByName(MessageBox);
    } // setupUi

    void retranslateUi(QMainWindow *MessageBox)
    {
        MessageBox->setWindowTitle(QCoreApplication::translate("MessageBox", "MainWindow", nullptr));
        text->setText(QString());
        okButton->setText(QCoreApplication::translate("MessageBox", "\303\227", nullptr));
        title->setText(QCoreApplication::translate("MessageBox", "Success", nullptr));
        img->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MessageBox: public Ui_MessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEBOX_H
