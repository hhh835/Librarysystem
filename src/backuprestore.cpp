#include "include/backuprestore.h"
#include "ui_backuprestore.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QDir>

BackupRestore::BackupRestore(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::BackupRestore)
{
    ui->setupUi(this);
}

BackupRestore::~BackupRestore()
{
    delete ui;
}

void BackupRestore::on_btnBackup_clicked()
{
    QString backupPath = QFileDialog::getSaveFileName(this, "Select Backup Location", "library_backup.sqlite3", "SQLite DB (*.sqlite3)");
    if (backupPath.isEmpty()) return;

    QFile::remove(backupPath); // remove existing backup if exists
    if (QFile::copy("data/library.sqlite3", backupPath)) {
        QMessageBox::information(this, "Backup", "Backup created successfully.");
    }
    else {
        QMessageBox::warning(this, "Backup", "Failed to create backup.");
    }
}

void BackupRestore::on_btnRestore_clicked()
{
    QString restorePath = QFileDialog::getOpenFileName(this, "Select Backup File", "", "SQLite DB (*.sqlite3)");
    if (restorePath.isEmpty()) return;

    if (QFile::copy(restorePath, "data/library.sqlite3")) {
        QMessageBox::information(this, "Restore", "Database restored successfully.");
    }
    else {
        QMessageBox::warning(this, "Restore", "Failed to restore database.");
    }
}
