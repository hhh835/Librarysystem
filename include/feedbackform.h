#ifndef FEEDBACKFORM_H
#define FEEDBACKFORM_H

#include <QDialog>

namespace Ui {
    class FeedbackForm;
}

class FeedbackForm : public QDialog
{
    Q_OBJECT

public:
    explicit FeedbackForm(QWidget* parent = nullptr);
    ~FeedbackForm();

private slots:
    void on_submitButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::FeedbackForm* ui;
};

#endif // FEEDBACKFORM_H
