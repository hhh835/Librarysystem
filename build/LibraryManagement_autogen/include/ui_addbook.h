/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QPushButton *btnAdd;
    QLabel *BookName;
    QLineEdit *txtBookName;
    QLineEdit *txtAuthor1Name;
    QLabel *Author1Name;
    QLabel *DOP;
    QLineEdit *txtEdition;
    QLabel *Edition;
    QLineEdit *txtClassificationNo;
    QLabel *ClassificationNo;
    QLineEdit *txtPages;
    QLabel *Pages;
    QLineEdit *txtAuthor2Name;
    QLabel *Author2Name;
    QLabel *ReferenceNo;
    QLineEdit *txtDateOfAcquisition;
    QLabel *Comments;
    QLineEdit *txtComments;
    QLineEdit *txtDOP;
    QPushButton *btnReset;
    QPushButton *classificationNoButton;

    void setupUi(QDialog *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName("AddBook");
        AddBook->setWindowModality(Qt::WindowModal);
        AddBook->resize(400, 513);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddBook->sizePolicy().hasHeightForWidth());
        AddBook->setSizePolicy(sizePolicy);
        AddBook->setMinimumSize(QSize(400, 421));
        AddBook->setMaximumSize(QSize(400, 600));
        AddBook->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        AddBook->setInputMethodHints(Qt::ImhExclusiveInputMask);
        btnAdd = new QPushButton(AddBook);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(80, 470, 75, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        btnAdd->setFont(font);
        btnAdd->setStyleSheet(QString::fromUtf8(""));
        BookName = new QLabel(AddBook);
        BookName->setObjectName("BookName");
        BookName->setGeometry(QRect(10, 10, 131, 31));
        BookName->setFont(font);
        BookName->setStyleSheet(QString::fromUtf8(""));
        txtBookName = new QLineEdit(AddBook);
        txtBookName->setObjectName("txtBookName");
        txtBookName->setGeometry(QRect(180, 10, 191, 31));
        QFont font1;
        font1.setPointSize(11);
        txtBookName->setFont(font1);
        txtBookName->setStyleSheet(QString::fromUtf8(""));
        txtAuthor1Name = new QLineEdit(AddBook);
        txtAuthor1Name->setObjectName("txtAuthor1Name");
        txtAuthor1Name->setGeometry(QRect(180, 60, 191, 31));
        txtAuthor1Name->setFont(font1);
        txtAuthor1Name->setStyleSheet(QString::fromUtf8(""));
        Author1Name = new QLabel(AddBook);
        Author1Name->setObjectName("Author1Name");
        Author1Name->setGeometry(QRect(10, 60, 141, 31));
        Author1Name->setFont(font);
        Author1Name->setStyleSheet(QString::fromUtf8(""));
        DOP = new QLabel(AddBook);
        DOP->setObjectName("DOP");
        DOP->setGeometry(QRect(10, 160, 165, 31));
        DOP->setFont(font);
        DOP->setStyleSheet(QString::fromUtf8(""));
        txtEdition = new QLineEdit(AddBook);
        txtEdition->setObjectName("txtEdition");
        txtEdition->setGeometry(QRect(180, 210, 191, 31));
        txtEdition->setFont(font1);
        txtEdition->setStyleSheet(QString::fromUtf8(""));
        Edition = new QLabel(AddBook);
        Edition->setObjectName("Edition");
        Edition->setGeometry(QRect(10, 210, 165, 31));
        Edition->setFont(font);
        Edition->setStyleSheet(QString::fromUtf8(""));
        txtClassificationNo = new QLineEdit(AddBook);
        txtClassificationNo->setObjectName("txtClassificationNo");
        txtClassificationNo->setGeometry(QRect(180, 260, 161, 31));
        txtClassificationNo->setFont(font1);
        txtClassificationNo->setStyleSheet(QString::fromUtf8(""));
        ClassificationNo = new QLabel(AddBook);
        ClassificationNo->setObjectName("ClassificationNo");
        ClassificationNo->setGeometry(QRect(10, 260, 165, 31));
        ClassificationNo->setFont(font);
        ClassificationNo->setStyleSheet(QString::fromUtf8(""));
        txtPages = new QLineEdit(AddBook);
        txtPages->setObjectName("txtPages");
        txtPages->setGeometry(QRect(180, 310, 191, 31));
        txtPages->setFont(font1);
        txtPages->setStyleSheet(QString::fromUtf8(""));
        Pages = new QLabel(AddBook);
        Pages->setObjectName("Pages");
        Pages->setGeometry(QRect(10, 310, 165, 31));
        Pages->setFont(font);
        Pages->setStyleSheet(QString::fromUtf8(""));
        txtAuthor2Name = new QLineEdit(AddBook);
        txtAuthor2Name->setObjectName("txtAuthor2Name");
        txtAuthor2Name->setGeometry(QRect(180, 110, 191, 31));
        txtAuthor2Name->setFont(font1);
        txtAuthor2Name->setStyleSheet(QString::fromUtf8(""));
        Author2Name = new QLabel(AddBook);
        Author2Name->setObjectName("Author2Name");
        Author2Name->setGeometry(QRect(10, 110, 165, 31));
        Author2Name->setFont(font);
        Author2Name->setStyleSheet(QString::fromUtf8(""));
        ReferenceNo = new QLabel(AddBook);
        ReferenceNo->setObjectName("ReferenceNo");
        ReferenceNo->setGeometry(QRect(10, 360, 165, 31));
        ReferenceNo->setFont(font);
        ReferenceNo->setStyleSheet(QString::fromUtf8(""));
        txtDateOfAcquisition = new QLineEdit(AddBook);
        txtDateOfAcquisition->setObjectName("txtDateOfAcquisition");
        txtDateOfAcquisition->setGeometry(QRect(180, 360, 191, 31));
        txtDateOfAcquisition->setFont(font1);
        txtDateOfAcquisition->setStyleSheet(QString::fromUtf8(""));
        Comments = new QLabel(AddBook);
        Comments->setObjectName("Comments");
        Comments->setGeometry(QRect(10, 410, 165, 31));
        Comments->setFont(font);
        Comments->setStyleSheet(QString::fromUtf8(""));
        txtComments = new QLineEdit(AddBook);
        txtComments->setObjectName("txtComments");
        txtComments->setGeometry(QRect(180, 410, 191, 31));
        txtComments->setFont(font1);
        txtComments->setStyleSheet(QString::fromUtf8(""));
        txtDOP = new QLineEdit(AddBook);
        txtDOP->setObjectName("txtDOP");
        txtDOP->setGeometry(QRect(180, 160, 191, 31));
        txtDOP->setFont(font1);
        txtDOP->setStyleSheet(QString::fromUtf8(""));
        btnReset = new QPushButton(AddBook);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(230, 470, 75, 31));
        btnReset->setFont(font);
        btnReset->setStyleSheet(QString::fromUtf8(""));
        classificationNoButton = new QPushButton(AddBook);
        classificationNoButton->setObjectName("classificationNoButton");
        classificationNoButton->setGeometry(QRect(350, 260, 31, 31));
        classificationNoButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QDialog *AddBook)
    {
        AddBook->setWindowTitle(QCoreApplication::translate("AddBook", "Add Book", nullptr));
        btnAdd->setText(QCoreApplication::translate("AddBook", "Add", nullptr));
        BookName->setText(QCoreApplication::translate("AddBook", "Book Name", nullptr));
        txtBookName->setText(QString());
        txtAuthor1Name->setText(QString());
        Author1Name->setText(QCoreApplication::translate("AddBook", "Author 1 Name", nullptr));
        DOP->setText(QCoreApplication::translate("AddBook", "Date of Publication", nullptr));
        txtEdition->setText(QString());
        Edition->setText(QCoreApplication::translate("AddBook", "Edition", nullptr));
        txtClassificationNo->setText(QString());
        ClassificationNo->setText(QCoreApplication::translate("AddBook", "Classification No.", nullptr));
        txtPages->setText(QString());
        Pages->setText(QCoreApplication::translate("AddBook", "No. of Pages", nullptr));
        txtAuthor2Name->setText(QString());
        Author2Name->setText(QCoreApplication::translate("AddBook", "Author 2 Name", nullptr));
        ReferenceNo->setText(QCoreApplication::translate("AddBook", "Date of Acquisition", nullptr));
        txtDateOfAcquisition->setText(QString());
        Comments->setText(QCoreApplication::translate("AddBook", "Comments", nullptr));
        txtComments->setText(QString());
        txtDOP->setText(QString());
        btnReset->setText(QCoreApplication::translate("AddBook", "Reset", nullptr));
        classificationNoButton->setText(QCoreApplication::translate("AddBook", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
