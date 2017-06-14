/********************************************************************************
** Form generated from reading UI file 'AddNoteWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNOTEWINDOW_H
#define UI_ADDNOTEWINDOW_H

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

class Ui_AddNoteWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLabel *labelTime;
    QDateEdit *dateEdit;
    QLabel *labelEvent;
    QPushButton *ButtonAdd;
    QLabel *label;

    void setupUi(QMainWindow *AddNoteWindow)
    {
        if (AddNoteWindow->objectName().isEmpty())
            AddNoteWindow->setObjectName(QStringLiteral("AddNoteWindow"));
        AddNoteWindow->resize(370, 230);
        AddNoteWindow->setMinimumSize(QSize(370, 230));
        AddNoteWindow->setMaximumSize(QSize(370, 230));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        AddNoteWindow->setFont(font);
        AddNoteWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(AddNoteWindow);
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
        label->setGeometry(QRect(70, 190, 171, 21));
        QFont font3;
        font3.setPointSize(10);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        AddNoteWindow->setCentralWidget(centralwidget);

        retranslateUi(AddNoteWindow);

        QMetaObject::connectSlotsByName(AddNoteWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddNoteWindow)
    {
        AddNoteWindow->setWindowTitle(QApplication::translate("AddNoteWindow", "MainWindow", Q_NULLPTR));
        labelTime->setText(QApplication::translate("AddNoteWindow", "Time:", Q_NULLPTR));
        labelEvent->setText(QApplication::translate("AddNoteWindow", "Event:", Q_NULLPTR));
        ButtonAdd->setText(QApplication::translate("AddNoteWindow", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("AddNoteWindow", "*can not contain '$'", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNoteWindow: public Ui_AddNoteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNOTEWINDOW_H
