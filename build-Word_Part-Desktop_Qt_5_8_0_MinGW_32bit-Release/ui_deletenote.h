/********************************************************************************
** Form generated from reading UI file 'deletenote.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETENOTE_H
#define UI_DELETENOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteNote
{
public:
    QComboBox *select;
    QPushButton *pushButtonDelete;

    void setupUi(QDialog *DeleteNote)
    {
        if (DeleteNote->objectName().isEmpty())
            DeleteNote->setObjectName(QStringLiteral("DeleteNote"));
        DeleteNote->resize(370, 160);
        DeleteNote->setMinimumSize(QSize(370, 160));
        DeleteNote->setMaximumSize(QSize(370, 160));
        DeleteNote->setStyleSheet(QStringLiteral(""));
        select = new QComboBox(DeleteNote);
        select->setObjectName(QStringLiteral("select"));
        select->setGeometry(QRect(30, 30, 301, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        select->setFont(font);
        pushButtonDelete = new QPushButton(DeleteNote);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(150, 120, 61, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pushButtonDelete->setFont(font1);

        retranslateUi(DeleteNote);

        QMetaObject::connectSlotsByName(DeleteNote);
    } // setupUi

    void retranslateUi(QDialog *DeleteNote)
    {
        DeleteNote->setWindowTitle(QApplication::translate("DeleteNote", "Dialog", Q_NULLPTR));
        pushButtonDelete->setText(QApplication::translate("DeleteNote", "DELETE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteNote: public Ui_DeleteNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETENOTE_H
