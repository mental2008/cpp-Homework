/********************************************************************************
** Form generated from reading UI file 'deletenotec.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETENOTEC_H
#define UI_DELETENOTEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteNoteC
{
public:
    QComboBox *select;
    QPushButton *pushButtonDelete;

    void setupUi(QDialog *DeleteNoteC)
    {
        if (DeleteNoteC->objectName().isEmpty())
            DeleteNoteC->setObjectName(QStringLiteral("DeleteNoteC"));
        DeleteNoteC->resize(370, 160);
        DeleteNoteC->setMinimumSize(QSize(370, 160));
        DeleteNoteC->setMaximumSize(QSize(370, 160));
        DeleteNoteC->setStyleSheet(QStringLiteral(""));
        select = new QComboBox(DeleteNoteC);
        select->setObjectName(QStringLiteral("select"));
        select->setGeometry(QRect(30, 20, 301, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        select->setFont(font);
        pushButtonDelete = new QPushButton(DeleteNoteC);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(150, 110, 61, 23));
        pushButtonDelete->setMinimumSize(QSize(37, 0));
        pushButtonDelete->setMaximumSize(QSize(370, 160));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pushButtonDelete->setFont(font1);

        retranslateUi(DeleteNoteC);

        QMetaObject::connectSlotsByName(DeleteNoteC);
    } // setupUi

    void retranslateUi(QDialog *DeleteNoteC)
    {
        DeleteNoteC->setWindowTitle(QApplication::translate("DeleteNoteC", "Dialog", Q_NULLPTR));
        pushButtonDelete->setText(QApplication::translate("DeleteNoteC", "DELETE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteNoteC: public Ui_DeleteNoteC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETENOTEC_H
