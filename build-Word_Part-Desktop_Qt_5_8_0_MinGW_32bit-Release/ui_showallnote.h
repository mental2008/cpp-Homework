/********************************************************************************
** Form generated from reading UI file 'showallnote.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLNOTE_H
#define UI_SHOWALLNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllNote
{
public:
    QListWidget *ListOfNote;

    void setupUi(QDialog *ShowAllNote)
    {
        if (ShowAllNote->objectName().isEmpty())
            ShowAllNote->setObjectName(QStringLiteral("ShowAllNote"));
        ShowAllNote->resize(552, 389);
        ShowAllNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfNoteWindow.png);"));
        ListOfNote = new QListWidget(ShowAllNote);
        ListOfNote->setObjectName(QStringLiteral("ListOfNote"));
        ListOfNote->setGeometry(QRect(30, 20, 491, 341));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        ListOfNote->setFont(font);
        ListOfNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfNote.png);"));

        retranslateUi(ShowAllNote);

        QMetaObject::connectSlotsByName(ShowAllNote);
    } // setupUi

    void retranslateUi(QDialog *ShowAllNote)
    {
        ShowAllNote->setWindowTitle(QApplication::translate("ShowAllNote", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowAllNote: public Ui_ShowAllNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLNOTE_H
