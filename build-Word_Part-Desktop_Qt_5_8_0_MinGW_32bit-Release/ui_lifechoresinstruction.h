/********************************************************************************
** Form generated from reading UI file 'lifechoresinstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIFECHORESINSTRUCTION_H
#define UI_LIFECHORESINSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LifeChoresInstruction
{
public:
    QLabel *label;

    void setupUi(QDialog *LifeChoresInstruction)
    {
        if (LifeChoresInstruction->objectName().isEmpty())
            LifeChoresInstruction->setObjectName(QStringLiteral("LifeChoresInstruction"));
        LifeChoresInstruction->resize(670, 214);
        label = new QLabel(LifeChoresInstruction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 671, 221));
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/LifeChoresInstruction.JPG);"));

        retranslateUi(LifeChoresInstruction);

        QMetaObject::connectSlotsByName(LifeChoresInstruction);
    } // setupUi

    void retranslateUi(QDialog *LifeChoresInstruction)
    {
        LifeChoresInstruction->setWindowTitle(QApplication::translate("LifeChoresInstruction", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LifeChoresInstruction: public Ui_LifeChoresInstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIFECHORESINSTRUCTION_H
