/********************************************************************************
** Form generated from reading UI file 'changeworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEWORDDIALOG_H
#define UI_CHANGEWORDDIALOG_H

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

class Ui_ChangeWordDialog
{
public:
    QLineEdit *wordInput;
    QPushButton *acceptButton;
    QLineEdit *nounInput;
    QCheckBox *nounCheck;
    QCheckBox *adjectiveCheck;
    QCheckBox *verbCheck;
    QCheckBox *adverbCheck;
    QPushButton *cancelButton;
    QLabel *wordLabel;
    QLineEdit *adjectiveInput;
    QLineEdit *verbInput;
    QLineEdit *adverbInput;

    void setupUi(QDialog *ChangeWordDialog)
    {
        if (ChangeWordDialog->objectName().isEmpty())
            ChangeWordDialog->setObjectName(QStringLiteral("ChangeWordDialog"));
        ChangeWordDialog->resize(341, 250);
        ChangeWordDialog->setMinimumSize(QSize(341, 250));
        ChangeWordDialog->setMaximumSize(QSize(341, 250));
        ChangeWordDialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 238, 176);"));
        wordInput = new QLineEdit(ChangeWordDialog);
        wordInput->setObjectName(QStringLiteral("wordInput"));
        wordInput->setEnabled(false);
        wordInput->setGeometry(QRect(110, 30, 113, 31));
        wordInput->setStyleSheet(QStringLiteral("font: 11pt \"Arial\";"));
        acceptButton = new QPushButton(ChangeWordDialog);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(260, 60, 51, 51));
        acceptButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/acceptPicture.png);"));
        nounInput = new QLineEdit(ChangeWordDialog);
        nounInput->setObjectName(QStringLiteral("nounInput"));
        nounInput->setEnabled(false);
        nounInput->setGeometry(QRect(110, 80, 113, 21));
        nounCheck = new QCheckBox(ChangeWordDialog);
        nounCheck->setObjectName(QStringLiteral("nounCheck"));
        nounCheck->setEnabled(true);
        nounCheck->setGeometry(QRect(40, 70, 51, 41));
        nounCheck->setLayoutDirection(Qt::RightToLeft);
        nounCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        nounCheck->setCheckable(true);
        nounCheck->setChecked(false);
        adjectiveCheck = new QCheckBox(ChangeWordDialog);
        adjectiveCheck->setObjectName(QStringLiteral("adjectiveCheck"));
        adjectiveCheck->setGeometry(QRect(30, 150, 61, 41));
        adjectiveCheck->setLayoutDirection(Qt::RightToLeft);
        adjectiveCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        verbCheck = new QCheckBox(ChangeWordDialog);
        verbCheck->setObjectName(QStringLiteral("verbCheck"));
        verbCheck->setGeometry(QRect(40, 110, 51, 41));
        verbCheck->setLayoutDirection(Qt::RightToLeft);
        verbCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        adverbCheck = new QCheckBox(ChangeWordDialog);
        adverbCheck->setObjectName(QStringLiteral("adverbCheck"));
        adverbCheck->setGeometry(QRect(20, 190, 71, 41));
        adverbCheck->setLayoutDirection(Qt::RightToLeft);
        adverbCheck->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        cancelButton = new QPushButton(ChangeWordDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(260, 140, 51, 51));
        cancelButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/cancelPicture.png);"));
        wordLabel = new QLabel(ChangeWordDialog);
        wordLabel->setObjectName(QStringLiteral("wordLabel"));
        wordLabel->setGeometry(QRect(20, 30, 81, 31));
        wordLabel->setStyleSheet(QStringLiteral("font: 16pt \"Arial\";"));
        adjectiveInput = new QLineEdit(ChangeWordDialog);
        adjectiveInput->setObjectName(QStringLiteral("adjectiveInput"));
        adjectiveInput->setEnabled(false);
        adjectiveInput->setGeometry(QRect(110, 160, 113, 21));
        verbInput = new QLineEdit(ChangeWordDialog);
        verbInput->setObjectName(QStringLiteral("verbInput"));
        verbInput->setEnabled(false);
        verbInput->setGeometry(QRect(110, 120, 113, 21));
        adverbInput = new QLineEdit(ChangeWordDialog);
        adverbInput->setObjectName(QStringLiteral("adverbInput"));
        adverbInput->setEnabled(false);
        adverbInput->setGeometry(QRect(110, 200, 113, 21));

        retranslateUi(ChangeWordDialog);

        QMetaObject::connectSlotsByName(ChangeWordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeWordDialog)
    {
        ChangeWordDialog->setWindowTitle(QApplication::translate("ChangeWordDialog", "Dialog", Q_NULLPTR));
        wordInput->setText(QString());
        acceptButton->setText(QString());
        nounCheck->setText(QApplication::translate("ChangeWordDialog", "n.", Q_NULLPTR));
        adjectiveCheck->setText(QApplication::translate("ChangeWordDialog", "adj.", Q_NULLPTR));
        verbCheck->setText(QApplication::translate("ChangeWordDialog", "v.", Q_NULLPTR));
        adverbCheck->setText(QApplication::translate("ChangeWordDialog", "adv.", Q_NULLPTR));
        cancelButton->setText(QString());
        wordLabel->setText(QApplication::translate("ChangeWordDialog", "Word:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeWordDialog: public Ui_ChangeWordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEWORDDIALOG_H
