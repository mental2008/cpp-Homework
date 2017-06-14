/********************************************************************************
** Form generated from reading UI file 'tooltipc.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLTIPC_H
#define UI_TOOLTIPC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ToolTipC
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ToolTipC)
    {
        if (ToolTipC->objectName().isEmpty())
            ToolTipC->setObjectName(QStringLiteral("ToolTipC"));
        ToolTipC->resize(235, 118);
        ToolTipC->setMinimumSize(QSize(0, 0));
        ToolTipC->setMaximumSize(QSize(235, 141));
        pushButton = new QPushButton(ToolTipC);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 70, 71, 23));
        label = new QLabel(ToolTipC);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, 30, 251, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ToolTipC);

        QMetaObject::connectSlotsByName(ToolTipC);
    } // setupUi

    void retranslateUi(QDialog *ToolTipC)
    {
        ToolTipC->setWindowTitle(QApplication::translate("ToolTipC", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ToolTipC", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("ToolTipC", "Operation is done.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ToolTipC: public Ui_ToolTipC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLTIPC_H
