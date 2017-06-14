/********************************************************************************
** Form generated from reading UI file 'showallnotec.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLNOTEC_H
#define UI_SHOWALLNOTEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllNoteC
{
public:
    QListWidget *ListOfNote;

    void setupUi(QDialog *ShowAllNoteC)
    {
        if (ShowAllNoteC->objectName().isEmpty())
            ShowAllNoteC->setObjectName(QStringLiteral("ShowAllNoteC"));
        ShowAllNoteC->resize(552, 389);
        ShowAllNoteC->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfChores.png);"));
        ListOfNote = new QListWidget(ShowAllNoteC);
        ListOfNote->setObjectName(QStringLiteral("ListOfNote"));
        ListOfNote->setGeometry(QRect(30, 20, 491, 341));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        ListOfNote->setFont(font);
        ListOfNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfNote.png);"));

        retranslateUi(ShowAllNoteC);

        QMetaObject::connectSlotsByName(ShowAllNoteC);
    } // setupUi

    void retranslateUi(QDialog *ShowAllNoteC)
    {
        ShowAllNoteC->setWindowTitle(QApplication::translate("ShowAllNoteC", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowAllNoteC: public Ui_ShowAllNoteC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLNOTEC_H
