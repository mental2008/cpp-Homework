/********************************************************************************
** Form generated from reading UI file 'AddNoteWindowC.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNOTEWINDOWC_H
#define UI_ADDNOTEWINDOWC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNoteWindowC
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLabel *labelTime;
    QDateEdit *dateEdit;
    QLabel *labelEvent;
    QPushButton *ButtonAdd;
    QLabel *label;

    void setupUi(QMainWindow *AddNoteWindowC)
    {
        if (AddNoteWindowC->objectName().isEmpty())
            AddNoteWindowC->setObjectName(QStringLiteral("AddNoteWindowC"));
        AddNoteWindowC->resize(370, 230);
        AddNoteWindowC->setMinimumSize(QSize(370, 230));
        AddNoteWindowC->setMaximumSize(QSize(370, 230));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        AddNoteWindowC->setFont(font);
        AddNoteWindowC->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(AddNoteWindowC);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 60, 241, 121));
        textEdit->setFont(font);
        labelTime = new QLabel(centralwidget);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(10, 30, 51, 16));
        labelTime->setFont(font);
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(70, 30, 110, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        dateEdit->setFont(font1);
        dateEdit->setCalendarPopup(true);
        labelEvent = new QLabel(centralwidget);
        labelEvent->setObjectName(QStringLiteral("labelEvent"));
        labelEvent->setGeometry(QRect(10, 60, 51, 16));
        labelEvent->setFont(font);
        ButtonAdd = new QPushButton(centralwidget);
        ButtonAdd->setObjectName(QStringLiteral("ButtonAdd"));
        ButtonAdd->setGeometry(QRect(250, 190, 51, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ButtonAdd->setFont(font2);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 190, 171, 20));
        QFont font3;
        font3.setPointSize(10);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        AddNoteWindowC->setCentralWidget(centralwidget);

        retranslateUi(AddNoteWindowC);

        QMetaObject::connectSlotsByName(AddNoteWindowC);
    } // setupUi

    void retranslateUi(QMainWindow *AddNoteWindowC)
    {
        AddNoteWindowC->setWindowTitle(QApplication::translate("AddNoteWindowC", "MainWindow", Q_NULLPTR));
        labelTime->setText(QApplication::translate("AddNoteWindowC", "Time:", Q_NULLPTR));
        labelEvent->setText(QApplication::translate("AddNoteWindowC", "Event:", Q_NULLPTR));
        ButtonAdd->setText(QApplication::translate("AddNoteWindowC", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("AddNoteWindowC", "*can not contain '$'", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNoteWindowC: public Ui_AddNoteWindowC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNOTEWINDOWC_H
