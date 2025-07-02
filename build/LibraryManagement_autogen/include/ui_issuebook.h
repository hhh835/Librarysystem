/********************************************************************************
** Form generated from reading UI file 'issuebook.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEBOOK_H
#define UI_ISSUEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IssueBook
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtBookName;
    QLineEdit *txtUsername;
    QLineEdit *txtIssueDate;
    QLineEdit *txtComments;
    QPushButton *searchBook;
    QPushButton *searchUser;
    QLabel *label_5;
    QLineEdit *txtAuthorName;
    QPushButton *issueButton;

    void setupUi(QMainWindow *IssueBook)
    {
        if (IssueBook->objectName().isEmpty())
            IssueBook->setObjectName("IssueBook");
        IssueBook->resize(541, 380);
        IssueBook->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        centralwidget = new QWidget(IssueBook);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 111, 28));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 150, 101, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 210, 101, 28));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 270, 101, 28));
        txtBookName = new QLineEdit(centralwidget);
        txtBookName->setObjectName("txtBookName");
        txtBookName->setGeometry(QRect(170, 30, 291, 28));
        txtUsername = new QLineEdit(centralwidget);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(170, 150, 291, 28));
        txtIssueDate = new QLineEdit(centralwidget);
        txtIssueDate->setObjectName("txtIssueDate");
        txtIssueDate->setGeometry(QRect(170, 210, 331, 28));
        txtComments = new QLineEdit(centralwidget);
        txtComments->setObjectName("txtComments");
        txtComments->setGeometry(QRect(170, 270, 331, 28));
        searchBook = new QPushButton(centralwidget);
        searchBook->setObjectName("searchBook");
        searchBook->setGeometry(QRect(470, 30, 30, 30));
        searchBook->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color: white;\n"
"    font-size: 15px;\n"
"    background-color: #292929;\n"
"    border-radius: 5px;\n"
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
"}"));
        searchUser = new QPushButton(centralwidget);
        searchUser->setObjectName("searchUser");
        searchUser->setGeometry(QRect(470, 150, 31, 30));
        searchUser->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color: white;\n"
"    font-size: 15px;\n"
"    background-color: #292929;\n"
"    border-radius: 5px;\n"
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
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 90, 111, 28));
        txtAuthorName = new QLineEdit(centralwidget);
        txtAuthorName->setObjectName("txtAuthorName");
        txtAuthorName->setGeometry(QRect(170, 90, 331, 28));
        issueButton = new QPushButton(centralwidget);
        issueButton->setObjectName("issueButton");
        issueButton->setGeometry(QRect(230, 330, 106, 30));
        IssueBook->setCentralWidget(centralwidget);

        retranslateUi(IssueBook);

        QMetaObject::connectSlotsByName(IssueBook);
    } // setupUi

    void retranslateUi(QMainWindow *IssueBook)
    {
        IssueBook->setWindowTitle(QCoreApplication::translate("IssueBook", "Issue Book", nullptr));
        label->setText(QCoreApplication::translate("IssueBook", "Book Name", nullptr));
        label_2->setText(QCoreApplication::translate("IssueBook", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("IssueBook", "Issue Date", nullptr));
        label_4->setText(QCoreApplication::translate("IssueBook", "Comments", nullptr));
        searchBook->setText(QString());
        searchUser->setText(QString());
        label_5->setText(QCoreApplication::translate("IssueBook", "Author Name", nullptr));
        issueButton->setText(QCoreApplication::translate("IssueBook", "Issue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IssueBook: public Ui_IssueBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEBOOK_H
