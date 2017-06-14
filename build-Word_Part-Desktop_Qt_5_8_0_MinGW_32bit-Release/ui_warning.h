/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Warning
{
public:
    QPushButton *pushButtonOK;
    QLabel *labelWarning;

    void setupUi(QDialog *Warning)
    {
        if (Warning->objectName().isEmpty())
            Warning->setObjectName(QStringLiteral("Warning"));
        Warning->resize(235, 141);
        Warning->setMinimumSize(QSize(235, 141));
        Warning->setMaximumSize(QSize(235, 141));
        pushButtonOK = new QPushButton(Warning);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(80, 100, 75, 23));
        labelWarning = new QLabel(Warning);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setGeometry(QRect(60, 30, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        labelWarning->setFont(font);

        retranslateUi(Warning);

        QMetaObject::connectSlotsByName(Warning);
    } // setupUi

    void retranslateUi(QDialog *Warning)
    {
        Warning->setWindowTitle(QApplication::translate("Warning", "Dialog", Q_NULLPTR));
        pushButtonOK->setText(QApplication::translate("Warning", "OK", Q_NULLPTR));
        labelWarning->setText(QApplication::translate("Warning", "Operation Wrong", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Warning: public Ui_Warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
