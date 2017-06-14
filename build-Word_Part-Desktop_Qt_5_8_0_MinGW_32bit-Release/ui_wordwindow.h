/********************************************************************************
** Form generated from reading UI file 'wordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDWINDOW_H
#define UI_WORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordWindow
{
public:
    QWidget *centralWidget;
    QLabel *EnglishWord;
    QPushButton *LeftMove;
    QPushButton *RightMove;
    QProgressBar *progressBar;
    QLabel *InitialPicture;
    QPushButton *EnterButton;
    QToolButton *addButton;
    QToolButton *deleteButton;
    QToolButton *changeButton;
    QLabel *EmptyListPicture;
    QLabel *EmptyListLabel;
    QListWidget *ChineseMeaning;

    void setupUi(QMainWindow *WordWindow)
    {
        if (WordWindow->objectName().isEmpty())
            WordWindow->setObjectName(QStringLiteral("WordWindow"));
        WordWindow->resize(800, 500);
        WordWindow->setMinimumSize(QSize(800, 500));
        WordWindow->setMaximumSize(QSize(800, 500));
        WordWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 238, 176);\n"
"/*background-color: rgb(39, 80, 78);*/"));
        centralWidget = new QWidget(WordWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        EnglishWord = new QLabel(centralWidget);
        EnglishWord->setObjectName(QStringLiteral("EnglishWord"));
        EnglishWord->setGeometry(QRect(0, 140, 801, 141));
        EnglishWord->setStyleSheet(QStringLiteral("font: 72pt \"Agency FB\";"));
        LeftMove = new QPushButton(centralWidget);
        LeftMove->setObjectName(QStringLiteral("LeftMove"));
        LeftMove->setGeometry(QRect(40, 200, 51, 51));
        LeftMove->setStyleSheet(QStringLiteral("font: 24pt \"Agency FB\";"));
        RightMove = new QPushButton(centralWidget);
        RightMove->setObjectName(QStringLiteral("RightMove"));
        RightMove->setGeometry(QRect(710, 200, 51, 51));
        RightMove->setStyleSheet(QStringLiteral("font: 24pt \"Agency FB\";"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(310, 410, 181, 31));
        progressBar->setStyleSheet(QLatin1String("QProgressBar {\n"
"   border: 2px solid grey;\n"
"   border-radius: 5px;\n"
"   background-color: #FFFFFF;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"   background-color: #05B8CC;\n"
"   width: 20px;\n"
"}\n"
"\n"
"QProgressBar {\n"
"   border: 2px solid grey;\n"
"   border-radius: 5px;\n"
"   text-align: center;\n"
"}"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        InitialPicture = new QLabel(centralWidget);
        InitialPicture->setObjectName(QStringLiteral("InitialPicture"));
        InitialPicture->setGeometry(QRect(0, 0, 800, 500));
        EnterButton = new QPushButton(centralWidget);
        EnterButton->setObjectName(QStringLiteral("EnterButton"));
        EnterButton->setGeometry(QRect(355, 370, 90, 40));
        EnterButton->setStyleSheet(QLatin1String("font: 15pt \"Bodoni MT\";\n"
""));
        addButton = new QToolButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(580, 410, 51, 51));
        addButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/addPicture.png);"));
        deleteButton = new QToolButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(650, 410, 51, 51));
        deleteButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/deletePicture.png);"));
        changeButton = new QToolButton(centralWidget);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setEnabled(true);
        changeButton->setGeometry(QRect(720, 410, 51, 51));
        changeButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/changePicture.png);"));
        EmptyListPicture = new QLabel(centralWidget);
        EmptyListPicture->setObjectName(QStringLiteral("EmptyListPicture"));
        EmptyListPicture->setGeometry(QRect(320, 130, 151, 181));
        EmptyListPicture->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/EmptyList.png);"));
        EmptyListLabel = new QLabel(centralWidget);
        EmptyListLabel->setObjectName(QStringLiteral("EmptyListLabel"));
        EmptyListLabel->setGeometry(QRect(270, 320, 261, 61));
        EmptyListLabel->setStyleSheet(QStringLiteral("font: 18pt \"Algerian\";"));
        ChineseMeaning = new QListWidget(centralWidget);
        new QListWidgetItem(ChineseMeaning);
        new QListWidgetItem(ChineseMeaning);
        new QListWidgetItem(ChineseMeaning);
        ChineseMeaning->setObjectName(QStringLiteral("ChineseMeaning"));
        ChineseMeaning->setGeometry(QRect(160, 290, 491, 41));
        ChineseMeaning->setStyleSheet(QString::fromUtf8("font: 25 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        ChineseMeaning->setFlow(QListView::TopToBottom);
        WordWindow->setCentralWidget(centralWidget);
        EnglishWord->raise();
        LeftMove->raise();
        RightMove->raise();
        InitialPicture->raise();
        progressBar->raise();
        EnterButton->raise();
        addButton->raise();
        deleteButton->raise();
        changeButton->raise();
        EmptyListPicture->raise();
        EmptyListLabel->raise();
        ChineseMeaning->raise();

        retranslateUi(WordWindow);

        QMetaObject::connectSlotsByName(WordWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WordWindow)
    {
        WordWindow->setWindowTitle(QApplication::translate("WordWindow", "Word", Q_NULLPTR));
        EnglishWord->setText(QApplication::translate("WordWindow", "<html><head/><body><p align=\"center\">One</p></body></html>", Q_NULLPTR));
        LeftMove->setText(QApplication::translate("WordWindow", "<-", Q_NULLPTR));
        LeftMove->setShortcut(QApplication::translate("WordWindow", "Left", Q_NULLPTR));
        RightMove->setText(QApplication::translate("WordWindow", "->", Q_NULLPTR));
        RightMove->setShortcut(QApplication::translate("WordWindow", "Right", Q_NULLPTR));
        InitialPicture->setText(QString());
        EnterButton->setText(QApplication::translate("WordWindow", "Enter", Q_NULLPTR));
        addButton->setText(QString());
        deleteButton->setText(QString());
        changeButton->setText(QString());
        EmptyListPicture->setText(QString());
        EmptyListLabel->setText(QApplication::translate("WordWindow", "The list is empty", Q_NULLPTR));

        const bool __sortingEnabled = ChineseMeaning->isSortingEnabled();
        ChineseMeaning->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ChineseMeaning->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("WordWindow", "Row 1", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = ChineseMeaning->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("WordWindow", "Row 2", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = ChineseMeaning->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("WordWindow", "Row 3", Q_NULLPTR));
        ChineseMeaning->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class WordWindow: public Ui_WordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDWINDOW_H
