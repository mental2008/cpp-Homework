/********************************************************************************
** Form generated from reading UI file 'abouttheauthorswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTTHEAUTHORSWINDOW_H
#define UI_ABOUTTHEAUTHORSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutTheAuthorsWindow
{
public:
    QLabel *Background;

    void setupUi(QDialog *AboutTheAuthorsWindow)
    {
        if (AboutTheAuthorsWindow->objectName().isEmpty())
            AboutTheAuthorsWindow->setObjectName(QStringLiteral("AboutTheAuthorsWindow"));
        AboutTheAuthorsWindow->resize(649, 315);
        AboutTheAuthorsWindow->setMinimumSize(QSize(649, 315));
        AboutTheAuthorsWindow->setMaximumSize(QSize(649, 315));
        Background = new QLabel(AboutTheAuthorsWindow);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(0, -10, 651, 331));
        Background->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/AboutTheTeam.JPG);"));

        retranslateUi(AboutTheAuthorsWindow);

        QMetaObject::connectSlotsByName(AboutTheAuthorsWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutTheAuthorsWindow)
    {
        AboutTheAuthorsWindow->setWindowTitle(QApplication::translate("AboutTheAuthorsWindow", "Dialog", Q_NULLPTR));
        Background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutTheAuthorsWindow: public Ui_AboutTheAuthorsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTTHEAUTHORSWINDOW_H
