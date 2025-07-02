/********************************************************************************
** Form generated from reading UI file 'edituser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSER_H
#define UI_EDITUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditUser
{
public:
    QPushButton *btnEdit;
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

    void setupUi(QDialog *EditUser)
    {
        if (EditUser->objectName().isEmpty())
            EditUser->setObjectName("EditUser");
        EditUser->setWindowModality(Qt::WindowModal);
        EditUser->resize(400, 483);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditUser->sizePolicy().hasHeightForWidth());
        EditUser->setSizePolicy(sizePolicy);
        EditUser->setMinimumSize(QSize(400, 483));
        EditUser->setMaximumSize(QSize(400, 483));
        EditUser->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
"}\n"
""));
        EditUser->setInputMethodHints(Qt::ImhExclusiveInputMask);
        btnEdit = new QPushButton(EditUser);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(70, 440, 75, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        btnEdit->setFont(font);
        FullName = new QLabel(EditUser);
        FullName->setObjectName("FullName");
        FullName->setGeometry(QRect(10, 10, 91, 31));
        FullName->setFont(font);
        FullName->setStyleSheet(QString::fromUtf8(""));
        txtFullName = new QLineEdit(EditUser);
        txtFullName->setObjectName("txtFullName");
        txtFullName->setGeometry(QRect(120, 10, 251, 31));
        QFont font1;
        font1.setPointSize(11);
        txtFullName->setFont(font1);
        txtUsername = new QLineEdit(EditUser);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(120, 60, 251, 31));
        txtUsername->setFont(font1);
        Username = new QLabel(EditUser);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(10, 60, 91, 31));
        Username->setFont(font);
        DOP = new QLabel(EditUser);
        DOP->setObjectName("DOP");
        DOP->setGeometry(QRect(10, 160, 91, 31));
        DOP->setFont(font);
        txtEmailId = new QLineEdit(EditUser);
        txtEmailId->setObjectName("txtEmailId");
        txtEmailId->setGeometry(QRect(120, 210, 251, 31));
        txtEmailId->setFont(font1);
        EmailId = new QLabel(EditUser);
        EmailId->setObjectName("EmailId");
        EmailId->setGeometry(QRect(10, 210, 91, 31));
        EmailId->setFont(font);
        txtAddress = new QLineEdit(EditUser);
        txtAddress->setObjectName("txtAddress");
        txtAddress->setGeometry(QRect(120, 310, 251, 101));
        txtAddress->setFont(font1);
        txtAddress->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Address = new QLabel(EditUser);
        Address->setObjectName("Address");
        Address->setGeometry(QRect(10, 310, 91, 31));
        Address->setFont(font);
        txtPassword = new QLineEdit(EditUser);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setGeometry(QRect(120, 110, 251, 31));
        txtPassword->setFont(font1);
        Password = new QLabel(EditUser);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(10, 110, 91, 31));
        Password->setFont(font);
        Comments = new QLabel(EditUser);
        Comments->setObjectName("Comments");
        Comments->setGeometry(QRect(10, 260, 91, 31));
        Comments->setFont(font);
        txtComments = new QLineEdit(EditUser);
        txtComments->setObjectName("txtComments");
        txtComments->setGeometry(QRect(120, 260, 251, 31));
        txtComments->setFont(font1);
        txtPhoneNo = new QLineEdit(EditUser);
        txtPhoneNo->setObjectName("txtPhoneNo");
        txtPhoneNo->setGeometry(QRect(120, 160, 251, 31));
        txtPhoneNo->setFont(font1);
        btnReset = new QPushButton(EditUser);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(240, 440, 75, 31));
        btnReset->setFont(font);

        retranslateUi(EditUser);

        QMetaObject::connectSlotsByName(EditUser);
    } // setupUi

    void retranslateUi(QDialog *EditUser)
    {
        EditUser->setWindowTitle(QCoreApplication::translate("EditUser", "Edit User", nullptr));
        btnEdit->setText(QCoreApplication::translate("EditUser", "Edit", nullptr));
        FullName->setText(QCoreApplication::translate("EditUser", "Full Name", nullptr));
        txtFullName->setText(QString());
        txtUsername->setText(QString());
        Username->setText(QCoreApplication::translate("EditUser", "Username", nullptr));
        DOP->setText(QCoreApplication::translate("EditUser", "Phone No", nullptr));
        txtEmailId->setText(QString());
        EmailId->setText(QCoreApplication::translate("EditUser", "Email Id", nullptr));
        txtAddress->setText(QString());
        Address->setText(QCoreApplication::translate("EditUser", "Address", nullptr));
        txtPassword->setText(QString());
        Password->setText(QCoreApplication::translate("EditUser", "Password", nullptr));
        Comments->setText(QCoreApplication::translate("EditUser", "Comments", nullptr));
        txtComments->setText(QString());
        txtPhoneNo->setText(QString());
        btnReset->setText(QCoreApplication::translate("EditUser", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditUser: public Ui_EditUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H
