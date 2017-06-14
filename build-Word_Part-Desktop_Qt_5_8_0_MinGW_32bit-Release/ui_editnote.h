/********************************************************************************
** Form generated from reading UI file 'editnote.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITNOTE_H
#define UI_EDITNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EditNote
{
public:
    QComboBox *select;
    QPushButton *pushButtonEdit;
    QDateEdit *dateEdit;
    QTextEdit *textEdit;
    QPushButton *pushButtonSave;
    QLabel *labelTime;
    QLabel *labelEvent;

    void setupUi(QDialog *EditNote)
    {
        if (EditNote->objectName().isEmpty())
            EditNote->setObjectName(QStringLiteral("EditNote"));
        EditNote->resize(400, 300);
        EditNote->setMinimumSize(QSize(400, 300));
        EditNote->setMaximumSize(QSize(400, 300));
        select = new QComboBox(EditNote);
        select->setObjectName(QStringLiteral("select"));
        select->setGeometry(QRect(10, 20, 291, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        select->setFont(font);
        pushButtonEdit = new QPushButton(EditNote);
        pushButtonEdit->setObjectName(QStringLiteral("pushButtonEdit"));
        pushButtonEdit->setGeometry(QRect(324, 30, 51, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        pushButtonEdit->setFont(font1);
        dateEdit = new QDateEdit(EditNote);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(80, 80, 110, 22));
        textEdit = new QTextEdit(EditNote);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 120, 261, 121));
        pushButtonSave = new QPushButton(EditNote);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(164, 260, 51, 23));
        pushButtonSave->setFont(font1);
        labelTime = new QLabel(EditNote);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(10, 80, 51, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        labelTime->setFont(font2);
        labelEvent = new QLabel(EditNote);
        labelEvent->setObjectName(QStringLiteral("labelEvent"));
        labelEvent->setGeometry(QRect(10, 110, 54, 20));
        labelEvent->setFont(font2);

        retranslateUi(EditNote);

        QMetaObject::connectSlotsByName(EditNote);
    } // setupUi

    void retranslateUi(QDialog *EditNote)
    {
        EditNote->setWindowTitle(QApplication::translate("EditNote", "Dialog", Q_NULLPTR));
        pushButtonEdit->setText(QApplication::translate("EditNote", "Edit", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("EditNote", "Save", Q_NULLPTR));
        labelTime->setText(QApplication::translate("EditNote", "Time:", Q_NULLPTR));
        labelEvent->setText(QApplication::translate("EditNote", "Event:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditNote: public Ui_EditNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITNOTE_H
