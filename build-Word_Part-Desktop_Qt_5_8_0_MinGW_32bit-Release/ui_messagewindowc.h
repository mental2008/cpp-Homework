/********************************************************************************
** Form generated from reading UI file 'messagewindowc.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWINDOWC_H
#define UI_MESSAGEWINDOWC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MessageWindowC
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *MessageWindowC)
    {
        if (MessageWindowC->objectName().isEmpty())
            MessageWindowC->setObjectName(QStringLiteral("MessageWindowC"));
        MessageWindowC->resize(400, 280);
        MessageWindowC->setMinimumSize(QSize(400, 280));
        MessageWindowC->setMaximumSize(QSize(400, 280));
        MessageWindowC->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfChores.png);"));
        textBrowser = new QTextBrowser(MessageWindowC);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 380, 260));
        textBrowser->setMinimumSize(QSize(380, 260));
        textBrowser->setMaximumSize(QSize(380, 260));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfNote.png);"));

        retranslateUi(MessageWindowC);

        QMetaObject::connectSlotsByName(MessageWindowC);
    } // setupUi

    void retranslateUi(QDialog *MessageWindowC)
    {
        MessageWindowC->setWindowTitle(QApplication::translate("MessageWindowC", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessageWindowC: public Ui_MessageWindowC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWINDOWC_H
