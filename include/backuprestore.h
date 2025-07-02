#ifndef BACKUPRESTORE_H
#define BACKUPRESTORE_H

#include <QDialog>

namespace Ui {
    class BackupRestore;
}

class BackupRestore : public QDialog
{
    Q_OBJECT

public:
    explicit BackupRestore(QWidget* parent = nullptr);
    ~BackupRestore();

private slots:
    void on_btnBackup_clicked();
    void on_btnRestore_clicked();

private:
    Ui::BackupRestore* ui;
};

#endif // BACKUPRESTORE_H
