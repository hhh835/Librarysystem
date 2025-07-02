/********************************************************************************
** Form generated from reading UI file 'backuprestore.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUPRESTORE_H
#define UI_BACKUPRESTORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BackupRestore
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btnBackup;
    QPushButton *btnRestore;

    void setupUi(QDialog *BackupRestore)
    {
        if (BackupRestore->objectName().isEmpty())
            BackupRestore->setObjectName("BackupRestore");
        BackupRestore->resize(300, 150);
        verticalLayout = new QVBoxLayout(BackupRestore);
        verticalLayout->setObjectName("verticalLayout");
        btnBackup = new QPushButton(BackupRestore);
        btnBackup->setObjectName("btnBackup");

        verticalLayout->addWidget(btnBackup);

        btnRestore = new QPushButton(BackupRestore);
        btnRestore->setObjectName("btnRestore");

        verticalLayout->addWidget(btnRestore);


        retranslateUi(BackupRestore);

        QMetaObject::connectSlotsByName(BackupRestore);
    } // setupUi

    void retranslateUi(QDialog *BackupRestore)
    {
        BackupRestore->setWindowTitle(QCoreApplication::translate("BackupRestore", "Backup & Restore", nullptr));
        btnBackup->setText(QCoreApplication::translate("BackupRestore", "Backup Database", nullptr));
        btnRestore->setText(QCoreApplication::translate("BackupRestore", "Restore Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BackupRestore: public Ui_BackupRestore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUPRESTORE_H
