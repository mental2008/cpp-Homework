/********************************************************************************
** Form generated from reading UI file 'addnotetext.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNOTETEXT_H
#define UI_ADDNOTETEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addNoteText
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *addNoteText)
    {
        if (addNoteText->objectName().isEmpty())
            addNoteText->setObjectName(QStringLiteral("addNoteText"));
        addNoteText->resize(630, 500);
        textEdit = new QTextEdit(addNoteText);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 50, 631, 451));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        textEdit->setFont(font);
        pushButton_2 = new QPushButton(addNoteText);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 10, 35, 35));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/save.png);"));
        label = new QLabel(addNoteText);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 8, 81, 31));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(addNoteText);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 10, 211, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(13);
        lineEdit->setFont(font1);

        retranslateUi(addNoteText);

        QMetaObject::connectSlotsByName(addNoteText);
    } // setupUi

    void retranslateUi(QDialog *addNoteText)
    {
        addNoteText->setWindowTitle(QApplication::translate("addNoteText", "Dialog", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("addNoteText", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QString());
        label->setText(QApplication::translate("addNoteText", "Title", Q_NULLPTR));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addNoteText: public Ui_addNoteText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNOTETEXT_H
