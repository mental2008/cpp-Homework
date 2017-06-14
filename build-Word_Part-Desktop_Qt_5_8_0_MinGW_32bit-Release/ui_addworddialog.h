/********************************************************************************
** Form generated from reading UI file 'addworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDDIALOG_H
#define UI_ADDWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddWordDialog
{
public:
    QCheckBox *nounCheck;
    QCheckBox *verbCheck;
    QLineEdit *verbInput;
    QLineEdit *nounInput;
    QCheckBox *adjectiveCheck;
    QCheckBox *adverbCheck;
    QLineEdit *adjectiveInput;
    QLineEdit *adverbInput;
    QLabel *wordLabel;
    QLineEdit *wordInput;
    QPushButton *acceptButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddWordDialog)
    {
        if (AddWordDialog->objectName().isEmpty())
            AddWordDialog->setObjectName(QStringLiteral("AddWordDialog"));
        AddWordDialog->resize(341, 250);
        AddWordDialog->setMinimumSize(QSize(341, 250));
        AddWordDialog->setMaximumSize(QSize(341, 250));
        AddWordDialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 238, 176);"));
        nounCheck = new QCheckBox(AddWordDialog);
        nounCheck->setObjectName(QStringLiteral("nounCheck"));
        nounCheck->setGeometry(QRect(40, 70, 51, 41));
        nounCheck->setLayoutDirection(Qt::RightToLeft);
        nounCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        verbCheck = new QCheckBox(AddWordDialog);
        verbCheck->setObjectName(QStringLiteral("verbCheck"));
        verbCheck->setGeometry(QRect(40, 110, 51, 41));
        verbCheck->setLayoutDirection(Qt::RightToLeft);
        verbCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        verbInput = new QLineEdit(AddWordDialog);
        verbInput->setObjectName(QStringLiteral("verbInput"));
        verbInput->setEnabled(false);
        verbInput->setGeometry(QRect(110, 120, 113, 21));
        nounInput = new QLineEdit(AddWordDialog);
        nounInput->setObjectName(QStringLiteral("nounInput"));
        nounInput->setEnabled(false);
        nounInput->setGeometry(QRect(110, 80, 113, 21));
        adjectiveCheck = new QCheckBox(AddWordDialog);
        adjectiveCheck->setObjectName(QStringLiteral("adjectiveCheck"));
        adjectiveCheck->setGeometry(QRect(30, 150, 61, 41));
        adjectiveCheck->setLayoutDirection(Qt::RightToLeft);
        adjectiveCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        adverbCheck = new QCheckBox(AddWordDialog);
        adverbCheck->setObjectName(QStringLiteral("adverbCheck"));
        adverbCheck->setGeometry(QRect(20, 190, 71, 41));
        adverbCheck->setLayoutDirection(Qt::RightToLeft);
        adverbCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        adjectiveInput = new QLineEdit(AddWordDialog);
        adjectiveInput->setObjectName(QStringLiteral("adjectiveInput"));
        adjectiveInput->setEnabled(false);
        adjectiveInput->setGeometry(QRect(110, 160, 113, 21));
        adverbInput = new QLineEdit(AddWordDialog);
        adverbInput->setObjectName(QStringLiteral("adverbInput"));
        adverbInput->setEnabled(false);
        adverbInput->setGeometry(QRect(110, 200, 113, 21));
        wordLabel = new QLabel(AddWordDialog);
        wordLabel->setObjectName(QStringLiteral("wordLabel"));
        wordLabel->setGeometry(QRect(20, 30, 81, 31));
        wordLabel->setStyleSheet(QStringLiteral("font: 16pt \"Arial\";"));
        wordInput = new QLineEdit(AddWordDialog);
        wordInput->setObjectName(QStringLiteral("wordInput"));
        wordInput->setGeometry(QRect(110, 30, 113, 31));
        wordInput->setStyleSheet(QStringLiteral("font: 11pt \"Arial\";"));
        acceptButton = new QPushButton(AddWordDialog);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(260, 60, 51, 51));
        acceptButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/acceptPicture.png);"));
        cancelButton = new QPushButton(AddWordDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(260, 140, 51, 51));
        cancelButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/cancelPicture.png);"));

        retranslateUi(AddWordDialog);

        QMetaObject::connectSlotsByName(AddWordDialog);
    } // setupUi

    void retranslateUi(QDialog *AddWordDialog)
    {
        AddWordDialog->setWindowTitle(QApplication::translate("AddWordDialog", "Dialog", Q_NULLPTR));
        nounCheck->setText(QApplication::translate("AddWordDialog", "n.", Q_NULLPTR));
        verbCheck->setText(QApplication::translate("AddWordDialog", "v.", Q_NULLPTR));
        adjectiveCheck->setText(QApplication::translate("AddWordDialog", "adj.", Q_NULLPTR));
        adverbCheck->setText(QApplication::translate("AddWordDialog", "adv.", Q_NULLPTR));
        wordLabel->setText(QApplication::translate("AddWordDialog", "Word:", Q_NULLPTR));
        wordInput->setText(QString());
        acceptButton->setText(QString());
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddWordDialog: public Ui_AddWordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDDIALOG_H
