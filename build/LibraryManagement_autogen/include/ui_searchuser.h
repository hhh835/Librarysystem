/********************************************************************************
** Form generated from reading UI file 'searchuser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHUSER_H
#define UI_SEARCHUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchUser
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtEmailId;
    QLineEdit *txtUsername;
    QLineEdit *txtFullName;
    QLineEdit *txtAccessNo;
    QPushButton *searchButton;
    QTableView *userSearchTable;

    void setupUi(QMainWindow *SearchUser)
    {
        if (SearchUser->objectName().isEmpty())
            SearchUser->setObjectName("SearchUser");
        SearchUser->resize(1000, 650);
        SearchUser->setMinimumSize(QSize(1000, 650));
        SearchUser->setMaximumSize(QSize(1000, 650));
        SearchUser->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
"\n"
"QTableView{\n"
"	background: #292929;\n"
"	gridline-color: \"white\";\n"
"	color: \"white\";\n"
"    font-family: \"Noto Sans\"\n"
"}\n"
"\n"
"QTableView::item:hover{\n"
"	background-color: #2F2F2F\n"
"}\n"
"\n"
"QTableView:"
                        ":item:selected{\n"
"	background-color: #232323;\n"
"}\n"
"\n"
"\n"
"QHeaderView{\n"
"	background: #292929;\n"
"	gridline-color: \"white\";\n"
"	color: \"white\"\n"
"}"));
        centralwidget = new QWidget(SearchUser);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 140, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(520, 20, 140, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 140, 28));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(520, 80, 140, 28));
        txtEmailId = new QLineEdit(centralwidget);
        txtEmailId->setObjectName("txtEmailId");
        txtEmailId->setGeometry(QRect(650, 80, 315, 28));
        txtUsername = new QLineEdit(centralwidget);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(150, 80, 325, 28));
        txtFullName = new QLineEdit(centralwidget);
        txtFullName->setObjectName("txtFullName");
        txtFullName->setGeometry(QRect(650, 20, 315, 28));
        txtAccessNo = new QLineEdit(centralwidget);
        txtAccessNo->setObjectName("txtAccessNo");
        txtAccessNo->setGeometry(QRect(150, 20, 325, 28));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(440, 130, 106, 30));
        userSearchTable = new QTableView(centralwidget);
        userSearchTable->setObjectName("userSearchTable");
        userSearchTable->setGeometry(QRect(20, 180, 961, 451));
        userSearchTable->horizontalHeader()->setDefaultSectionSize(150);
        userSearchTable->verticalHeader()->setDefaultSectionSize(46);
        SearchUser->setCentralWidget(centralwidget);

        retranslateUi(SearchUser);

        QMetaObject::connectSlotsByName(SearchUser);
    } // setupUi

    void retranslateUi(QMainWindow *SearchUser)
    {
        SearchUser->setWindowTitle(QCoreApplication::translate("SearchUser", "Search User", nullptr));
        label->setText(QCoreApplication::translate("SearchUser", "Access No", nullptr));
        label_2->setText(QCoreApplication::translate("SearchUser", "Full Name", nullptr));
        label_3->setText(QCoreApplication::translate("SearchUser", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("SearchUser", "Email Id", nullptr));
        searchButton->setText(QCoreApplication::translate("SearchUser", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchUser: public Ui_SearchUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHUSER_H
