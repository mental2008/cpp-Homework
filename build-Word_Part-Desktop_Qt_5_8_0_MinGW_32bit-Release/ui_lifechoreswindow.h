/********************************************************************************
** Form generated from reading UI file 'lifechoreswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIFECHORESWINDOW_H
#define UI_LIFECHORESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LifeChoresWindow
{
public:
    QWidget *centralWidget;
    QListWidget *ListOfNote;
    QPushButton *AddNote;
    QPushButton *DeleteNote;
    QPushButton *EditNote;
    QPushButton *ListAllNote;
    QPushButton *Refresh;

    void setupUi(QMainWindow *LifeChoresWindow)
    {
        if (LifeChoresWindow->objectName().isEmpty())
            LifeChoresWindow->setObjectName(QStringLiteral("LifeChoresWindow"));
        LifeChoresWindow->resize(360, 450);
        LifeChoresWindow->setMinimumSize(QSize(360, 450));
        LifeChoresWindow->setMaximumSize(QSize(360, 450));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        LifeChoresWindow->setFont(font);
        LifeChoresWindow->setAutoFillBackground(false);
        LifeChoresWindow->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfChores.png);"));
        centralWidget = new QWidget(LifeChoresWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ListOfNote = new QListWidget(centralWidget);
        ListOfNote->setObjectName(QStringLiteral("ListOfNote"));
        ListOfNote->setEnabled(true);
        ListOfNote->setGeometry(QRect(10, 10, 341, 391));
        ListOfNote->setMinimumSize(QSize(0, 0));
        ListOfNote->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        ListOfNote->setFont(font1);
        ListOfNote->setMouseTracking(false);
        ListOfNote->setAutoFillBackground(false);
        ListOfNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/BackgroundOfNote.png);"));
        ListOfNote->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        ListOfNote->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ListOfNote->setAutoScroll(true);
        ListOfNote->setProperty("showDropIndicator", QVariant(true));
        ListOfNote->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        AddNote = new QPushButton(centralWidget);
        AddNote->setObjectName(QStringLiteral("AddNote"));
        AddNote->setGeometry(QRect(200, 410, 31, 31));
        AddNote->setMinimumSize(QSize(0, 0));
        AddNote->setMaximumSize(QSize(16777215, 16777215));
        AddNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/AddNoteOfNote.png);"));
        DeleteNote = new QPushButton(centralWidget);
        DeleteNote->setObjectName(QStringLiteral("DeleteNote"));
        DeleteNote->setGeometry(QRect(240, 410, 31, 31));
        DeleteNote->setMinimumSize(QSize(0, 0));
        DeleteNote->setMaximumSize(QSize(16777215, 16777215));
        DeleteNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/DeleteNoteOfNote.png);"));
        EditNote = new QPushButton(centralWidget);
        EditNote->setObjectName(QStringLiteral("EditNote"));
        EditNote->setGeometry(QRect(280, 410, 31, 31));
        EditNote->setMinimumSize(QSize(0, 0));
        EditNote->setMaximumSize(QSize(16777215, 16777215));
        EditNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/EditNoteOfNote.png);"));
        ListAllNote = new QPushButton(centralWidget);
        ListAllNote->setObjectName(QStringLiteral("ListAllNote"));
        ListAllNote->setGeometry(QRect(320, 410, 31, 31));
        ListAllNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/ShowAllNoteOfNote.png);"));
        Refresh = new QPushButton(centralWidget);
        Refresh->setObjectName(QStringLiteral("Refresh"));
        Refresh->setGeometry(QRect(20, 410, 29, 29));
        Refresh->setMinimumSize(QSize(29, 29));
        Refresh->setMaximumSize(QSize(29, 29));
        Refresh->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Resource/RefreshNoteOfNote.png);"));
        LifeChoresWindow->setCentralWidget(centralWidget);
        AddNote->raise();
        DeleteNote->raise();
        EditNote->raise();
        ListOfNote->raise();
        ListAllNote->raise();
        Refresh->raise();

        retranslateUi(LifeChoresWindow);

        QMetaObject::connectSlotsByName(LifeChoresWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LifeChoresWindow)
    {
        LifeChoresWindow->setWindowTitle(QApplication::translate("LifeChoresWindow", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ListOfNote->setToolTip(QApplication::translate("LifeChoresWindow", "<html><head/><body><p align=\"justify\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddNote->setText(QString());
        DeleteNote->setText(QString());
        EditNote->setText(QString());
        ListAllNote->setText(QString());
        Refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LifeChoresWindow: public Ui_LifeChoresWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIFECHORESWINDOW_H
