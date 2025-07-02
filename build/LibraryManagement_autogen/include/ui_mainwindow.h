/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *addBook;
    QAction *editBook;
    QAction *searchBook;
    QAction *deleteBook;
    QAction *printBook;
    QAction *addUser;
    QAction *editUser;
    QAction *searchUser;
    QAction *deleteUser;
    QAction *actionPrint_2;
    QAction *issueBook;
    QAction *actionReturn_Book;
    QAction *actionEdit_3;
    QAction *actionAdd_3;
    QAction *actionEdit_4;
    QAction *actionSearch_3;
    QAction *actionDelete_3;
    QAction *actionPrint_3;
    QAction *print_issued_books;
    QAction *export_as_csv_issued_books;
    QAction *print_overdue_books;
    QAction *export_as_csv_overdue_books;
    QAction *actionPrint_7;
    QAction *actionExport_as_csv_5;
    QAction *print_by_Id;
    QAction *print_by_author;
    QAction *print_by_book;
    QAction *csv_by_Id;
    QAction *csv_by_authorName;
    QAction *csv_by_bookName;
    QAction *actionBy_Id;
    QAction *byId;
    QAction *actionBy_Book;
    QAction *printUsersById;
    QAction *printUsersByName;
    QAction *csvExportUsersById;
    QAction *csvExportUsersByName;
    QAction *actionUser_Feedback;
    QAction *actionUser_Fine_Payment;
    QAction *actionBackup_Database;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QMenu *Books;
    QMenu *Users;
    QMenu *Transations;
    QMenu *Records;
    QMenu *menuBooks;
    QMenu *menuPrint;
    QMenu *menuExport_as_csv;
    QMenu *menuUsers;
    QMenu *menuPrint_2;
    QMenu *menuExport_as_csv_2;
    QMenu *menuIssued_Books;
    QMenu *menuOverdue_Books;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(815, 535);
        MainWindow->setMinimumSize(QSize(815, 535));
        MainWindow->setMaximumSize(QSize(825, 575));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        addBook = new QAction(MainWindow);
        addBook->setObjectName("addBook");
        editBook = new QAction(MainWindow);
        editBook->setObjectName("editBook");
        searchBook = new QAction(MainWindow);
        searchBook->setObjectName("searchBook");
        deleteBook = new QAction(MainWindow);
        deleteBook->setObjectName("deleteBook");
        printBook = new QAction(MainWindow);
        printBook->setObjectName("printBook");
        addUser = new QAction(MainWindow);
        addUser->setObjectName("addUser");
        editUser = new QAction(MainWindow);
        editUser->setObjectName("editUser");
        searchUser = new QAction(MainWindow);
        searchUser->setObjectName("searchUser");
        deleteUser = new QAction(MainWindow);
        deleteUser->setObjectName("deleteUser");
        actionPrint_2 = new QAction(MainWindow);
        actionPrint_2->setObjectName("actionPrint_2");
        issueBook = new QAction(MainWindow);
        issueBook->setObjectName("issueBook");
        actionReturn_Book = new QAction(MainWindow);
        actionReturn_Book->setObjectName("actionReturn_Book");
        actionEdit_3 = new QAction(MainWindow);
        actionEdit_3->setObjectName("actionEdit_3");
        actionAdd_3 = new QAction(MainWindow);
        actionAdd_3->setObjectName("actionAdd_3");
        actionEdit_4 = new QAction(MainWindow);
        actionEdit_4->setObjectName("actionEdit_4");
        actionSearch_3 = new QAction(MainWindow);
        actionSearch_3->setObjectName("actionSearch_3");
        actionDelete_3 = new QAction(MainWindow);
        actionDelete_3->setObjectName("actionDelete_3");
        actionPrint_3 = new QAction(MainWindow);
        actionPrint_3->setObjectName("actionPrint_3");
        print_issued_books = new QAction(MainWindow);
        print_issued_books->setObjectName("print_issued_books");
        export_as_csv_issued_books = new QAction(MainWindow);
        export_as_csv_issued_books->setObjectName("export_as_csv_issued_books");
        print_overdue_books = new QAction(MainWindow);
        print_overdue_books->setObjectName("print_overdue_books");
        export_as_csv_overdue_books = new QAction(MainWindow);
        export_as_csv_overdue_books->setObjectName("export_as_csv_overdue_books");
        actionPrint_7 = new QAction(MainWindow);
        actionPrint_7->setObjectName("actionPrint_7");
        actionExport_as_csv_5 = new QAction(MainWindow);
        actionExport_as_csv_5->setObjectName("actionExport_as_csv_5");
        print_by_Id = new QAction(MainWindow);
        print_by_Id->setObjectName("print_by_Id");
        print_by_author = new QAction(MainWindow);
        print_by_author->setObjectName("print_by_author");
        print_by_book = new QAction(MainWindow);
        print_by_book->setObjectName("print_by_book");
        csv_by_Id = new QAction(MainWindow);
        csv_by_Id->setObjectName("csv_by_Id");
        csv_by_authorName = new QAction(MainWindow);
        csv_by_authorName->setObjectName("csv_by_authorName");
        csv_by_bookName = new QAction(MainWindow);
        csv_by_bookName->setObjectName("csv_by_bookName");
        actionBy_Id = new QAction(MainWindow);
        actionBy_Id->setObjectName("actionBy_Id");
        byId = new QAction(MainWindow);
        byId->setObjectName("byId");
        actionBy_Book = new QAction(MainWindow);
        actionBy_Book->setObjectName("actionBy_Book");
        printUsersById = new QAction(MainWindow);
        printUsersById->setObjectName("printUsersById");
        printUsersByName = new QAction(MainWindow);
        printUsersByName->setObjectName("printUsersByName");
        csvExportUsersById = new QAction(MainWindow);
        csvExportUsersById->setObjectName("csvExportUsersById");
        csvExportUsersByName = new QAction(MainWindow);
        csvExportUsersByName->setObjectName("csvExportUsersByName");
        actionUser_Feedback = new QAction(MainWindow);
        actionUser_Feedback->setObjectName("actionUser_Feedback");
        actionUser_Fine_Payment = new QAction(MainWindow);
        actionUser_Fine_Payment->setObjectName("actionUser_Fine_Payment");
        actionBackup_Database = new QAction(MainWindow);
        actionBackup_Database->setObjectName("actionBackup_Database");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(815, 549));
        centralwidget->setMaximumSize(QSize(825, 549));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 80, 531, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    background-color: #292929;\n"
