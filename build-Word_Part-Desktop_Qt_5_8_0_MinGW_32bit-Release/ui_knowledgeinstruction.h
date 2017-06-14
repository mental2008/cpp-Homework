/********************************************************************************
** Form generated from reading UI file 'knowledgeinstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KNOWLEDGEINSTRUCTION_H
#define UI_KNOWLEDGEINSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_KnowledgeInstruction
{
public:
    QLabel *label;

    void setupUi(QDialog *KnowledgeInstruction)
    {
        if (KnowledgeInstruction->objectName().isEmpty())
            KnowledgeInstruction->setObjectName(QStringLiteral("KnowledgeInstruction"));
        KnowledgeInstruction->resize(638, 177);
        label = new QLabel(KnowledgeInstruction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 641, 181));
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/KnowledgeInstruction.JPG);"));

        retranslateUi(KnowledgeInstruction);

        QMetaObject::connectSlotsByName(KnowledgeInstruction);
    } // setupUi

    void retranslateUi(QDialog *KnowledgeInstruction)
    {
        KnowledgeInstruction->setWindowTitle(QApplication::translate("KnowledgeInstruction", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KnowledgeInstruction: public Ui_KnowledgeInstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KNOWLEDGEINSTRUCTION_H
