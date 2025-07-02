/********************************************************************************
** Form generated from reading UI file 'print.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_H
#define UI_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Print
{
public:
    QWidget *centralwidget;
    QTableView *table;

    void setupUi(QMainWindow *Print)
    {
        if (Print->objectName().isEmpty())
            Print->setObjectName("Print");
        Print->resize(1500, 1000);
        Print->setMinimumSize(QSize(1500, 1000));
        Print->setMaximumSize(QSize(1500, 1000));
        Print->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	background: #292929;\n"
"    font-family: \"Noto Sans\";\n"
"	gridline-color: \"white\";\n"
"	color: \"white\";\n"
"	text-align: \"center\"\n"
"}\n"
"\n"
"QTableView::item{\n"
"}\n"
"\n"
"QTableView::item:hover{\n"
"	background-color: #2F2F2F\n"
"}\n"
"\n"
"QTableView::item:selected{\n"
"	background-color: #232323;\n"
"}\n"
"\n"
"\n"
"QHeaderView{\n"
"	background: #292929;\n"
"	gridline-color: \"white\";\n"
"	color: \"white\";\n"
"}"));
        centralwidget = new QWidget(Print);
        centralwidget->setObjectName("centralwidget");
        table = new QTableView(centralwidget);
        table->setObjectName("table");
        table->setGeometry(QRect(0, 0, 1500, 1000));
        table->setSortingEnabled(true);
        table->horizontalHeader()->setDefaultSectionSize(150);
        table->verticalHeader()->setMinimumSectionSize(46);
        table->verticalHeader()->setDefaultSectionSize(46);
        Print->setCentralWidget(centralwidget);

        retranslateUi(Print);

        QMetaObject::connectSlotsByName(Print);
    } // setupUi

    void retranslateUi(QMainWindow *Print)
    {
        Print->setWindowTitle(QCoreApplication::translate("Print", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Print: public Ui_Print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_H
