/********************************************************************************
** Form generated from reading UI file 'classificationno.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSIFICATIONNO_H
#define UI_CLASSIFICATIONNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassificationNo
{
public:
    QWidget *centralwidget;
    QTableView *classificationNoTable;

    void setupUi(QMainWindow *ClassificationNo)
    {
        if (ClassificationNo->objectName().isEmpty())
            ClassificationNo->setObjectName("ClassificationNo");
        ClassificationNo->resize(770, 650);
        centralwidget = new QWidget(ClassificationNo);
        centralwidget->setObjectName("centralwidget");
        classificationNoTable = new QTableView(centralwidget);
        classificationNoTable->setObjectName("classificationNoTable");
        classificationNoTable->setGeometry(QRect(10, 10, 751, 631));
        classificationNoTable->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	background: #292929;\n"
"	gridline-color: \"white\";\n"
"	color: \"white\";\n"
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
"	color: \"white\"\n"
"}"));
        classificationNoTable->horizontalHeader()->setDefaultSectionSize(250);
        ClassificationNo->setCentralWidget(centralwidget);

        retranslateUi(ClassificationNo);

        QMetaObject::connectSlotsByName(ClassificationNo);
    } // setupUi

    void retranslateUi(QMainWindow *ClassificationNo)
    {
        ClassificationNo->setWindowTitle(QCoreApplication::translate("ClassificationNo", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassificationNo: public Ui_ClassificationNo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSIFICATIONNO_H
