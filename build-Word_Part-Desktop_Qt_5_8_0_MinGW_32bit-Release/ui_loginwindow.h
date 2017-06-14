/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QAction *actionAbout_the_program;
    QAction *actionAbout_the_authors;
    QAction *actionUser_Instructions;
    QWidget *centralwidget;
    QLabel *UserLabel;
    QLineEdit *UserInput;
    QLabel *PasswordLabel;
    QLineEdit *PasswordInput;
    QPushButton *LoginButton;
    QPushButton *PasswordDisplayButton;
    QLabel *LoginBackground;
    QMenuBar *menuBar;
    QMenu *menuAbout;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(800, 500);
        LoginWindow->setMinimumSize(QSize(800, 500));
        LoginWindow->setMaximumSize(QSize(800, 500));
        LoginWindow->setLayoutDirection(Qt::LeftToRight);
        LoginWindow->setStyleSheet(QStringLiteral("/*background-color: rgb(242, 255, 199);"));
        actionAbout_the_program = new QAction(LoginWindow);
        actionAbout_the_program->setObjectName(QStringLiteral("actionAbout_the_program"));
        actionAbout_the_authors = new QAction(LoginWindow);
        actionAbout_the_authors->setObjectName(QStringLiteral("actionAbout_the_authors"));
        actionUser_Instructions = new QAction(LoginWindow);
        actionUser_Instructions->setObjectName(QStringLiteral("actionUser_Instructions"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        UserLabel = new QLabel(centralwidget);
        UserLabel->setObjectName(QStringLiteral("UserLabel"));
        UserLabel->setGeometry(QRect(300, 150, 61, 41));
        UserLabel->setStyleSheet(QStringLiteral("font: 22pt \"Agency FB\";"));
        UserLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        UserInput = new QLineEdit(centralwidget);
        UserInput->setObjectName(QStringLiteral("UserInput"));
        UserInput->setGeometry(QRect(380, 150, 121, 41));
        UserInput->setStyleSheet(QStringLiteral("font: 12pt \"Source Code Pro\";"));
        PasswordLabel = new QLabel(centralwidget);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(240, 210, 121, 41));
        PasswordLabel->setAcceptDrops(false);
        PasswordLabel->setStyleSheet(QStringLiteral("font: 22pt \"Agency FB\";"));
        PasswordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PasswordInput = new QLineEdit(centralwidget);
        PasswordInput->setObjectName(QStringLiteral("PasswordInput"));
        PasswordInput->setGeometry(QRect(380, 210, 121, 41));
        PasswordInput->setStyleSheet(QStringLiteral("font: 12pt \"Source Code Pro\";"));
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(310, 270, 171, 51));
        LoginButton->setAcceptDrops(false);
        LoginButton->setStyleSheet(QLatin1String("background-color: rgb(112, 150, 255);\n"
"font: 18pt \"Agency FB\";"));
        PasswordDisplayButton = new QPushButton(centralwidget);
        PasswordDisplayButton->setObjectName(QStringLiteral("PasswordDisplayButton"));
        PasswordDisplayButton->setGeometry(QRect(510, 220, 21, 21));
        PasswordDisplayButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/PasswordDisplayIconUpdateUpdate.jpg);"));
        LoginBackground = new QLabel(centralwidget);
        LoginBackground->setObjectName(QStringLiteral("LoginBackground"));
        LoginBackground->setGeometry(QRect(0, 0, 801, 471));
        LoginBackground->setStyleSheet(QLatin1String("background-color: rgb(242, 255, 199);\n"
""));
        LoginWindow->setCentralWidget(centralwidget);
        LoginBackground->raise();
        UserLabel->raise();
        UserInput->raise();
        PasswordLabel->raise();
        PasswordInput->raise();
        LoginButton->raise();
        PasswordDisplayButton->raise();
        menuBar = new QMenuBar(LoginWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        QPalette palette;
        QBrush brush(QColor(85, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        menuAbout->setPalette(palette);
        LoginWindow->setMenuBar(menuBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout_the_program);
        menuAbout->addAction(actionAbout_the_authors);
        menuAbout->addAction(actionUser_Instructions);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "MainWindow", Q_NULLPTR));
        actionAbout_the_program->setText(QApplication::translate("LoginWindow", "About the program", Q_NULLPTR));
        actionAbout_the_authors->setText(QApplication::translate("LoginWindow", "About the authors", Q_NULLPTR));
        actionUser_Instructions->setText(QApplication::translate("LoginWindow", "User Instructions", Q_NULLPTR));
        UserLabel->setText(QApplication::translate("LoginWindow", "User", Q_NULLPTR));
        UserInput->setText(QString());
        PasswordLabel->setText(QApplication::translate("LoginWindow", "Passward", Q_NULLPTR));
        PasswordInput->setText(QString());
        LoginButton->setText(QApplication::translate("LoginWindow", "Login", Q_NULLPTR));
        LoginButton->setShortcut(QApplication::translate("LoginWindow", "Return", Q_NULLPTR));
        PasswordDisplayButton->setText(QString());
        LoginBackground->setText(QString());
        menuAbout->setTitle(QApplication::translate("LoginWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
