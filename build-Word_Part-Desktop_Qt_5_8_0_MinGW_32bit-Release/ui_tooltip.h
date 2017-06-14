/********************************************************************************
** Form generated from reading UI file 'tooltip.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLTIP_H
#define UI_TOOLTIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ToolTip
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ToolTip)
    {
        if (ToolTip->objectName().isEmpty())
            ToolTip->setObjectName(QStringLiteral("ToolTip"));
        ToolTip->resize(235, 114);
        ToolTip->setMinimumSize(QSize(0, 0));
        ToolTip->setMaximumSize(QSize(235, 141));
        pushButton = new QPushButton(ToolTip);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 70, 71, 23));
        label = new QLabel(ToolTip);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 30, 251, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ToolTip);

        QMetaObject::connectSlotsByName(ToolTip);
    } // setupUi

    void retranslateUi(QDialog *ToolTip)
    {
        ToolTip->setWindowTitle(QApplication::translate("ToolTip", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ToolTip", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("ToolTip", "Operation is done.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ToolTip: public Ui_ToolTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLTIP_H
