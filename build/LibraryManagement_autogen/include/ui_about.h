/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(802, 600);
        centralwidget = new QWidget(About);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 711, 391));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        About->setCentralWidget(centralwidget);
        menubar = new QMenuBar(About);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 802, 26));
        About->setMenuBar(menubar);
        statusbar = new QStatusBar(About);
        statusbar->setObjectName("statusbar");
        About->setStatusBar(statusbar);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QMainWindow *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("About", "Designed a library management system using the QT C++ framework and MySQL. The software comprises of a menu driven GUI interface styled with the windows fluent design as its base. Its backend comprises of a SQL database which contains 4 tables: \342\200\230books\342\200\231, \342\200\230users\342\200\231, \342\200\230issued_books\342\200\231 and \342\200\230classification_numbers\342\200\231. The application offers the following functionalities", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
