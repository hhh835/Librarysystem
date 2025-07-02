/********************************************************************************
** Form generated from reading UI file 'feedbackform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACKFORM_H
#define UI_FEEDBACKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FeedbackForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *feedbackTextEdit;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FeedbackForm)
    {
        if (FeedbackForm->objectName().isEmpty())
            FeedbackForm->setObjectName("FeedbackForm");
        FeedbackForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(FeedbackForm);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FeedbackForm);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        feedbackTextEdit = new QTextEdit(FeedbackForm);
        feedbackTextEdit->setObjectName("feedbackTextEdit");

        verticalLayout->addWidget(feedbackTextEdit);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        submitButton = new QPushButton(FeedbackForm);
        submitButton->setObjectName("submitButton");

        buttonLayout->addWidget(submitButton);

        cancelButton = new QPushButton(FeedbackForm);
        cancelButton->setObjectName("cancelButton");

        buttonLayout->addWidget(cancelButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(FeedbackForm);

        QMetaObject::connectSlotsByName(FeedbackForm);
    } // setupUi

    void retranslateUi(QDialog *FeedbackForm)
    {
        FeedbackForm->setWindowTitle(QCoreApplication::translate("FeedbackForm", "User Feedback", nullptr));
        label->setText(QCoreApplication::translate("FeedbackForm", "Please enter your feedback below:", nullptr));
        submitButton->setText(QCoreApplication::translate("FeedbackForm", "Submit", nullptr));
        cancelButton->setText(QCoreApplication::translate("FeedbackForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FeedbackForm: public Ui_FeedbackForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACKFORM_H
