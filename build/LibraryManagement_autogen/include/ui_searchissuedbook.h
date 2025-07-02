/********************************************************************************
** Form generated from reading UI file 'searchissuedbook.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHISSUEDBOOK_H
#define UI_SEARCHISSUEDBOOK_H

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

class Ui_SearchIssuedBook
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtUsername;
    QLineEdit *txtAuthor1Name;
    QLineEdit *txtBookName;
    QLineEdit *txtAccessNo;
    QPushButton *searchButton;
    QTableView *bookSearchTable;

    void setupUi(QMainWindow *SearchIssuedBook)
    {
        if (SearchIssuedBook->objectName().isEmpty())
            SearchIssuedBook->setObjectName("SearchIssuedBook");
        SearchIssuedBook->resize(1000, 650);
        SearchIssuedBook->setMinimumSize(QSize(1000, 650));
        SearchIssuedBook->setMaximumSize(QSize(1000, 650));
        SearchIssuedBook->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
"    font-family: \"Noto Sans\";\n"
"	color: \"white\";\n"
"}\n"
"\n"
"QTableView::item:hover{\n"
"	background-color: #2F2F2F\n"
"}\n"
"\n"
"QTableView"
                        "::item:selected{\n"
"	background-color: #232323;\n"
"}\n"
"\n"
"\n"
"QHeaderView{\n"
"	background: #292929;\n"
"	gridline-color: \"white\";\n"
"	color: \"white\"\n"
"}"));
        centralwidget = new QWidget(SearchIssuedBook);
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
        txtUsername = new QLineEdit(centralwidget);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(650, 80, 315, 28));
        txtAuthor1Name = new QLineEdit(centralwidget);
        txtAuthor1Name->setObjectName("txtAuthor1Name");
        txtAuthor1Name->setGeometry(QRect(150, 80, 325, 28));
        txtBookName = new QLineEdit(centralwidget);
        txtBookName->setObjectName("txtBookName");
        txtBookName->setGeometry(QRect(650, 20, 315, 28));
        txtAccessNo = new QLineEdit(centralwidget);
        txtAccessNo->setObjectName("txtAccessNo");
        txtAccessNo->setGeometry(QRect(150, 20, 325, 28));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(440, 130, 106, 30));
        bookSearchTable = new QTableView(centralwidget);
        bookSearchTable->setObjectName("bookSearchTable");
        bookSearchTable->setGeometry(QRect(20, 180, 961, 451));
        bookSearchTable->horizontalHeader()->setDefaultSectionSize(150);
        bookSearchTable->verticalHeader()->setDefaultSectionSize(46);
        SearchIssuedBook->setCentralWidget(centralwidget);

        retranslateUi(SearchIssuedBook);

        QMetaObject::connectSlotsByName(SearchIssuedBook);
    } // setupUi

    void retranslateUi(QMainWindow *SearchIssuedBook)
    {
        SearchIssuedBook->setWindowTitle(QCoreApplication::translate("SearchIssuedBook", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SearchIssuedBook", "Access No", nullptr));
        label_2->setText(QCoreApplication::translate("SearchIssuedBook", "Book Name", nullptr));
        label_3->setText(QCoreApplication::translate("SearchIssuedBook", "Author1 Name", nullptr));
        label_4->setText(QCoreApplication::translate("SearchIssuedBook", "Username", nullptr));
        searchButton->setText(QCoreApplication::translate("SearchIssuedBook", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchIssuedBook: public Ui_SearchIssuedBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHISSUEDBOOK_H
