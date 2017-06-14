/********************************************************************************
** Form generated from reading UI file 'choosewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEWINDOW_H
#define UI_CHOOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseWindow
{
public:
    QAction *actionKnowledge;
    QAction *actionLife_chores;
    QAction *actionStudy_plan;
    QAction *actionWord_list;
    QWidget *centralwidget;
    QToolButton *KnowledgeButton;
    QToolButton *LifeChoresButton;
    QToolButton *StudyPlanButton;
    QToolButton *WordListButton;
    QLabel *KnowledgeLabel;
    QLabel *LifeChoresLabel;
    QLabel *StudyPlanLabel;
    QLabel *WordListLabel;
    QLabel *Background;
    QMenuBar *menubar;
    QMenu *menuHelp;

    void setupUi(QMainWindow *ChooseWindow)
    {
        if (ChooseWindow->objectName().isEmpty())
            ChooseWindow->setObjectName(QStringLiteral("ChooseWindow"));
        ChooseWindow->resize(660, 258);
        ChooseWindow->setMinimumSize(QSize(660, 258));
        ChooseWindow->setMaximumSize(QSize(660, 258));
        actionKnowledge = new QAction(ChooseWindow);
        actionKnowledge->setObjectName(QStringLiteral("actionKnowledge"));
        actionLife_chores = new QAction(ChooseWindow);
        actionLife_chores->setObjectName(QStringLiteral("actionLife_chores"));
        actionStudy_plan = new QAction(ChooseWindow);
        actionStudy_plan->setObjectName(QStringLiteral("actionStudy_plan"));
        actionWord_list = new QAction(ChooseWindow);
        actionWord_list->setObjectName(QStringLiteral("actionWord_list"));
        centralwidget = new QWidget(ChooseWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        KnowledgeButton = new QToolButton(centralwidget);
        KnowledgeButton->setObjectName(QStringLiteral("KnowledgeButton"));
        KnowledgeButton->setGeometry(QRect(50, 30, 121, 131));
        KnowledgeButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/KnowledgeIcon.png);"));
        LifeChoresButton = new QToolButton(centralwidget);
        LifeChoresButton->setObjectName(QStringLiteral("LifeChoresButton"));
        LifeChoresButton->setGeometry(QRect(190, 30, 121, 131));
        LifeChoresButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/StudyChoresIcon.png);"));
        StudyPlanButton = new QToolButton(centralwidget);
        StudyPlanButton->setObjectName(QStringLiteral("StudyPlanButton"));
        StudyPlanButton->setGeometry(QRect(340, 30, 121, 131));
        StudyPlanButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/StudyPlanIcon.png);"));
        WordListButton = new QToolButton(centralwidget);
        WordListButton->setObjectName(QStringLiteral("WordListButton"));
        WordListButton->setGeometry(QRect(490, 30, 121, 131));
        WordListButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/WordListIcon.png);"));
        KnowledgeLabel = new QLabel(centralwidget);
        KnowledgeLabel->setObjectName(QStringLiteral("KnowledgeLabel"));
        KnowledgeLabel->setGeometry(QRect(50, 180, 111, 31));
        KnowledgeLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        KnowledgeLabel->setAlignment(Qt::AlignCenter);
        LifeChoresLabel = new QLabel(centralwidget);
        LifeChoresLabel->setObjectName(QStringLiteral("LifeChoresLabel"));
        LifeChoresLabel->setGeometry(QRect(190, 180, 121, 31));
        LifeChoresLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LifeChoresLabel->setAlignment(Qt::AlignCenter);
        StudyPlanLabel = new QLabel(centralwidget);
        StudyPlanLabel->setObjectName(QStringLiteral("StudyPlanLabel"));
        StudyPlanLabel->setGeometry(QRect(340, 180, 121, 31));
        StudyPlanLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        StudyPlanLabel->setAlignment(Qt::AlignCenter);
        WordListLabel = new QLabel(centralwidget);
        WordListLabel->setObjectName(QStringLiteral("WordListLabel"));
        WordListLabel->setGeometry(QRect(490, 180, 121, 31));
        WordListLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        WordListLabel->setAlignment(Qt::AlignCenter);
        Background = new QLabel(centralwidget);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-10, 0, 691, 231));
        Background->setStyleSheet(QLatin1String("background-color: rgb(242, 255, 199);\n"
""));
        ChooseWindow->setCentralWidget(centralwidget);
        Background->raise();
        KnowledgeButton->raise();
        LifeChoresButton->raise();
        StudyPlanButton->raise();
        WordListButton->raise();
        KnowledgeLabel->raise();
        LifeChoresLabel->raise();
        StudyPlanLabel->raise();
        WordListLabel->raise();
        menubar = new QMenuBar(ChooseWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 26));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        QPalette palette;
        QBrush brush(QColor(85, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        menuHelp->setPalette(palette);
        ChooseWindow->setMenuBar(menubar);

        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionKnowledge);
        menuHelp->addAction(actionLife_chores);
        menuHelp->addAction(actionStudy_plan);
        menuHelp->addAction(actionWord_list);

        retranslateUi(ChooseWindow);

        QMetaObject::connectSlotsByName(ChooseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChooseWindow)
    {
        ChooseWindow->setWindowTitle(QApplication::translate("ChooseWindow", "MainWindow", Q_NULLPTR));
        actionKnowledge->setText(QApplication::translate("ChooseWindow", "Knowledge", Q_NULLPTR));
        actionLife_chores->setText(QApplication::translate("ChooseWindow", "Life chores", Q_NULLPTR));
        actionStudy_plan->setText(QApplication::translate("ChooseWindow", "Study plan", Q_NULLPTR));
        actionWord_list->setText(QApplication::translate("ChooseWindow", "Word list", Q_NULLPTR));
        KnowledgeButton->setText(QString());
        LifeChoresButton->setText(QString());
        StudyPlanButton->setText(QString());
        WordListButton->setText(QString());
        KnowledgeLabel->setText(QApplication::translate("ChooseWindow", "Knowledge", Q_NULLPTR));
        LifeChoresLabel->setText(QApplication::translate("ChooseWindow", "Life chores", Q_NULLPTR));
        StudyPlanLabel->setText(QApplication::translate("ChooseWindow", "Study plan", Q_NULLPTR));
        WordListLabel->setText(QApplication::translate("ChooseWindow", "Word list", Q_NULLPTR));
        Background->setText(QString());
        menuHelp->setTitle(QApplication::translate("ChooseWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChooseWindow: public Ui_ChooseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEWINDOW_H
