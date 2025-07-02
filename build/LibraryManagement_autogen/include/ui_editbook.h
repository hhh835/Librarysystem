/********************************************************************************
** Form generated from reading UI file 'editbook.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOOK_H
#define UI_EDITBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditBook
{
public:
    QPushButton *btnEdit;
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

    void setupUi(QDialog *EditBook)
    {
        if (EditBook->objectName().isEmpty())
            EditBook->setObjectName("EditBook");
        EditBook->setWindowModality(Qt::WindowModal);
        EditBook->resize(400, 513);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditBook->sizePolicy().hasHeightForWidth());
        EditBook->setSizePolicy(sizePolicy);
        EditBook->setMinimumSize(QSize(400, 421));
        EditBook->setMaximumSize(QSize(400, 600));
        EditBook->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        EditBook->setInputMethodHints(Qt::ImhExclusiveInputMask);
        btnEdit = new QPushButton(EditBook);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(70, 470, 75, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        btnEdit->setFont(font);
        BookName = new QLabel(EditBook);
        BookName->setObjectName("BookName");
        BookName->setGeometry(QRect(10, 10, 131, 31));
        BookName->setFont(font);
        BookName->setStyleSheet(QString::fromUtf8(""));
        txtBookName = new QLineEdit(EditBook);
        txtBookName->setObjectName("txtBookName");
        txtBookName->setGeometry(QRect(180, 10, 191, 31));
        QFont font1;
        font1.setPointSize(11);
        txtBookName->setFont(font1);
        txtAuthor1Name = new QLineEdit(EditBook);
        txtAuthor1Name->setObjectName("txtAuthor1Name");
        txtAuthor1Name->setGeometry(QRect(180, 60, 191, 31));
        txtAuthor1Name->setFont(font1);
        Author1Name = new QLabel(EditBook);
        Author1Name->setObjectName("Author1Name");
        Author1Name->setGeometry(QRect(10, 60, 131, 31));
        Author1Name->setFont(font);
        DOP = new QLabel(EditBook);
        DOP->setObjectName("DOP");
        DOP->setGeometry(QRect(10, 160, 151, 31));
        DOP->setFont(font);
        txtEdition = new QLineEdit(EditBook);
        txtEdition->setObjectName("txtEdition");
        txtEdition->setGeometry(QRect(180, 210, 191, 31));
        txtEdition->setFont(font1);
        Edition = new QLabel(EditBook);
        Edition->setObjectName("Edition");
        Edition->setGeometry(QRect(10, 210, 165, 31));
        Edition->setFont(font);
        txtClassificationNo = new QLineEdit(EditBook);
        txtClassificationNo->setObjectName("txtClassificationNo");
        txtClassificationNo->setGeometry(QRect(180, 260, 191, 31));
        txtClassificationNo->setFont(font1);
        ClassificationNo = new QLabel(EditBook);
        ClassificationNo->setObjectName("ClassificationNo");
        ClassificationNo->setGeometry(QRect(10, 260, 165, 31));
        ClassificationNo->setFont(font);
        txtPages = new QLineEdit(EditBook);
        txtPages->setObjectName("txtPages");
        txtPages->setGeometry(QRect(180, 310, 191, 31));
        txtPages->setFont(font1);
        Pages = new QLabel(EditBook);
        Pages->setObjectName("Pages");
        Pages->setGeometry(QRect(10, 310, 165, 31));
        Pages->setFont(font);
        txtAuthor2Name = new QLineEdit(EditBook);
        txtAuthor2Name->setObjectName("txtAuthor2Name");
        txtAuthor2Name->setGeometry(QRect(180, 110, 191, 31));
        txtAuthor2Name->setFont(font1);
        Author2Name = new QLabel(EditBook);
        Author2Name->setObjectName("Author2Name");
        Author2Name->setGeometry(QRect(10, 110, 165, 31));
        Author2Name->setFont(font);
        ReferenceNo = new QLabel(EditBook);
        ReferenceNo->setObjectName("ReferenceNo");
        ReferenceNo->setGeometry(QRect(10, 360, 165, 31));
        ReferenceNo->setFont(font);
        txtDateOfAcquisition = new QLineEdit(EditBook);
        txtDateOfAcquisition->setObjectName("txtDateOfAcquisition");
        txtDateOfAcquisition->setGeometry(QRect(180, 360, 191, 31));
        txtDateOfAcquisition->setFont(font1);
        Comments = new QLabel(EditBook);
        Comments->setObjectName("Comments");
        Comments->setGeometry(QRect(10, 410, 165, 31));
        Comments->setFont(font);
        txtComments = new QLineEdit(EditBook);
        txtComments->setObjectName("txtComments");
        txtComments->setGeometry(QRect(180, 410, 191, 31));
        txtComments->setFont(font1);
        txtDOP = new QLineEdit(EditBook);
        txtDOP->setObjectName("txtDOP");
        txtDOP->setGeometry(QRect(180, 160, 191, 31));
        txtDOP->setFont(font1);
        btnReset = new QPushButton(EditBook);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(230, 470, 75, 31));
        btnReset->setFont(font);

        retranslateUi(EditBook);

        QMetaObject::connectSlotsByName(EditBook);
    } // setupUi

    void retranslateUi(QDialog *EditBook)
    {
        EditBook->setWindowTitle(QCoreApplication::translate("EditBook", "Edit Book", nullptr));
        btnEdit->setText(QCoreApplication::translate("EditBook", "Edit", nullptr));
        BookName->setText(QCoreApplication::translate("EditBook", "Book Name", nullptr));
        txtBookName->setText(QString());
        txtAuthor1Name->setText(QString());
        Author1Name->setText(QCoreApplication::translate("EditBook", "Author 1 Name", nullptr));
        DOP->setText(QCoreApplication::translate("EditBook", "Date of Publication", nullptr));
        txtEdition->setText(QString());
        Edition->setText(QCoreApplication::translate("EditBook", "Edition", nullptr));
        txtClassificationNo->setText(QString());
        ClassificationNo->setText(QCoreApplication::translate("EditBook", "Classification No", nullptr));
        txtPages->setText(QString());
        Pages->setText(QCoreApplication::translate("EditBook", "No. of Pages", nullptr));
        txtAuthor2Name->setText(QString());
        Author2Name->setText(QCoreApplication::translate("EditBook", "Author 2 Name", nullptr));
        ReferenceNo->setText(QCoreApplication::translate("EditBook", "Date of Acquisition", nullptr));
        txtDateOfAcquisition->setText(QString());
        Comments->setText(QCoreApplication::translate("EditBook", "Comments", nullptr));
        txtComments->setText(QString());
        txtDOP->setText(QString());
        btnReset->setText(QCoreApplication::translate("EditBook", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditBook: public Ui_EditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOOK_H
