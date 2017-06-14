/********************************************************************************
** Form generated from reading UI file 'studyplaninstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYPLANINSTRUCTION_H
#define UI_STUDYPLANINSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_StudyPlanInstruction
{
public:
    QLabel *label;

    void setupUi(QDialog *StudyPlanInstruction)
    {
        if (StudyPlanInstruction->objectName().isEmpty())
            StudyPlanInstruction->setObjectName(QStringLiteral("StudyPlanInstruction"));
        StudyPlanInstruction->resize(671, 197);
        label = new QLabel(StudyPlanInstruction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 671, 201));
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/StudyPlanInstruction.JPG);"));

        retranslateUi(StudyPlanInstruction);

        QMetaObject::connectSlotsByName(StudyPlanInstruction);
    } // setupUi

    void retranslateUi(QDialog *StudyPlanInstruction)
    {
        StudyPlanInstruction->setWindowTitle(QApplication::translate("StudyPlanInstruction", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudyPlanInstruction: public Ui_StudyPlanInstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYPLANINSTRUCTION_H
