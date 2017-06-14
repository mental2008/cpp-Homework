/********************************************************************************
** Form generated from reading UI file 'messagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWINDOW_H
#define UI_MESSAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MessageWindow
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *MessageWindow)
    {
        if (MessageWindow->objectName().isEmpty())
            MessageWindow->setObjectName(QStringLiteral("MessageWindow"));
        MessageWindow->resize(400, 280);
        MessageWindow->setMinimumSize(QSize(400, 280));
        MessageWindow->setMaximumSize(QSize(400, 280));
        MessageWindow->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfNoteWindow.png);"));
        textBrowser = new QTextBrowser(MessageWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 380, 260));
        textBrowser->setMinimumSize(QSize(380, 260));
        textBrowser->setMaximumSize(QSize(380, 260));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfNote.png);"));

        retranslateUi(MessageWindow);

        QMetaObject::connectSlotsByName(MessageWindow);
    } // setupUi

    void retranslateUi(QDialog *MessageWindow)
    {
        MessageWindow->setWindowTitle(QApplication::translate("MessageWindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessageWindow: public Ui_MessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWINDOW_H
