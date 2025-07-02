#include "include/feedbackform.h"
#include "ui_feedbackform.h"
#include <QMessageBox>

FeedbackForm::FeedbackForm(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::FeedbackForm)
{
    ui->setupUi(this);
}

FeedbackForm::~FeedbackForm()
{
    delete ui;
}

void FeedbackForm::on_submitButton_clicked()
{
    QString feedback = ui->feedbackTextEdit->toPlainText().trimmed();
    if (feedback.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Feedback cannot be empty.");
        return;
    }

    // In real case, this would be saved to file or DB
    QMessageBox::information(this, "Thank you", "Feedback submitted successfully!");
    this->close();
}

void FeedbackForm::on_cancelButton_clicked()
{
    this->close();
}