"    font-family: \"Noto Sans\";\n"
"    font-size: 35px\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 240, 140, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #292929;\n"
"    border-radius: 5px;\n"
"    font-family: \"Noto Sans\";\n"
"    color: white;\n"
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
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 310, 140, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #292929;\n"
"    border-radius: 5px;\n"
"    font-family: \"Noto Sans\";\n"
"    color: white;\n"
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
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(330, 380, 140, 40));
        quitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #292929;\n"
"    border-radius: 5px;\n"
"    font-family: \"Noto Sans\";\n"
"    color: white;\n"
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 815, 34));
        menubar->setStyleSheet(QString::fromUtf8("QMenu {\n"
"    background-color: #292929; /* sets background of the menu */\n"
"}\n"
"\n"
" QMenu::item{\n"
"     background-color: #292929;\n"
"     color: white;\n"
"     font-family: \"Noto Sans\";\n"
"	 font-size: 16px;\n"
"     padding: 2px 25px 2px 10px;\n"
"     border: 1px solid transparent; /* reserve space for selection border */\n"
"     spacing: 20px;\n"
" }\n"
"\n"
"QMenu::item:selected { \n"
" 	 background-color: #2F2F2F;\n"
"}\n"
"\n"
"QMenuBar{\n"
"	background-color: #292929;\n"
"    color: white;\n"
"	spacing: 8px;\n"
"    font-size: 15px;\n"
"    padding: 5px;\n"
"    font-family: \"Noto Sans\"\n"
"}\n"
"\n"
"QMenuBar:selected{\n"
"    background-color: #2F2F2F;\n"
"}\n"
"\n"
"QMenuBar::item:pressed{\n"
"    background-color: #232323;\n"
"}\n"
""));
        Books = new QMenu(menubar);
        Books->setObjectName("Books");
        Books->setStyleSheet(QString::fromUtf8(""));
        Users = new QMenu(menubar);
        Users->setObjectName("Users");
        Transations = new QMenu(menubar);
        Transations->setObjectName("Transations");
        Records = new QMenu(menubar);
        Records->setObjectName("Records");
        menuBooks = new QMenu(Records);
        menuBooks->setObjectName("menuBooks");
        menuPrint = new QMenu(menuBooks);
        menuPrint->setObjectName("menuPrint");
        menuExport_as_csv = new QMenu(menuBooks);
        menuExport_as_csv->setObjectName("menuExport_as_csv");
        menuUsers = new QMenu(Records);
        menuUsers->setObjectName("menuUsers");
        menuPrint_2 = new QMenu(menuUsers);
        menuPrint_2->setObjectName("menuPrint_2");
        menuExport_as_csv_2 = new QMenu(menuUsers);
        menuExport_as_csv_2->setObjectName("menuExport_as_csv_2");
        menuIssued_Books = new QMenu(Records);
        menuIssued_Books->setObjectName("menuIssued_Books");
        menuOverdue_Books = new QMenu(Records);
        menuOverdue_Books->setObjectName("menuOverdue_Books");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(Books->menuAction());
        menubar->addAction(Users->menuAction());
        menubar->addAction(Transations->menuAction());
        menubar->addAction(Records->menuAction());
        Books->addAction(addBook);
        Books->addAction(editBook);
        Books->addAction(searchBook);
        Books->addAction(deleteBook);
        Users->addAction(addUser);
        Users->addAction(editUser);
        Users->addAction(searchUser);
        Users->addAction(deleteUser);
        Users->addAction(actionUser_Feedback);
        Users->addAction(actionUser_Fine_Payment);
        Transations->addAction(issueBook);
        Transations->addAction(actionReturn_Book);
        Transations->addAction(actionEdit_3);
        Records->addAction(menuBooks->menuAction());
        Records->addAction(menuUsers->menuAction());
        Records->addAction(menuIssued_Books->menuAction());
        Records->addAction(menuOverdue_Books->menuAction());
        Records->addAction(actionBackup_Database);
        menuBooks->addAction(menuPrint->menuAction());
        menuBooks->addAction(menuExport_as_csv->menuAction());
        menuPrint->addAction(print_by_Id);
        menuPrint->addAction(print_by_author);
        menuPrint->addAction(print_by_book);
        menuExport_as_csv->addAction(csv_by_Id);
        menuExport_as_csv->addAction(csv_by_authorName);
        menuExport_as_csv->addAction(csv_by_bookName);
        menuUsers->addAction(menuPrint_2->menuAction());
        menuUsers->addAction(menuExport_as_csv_2->menuAction());
        menuPrint_2->addAction(printUsersById);
        menuPrint_2->addAction(printUsersByName);
        menuExport_as_csv_2->addAction(csvExportUsersById);
        menuExport_as_csv_2->addAction(csvExportUsersByName);
        menuIssued_Books->addAction(print_issued_books);
        menuIssued_Books->addAction(export_as_csv_issued_books);
        menuOverdue_Books->addAction(print_overdue_books);
        menuOverdue_Books->addAction(export_as_csv_overdue_books);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Library Management System", nullptr));
        addBook->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        editBook->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        searchBook->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        deleteBook->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        printBook->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        addUser->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        editUser->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        searchUser->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        deleteUser->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionPrint_2->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        issueBook->setText(QCoreApplication::translate("MainWindow", "Issue Book", nullptr));
        actionReturn_Book->setText(QCoreApplication::translate("MainWindow", "Return Book", nullptr));
        actionEdit_3->setText(QCoreApplication::translate("MainWindow", "Edit ", nullptr));
        actionAdd_3->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionEdit_4->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        actionSearch_3->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        actionDelete_3->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionPrint_3->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        print_issued_books->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        export_as_csv_issued_books->setText(QCoreApplication::translate("MainWindow", "Export as csv", nullptr));
        print_overdue_books->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        export_as_csv_overdue_books->setText(QCoreApplication::translate("MainWindow", "Export as csv", nullptr));
        actionPrint_7->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionExport_as_csv_5->setText(QCoreApplication::translate("MainWindow", "Export as csv", nullptr));
        print_by_Id->setText(QCoreApplication::translate("MainWindow", "By ID", nullptr));
        print_by_author->setText(QCoreApplication::translate("MainWindow", "By Author Name", nullptr));
        print_by_book->setText(QCoreApplication::translate("MainWindow", "By Book Name", nullptr));
        csv_by_Id->setText(QCoreApplication::translate("MainWindow", "By ID", nullptr));
        csv_by_authorName->setText(QCoreApplication::translate("MainWindow", "By Author Name", nullptr));
        csv_by_bookName->setText(QCoreApplication::translate("MainWindow", "By Book Name", nullptr));
        actionBy_Id->setText(QCoreApplication::translate("MainWindow", "By ID", nullptr));
        byId->setText(QCoreApplication::translate("MainWindow", "By Author Name", nullptr));
        actionBy_Book->setText(QCoreApplication::translate("MainWindow", " By Book Name", nullptr));
        printUsersById->setText(QCoreApplication::translate("MainWindow", "By ID", nullptr));
        printUsersByName->setText(QCoreApplication::translate("MainWindow", "By Name", nullptr));
        csvExportUsersById->setText(QCoreApplication::translate("MainWindow", "By ID", nullptr));
        csvExportUsersByName->setText(QCoreApplication::translate("MainWindow", "By Name", nullptr));
        actionUser_Feedback->setText(QCoreApplication::translate("MainWindow", "User Feedback", nullptr));
        actionUser_Fine_Payment->setText(QCoreApplication::translate("MainWindow", "Fine Payment", nullptr));
        actionBackup_Database->setText(QCoreApplication::translate("MainWindow", "Backup Database", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Library Management System", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Issue Book", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Return Book", nullptr));
        quitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        Books->setTitle(QCoreApplication::translate("MainWindow", "Books", nullptr));
        Users->setTitle(QCoreApplication::translate("MainWindow", "Users", nullptr));
        Transations->setTitle(QCoreApplication::translate("MainWindow", "Transations", nullptr));
        Records->setTitle(QCoreApplication::translate("MainWindow", "Records", nullptr));
        menuBooks->setTitle(QCoreApplication::translate("MainWindow", "Books", nullptr));
        menuPrint->setTitle(QCoreApplication::translate("MainWindow", "Print", nullptr));
        menuExport_as_csv->setTitle(QCoreApplication::translate("MainWindow", "Export as csv", nullptr));
        menuUsers->setTitle(QCoreApplication::translate("MainWindow", "Users", nullptr));
        menuPrint_2->setTitle(QCoreApplication::translate("MainWindow", "Print", nullptr));
        menuExport_as_csv_2->setTitle(QCoreApplication::translate("MainWindow", "Export as csv", nullptr));
        menuIssued_Books->setTitle(QCoreApplication::translate("MainWindow", "Issued Books", nullptr));
        menuOverdue_Books->setTitle(QCoreApplication::translate("MainWindow", "Overdue Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
