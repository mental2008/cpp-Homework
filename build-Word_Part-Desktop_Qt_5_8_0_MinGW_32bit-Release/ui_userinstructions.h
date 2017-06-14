/********************************************************************************
** Form generated from reading UI file 'userinstructions.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINSTRUCTIONS_H
#define UI_USERINSTRUCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_UserInstructions
{
public:
    QLabel *Picture;
    QLabel *Instructions;

    void setupUi(QDialog *UserInstructions)
    {
        if (UserInstructions->objectName().isEmpty())
            UserInstructions->setObjectName(QStringLiteral("UserInstructions"));
        UserInstructions->resize(549, 213);
        UserInstructions->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Picture = new QLabel(UserInstructions);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setGeometry(QRect(20, 50, 111, 121));
        Picture->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/LoginWindowIcon.jpg);"));
        Instructions = new QLabel(UserInstructions);
        Instructions->setObjectName(QStringLiteral("Instructions"));
        Instructions->setGeometry(QRect(150, 50, 461, 111));
        Instructions->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/UserInformation.JPG);"));

        retranslateUi(UserInstructions);

        QMetaObject::connectSlotsByName(UserInstructions);
    } // setupUi

    void retranslateUi(QDialog *UserInstructions)
    {
        UserInstructions->setWindowTitle(QApplication::translate("UserInstructions", "Dialog", Q_NULLPTR));
        Picture->setText(QString());
        Instructions->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserInstructions: public Ui_UserInstructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINSTRUCTIONS_H
