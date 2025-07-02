/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QPushButton *btnAdd;
    QLabel *FullName;
    QLineEdit *txtFullName;
    QLineEdit *txtUsername;
    QLabel *Username;
    QLabel *DOP;
    QLineEdit *txtEmailId;
    QLabel *EmailId;
    QLineEdit *txtAddress;
    QLabel *Address;
    QLineEdit *txtPassword;
    QLabel *Password;
    QLabel *Comments;
    QLineEdit *txtComments;
    QLineEdit *txtPhoneNo;
    QPushButton *btnReset;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->setWindowModality(Qt::WindowModal);
        AddUser->resize(400, 483);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddUser->sizePolicy().hasHeightForWidth());
        AddUser->setSizePolicy(sizePolicy);
        AddUser->setMinimumSize(QSize(400, 483));
        AddUser->setMaximumSize(QSize(400, 483));
        AddUser->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        AddUser->setInputMethodHints(Qt::ImhExclusiveInputMask);
        btnAdd = new QPushButton(AddUser);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(80, 440, 75, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        btnAdd->setFont(font);
        FullName = new QLabel(AddUser);
        FullName->setObjectName("FullName");
        FullName->setGeometry(QRect(10, 10, 101, 31));
        FullName->setFont(font);
        FullName->setStyleSheet(QString::fromUtf8(""));
        txtFullName = new QLineEdit(AddUser);
        txtFullName->setObjectName("txtFullName");
        txtFullName->setGeometry(QRect(120, 10, 251, 31));
        QFont font1;
        font1.setPointSize(11);
        txtFullName->setFont(font1);
        txtUsername = new QLineEdit(AddUser);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(120, 60, 251, 31));
        txtUsername->setFont(font1);
        Username = new QLabel(AddUser);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(10, 60, 91, 31));
        Username->setFont(font);
        DOP = new QLabel(AddUser);
        DOP->setObjectName("DOP");
        DOP->setGeometry(QRect(10, 160, 91, 31));
        DOP->setFont(font);
        txtEmailId = new QLineEdit(AddUser);
        txtEmailId->setObjectName("txtEmailId");
        txtEmailId->setGeometry(QRect(120, 210, 251, 31));
        txtEmailId->setFont(font1);
        EmailId = new QLabel(AddUser);
        EmailId->setObjectName("EmailId");
        EmailId->setGeometry(QRect(10, 210, 91, 31));
        EmailId->setFont(font);
        txtAddress = new QLineEdit(AddUser);
        txtAddress->setObjectName("txtAddress");
        txtAddress->setGeometry(QRect(120, 310, 251, 101));
        txtAddress->setFont(font1);
        txtAddress->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Address = new QLabel(AddUser);
        Address->setObjectName("Address");
        Address->setGeometry(QRect(10, 310, 81, 31));
        Address->setFont(font);
        txtPassword = new QLineEdit(AddUser);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setGeometry(QRect(120, 110, 251, 31));
        txtPassword->setFont(font1);
        Password = new QLabel(AddUser);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(10, 110, 91, 31));
        Password->setFont(font);
        Comments = new QLabel(AddUser);
        Comments->setObjectName("Comments");
        Comments->setGeometry(QRect(10, 260, 101, 31));
        Comments->setFont(font);
        Comments->setTextFormat(Qt::AutoText);
        Comments->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        txtComments = new QLineEdit(AddUser);
        txtComments->setObjectName("txtComments");
        txtComments->setGeometry(QRect(120, 260, 251, 31));
        txtComments->setFont(font1);
        txtPhoneNo = new QLineEdit(AddUser);
        txtPhoneNo->setObjectName("txtPhoneNo");
        txtPhoneNo->setGeometry(QRect(120, 160, 251, 31));
        txtPhoneNo->setFont(font1);
        btnReset = new QPushButton(AddUser);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(230, 440, 75, 31));
        btnReset->setFont(font);

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "Add User", nullptr));
        btnAdd->setText(QCoreApplication::translate("AddUser", "ADD", nullptr));
        FullName->setText(QCoreApplication::translate("AddUser", "Full Name", nullptr));
        txtFullName->setText(QString());
        txtUsername->setText(QString());
        Username->setText(QCoreApplication::translate("AddUser", "Username", nullptr));
        DOP->setText(QCoreApplication::translate("AddUser", "Phone No", nullptr));
        txtEmailId->setText(QString());
        EmailId->setText(QCoreApplication::translate("AddUser", "Email Id", nullptr));
        txtAddress->setText(QString());
        Address->setText(QCoreApplication::translate("AddUser", "Address", nullptr));
        txtPassword->setText(QString());
        Password->setText(QCoreApplication::translate("AddUser", "Password", nullptr));
        Comments->setText(QCoreApplication::translate("AddUser", "Comments", nullptr));
        txtComments->setText(QString());
        txtPhoneNo->setText(QString());
        btnReset->setText(QCoreApplication::translate("AddUser", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
