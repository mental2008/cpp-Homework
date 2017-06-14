/********************************************************************************
** Form generated from reading UI file 'wordlistinstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDLISTINSTRUCTION_H
#define UI_WORDLISTINSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WordListInstruction
{
public:
    QLabel *label;

    void setupUi(QDialog *WordListInstruction)
    {
        if (WordListInstruction->objectName().isEmpty())
            WordListInstruction->setObjectName(QStringLiteral("WordListInstruction"));
        WordListInstruction->resize(690, 228);
        label = new QLabel(WordListInstruction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 691, 231));
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/WordListInstructions.JPG);"));

        retranslateUi(WordListInstruction);

        QMetaObject::connectSlotsByName(WordListInstruction);
    } // setupUi

    void retranslateUi(QDialog *WordListInstruction)
    {
        WordListInstruction->setWindowTitle(QApplication::translate("WordListInstruction", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WordListInstruction: public Ui_WordListInstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDLISTINSTRUCTION_H
