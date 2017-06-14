/********************************************************************************
** Form generated from reading UI file 'studytextpicture.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYTEXTPICTURE_H
#define UI_STUDYTEXTPICTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studyTextPicture
{
public:
    QAction *action222;
    QAction *action2222;
    QAction *action333;
    QWidget *centralWidget;
    QListWidget *textPicturesList;
    QListView *listBackground;
    QFrame *toolFrame;
    QPushButton *enlageButton;
    QPushButton *narrowButton;
    QPushButton *clockwiseButton;
    QPushButton *counterclockwiseButton;
    QPushButton *addPictureButton;
    QPushButton *addTextButton;
    QPushButton *deletButton;
    QPushButton *historyButton;
    QPushButton *littleToolButton;
    QPushButton *tool;
    QLabel *toolIcon;
    QLabel *pictureViewLabel;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *studyTextPicture)
    {
        if (studyTextPicture->objectName().isEmpty())
            studyTextPicture->setObjectName(QStringLiteral("studyTextPicture"));
        studyTextPicture->setWindowModality(Qt::ApplicationModal);
        studyTextPicture->setEnabled(true);
        studyTextPicture->resize(800, 500);
        studyTextPicture->setMinimumSize(QSize(800, 500));
        studyTextPicture->setMaximumSize(QSize(800, 500));
        studyTextPicture->setMouseTracking(true);
        studyTextPicture->setFocusPolicy(Qt::ClickFocus);
        studyTextPicture->setAcceptDrops(true);
        studyTextPicture->setAutoFillBackground(false);
        studyTextPicture->setStyleSheet(QStringLiteral(""));
        action222 = new QAction(studyTextPicture);
        action222->setObjectName(QStringLiteral("action222"));
        action2222 = new QAction(studyTextPicture);
        action2222->setObjectName(QStringLiteral("action2222"));
        action333 = new QAction(studyTextPicture);
        action333->setObjectName(QStringLiteral("action333"));
        centralWidget = new QWidget(studyTextPicture);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMouseTracking(true);
        textPicturesList = new QListWidget(centralWidget);
        textPicturesList->setObjectName(QStringLiteral("textPicturesList"));
        textPicturesList->setGeometry(QRect(630, 0, 171, 501));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        textPicturesList->setFont(font);
        textPicturesList->setMouseTracking(true);
        textPicturesList->setFocusPolicy(Qt::WheelFocus);
        textPicturesList->setStyleSheet(QLatin1String("background: transparent;\n"
"color:white;\n"
"border: transparent;\n"
""));
        textPicturesList->setFrameShape(QFrame::Panel);
        textPicturesList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listBackground = new QListView(centralWidget);
        listBackground->setObjectName(QStringLiteral("listBackground"));
        listBackground->setGeometry(QRect(0, 0, 801, 501));
        listBackground->setMouseTracking(true);
        listBackground->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/new/prefix1/background.jpg);\n"
""));
        toolFrame = new QFrame(centralWidget);
        toolFrame->setObjectName(QStringLiteral("toolFrame"));
        toolFrame->setEnabled(true);
        toolFrame->setGeometry(QRect(490, 230, 101, 101));
        toolFrame->setFrameShape(QFrame::StyledPanel);
        toolFrame->setFrameShadow(QFrame::Raised);
        enlageButton = new QPushButton(toolFrame);
        enlageButton->setObjectName(QStringLiteral("enlageButton"));
        enlageButton->setGeometry(QRect(70, 0, 30, 30));
        enlageButton->setMouseTracking(true);
        enlageButton->setFocusPolicy(Qt::ClickFocus);
        enlageButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/enlage.png);"));
        enlageButton->setAutoDefault(false);
        narrowButton = new QPushButton(toolFrame);
        narrowButton->setObjectName(QStringLiteral("narrowButton"));
        narrowButton->setGeometry(QRect(70, 70, 30, 30));
        narrowButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/narrow.png);"));
        clockwiseButton = new QPushButton(toolFrame);
        clockwiseButton->setObjectName(QStringLiteral("clockwiseButton"));
        clockwiseButton->setGeometry(QRect(0, 70, 30, 30));
        clockwiseButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/clockwise.png);"));
        counterclockwiseButton = new QPushButton(toolFrame);
        counterclockwiseButton->setObjectName(QStringLiteral("counterclockwiseButton"));
        counterclockwiseButton->setGeometry(QRect(0, 0, 30, 30));
        counterclockwiseButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/counterclockwise.png);"));
        addPictureButton = new QPushButton(toolFrame);
        addPictureButton->setObjectName(QStringLiteral("addPictureButton"));
        addPictureButton->setGeometry(QRect(0, 35, 30, 30));
        addPictureButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/addPicture1.png);"));
        addTextButton = new QPushButton(toolFrame);
        addTextButton->setObjectName(QStringLiteral("addTextButton"));
        addTextButton->setGeometry(QRect(35, 70, 30, 30));
        addTextButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/addText.png);"));
        deletButton = new QPushButton(toolFrame);
        deletButton->setObjectName(QStringLiteral("deletButton"));
        deletButton->setGeometry(QRect(70, 35, 30, 30));
        deletButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/delet.png);"));
        historyButton = new QPushButton(toolFrame);
        historyButton->setObjectName(QStringLiteral("historyButton"));
        historyButton->setGeometry(QRect(35, 0, 30, 30));
        historyButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/refresh.png);"));
        littleToolButton = new QPushButton(toolFrame);
        littleToolButton->setObjectName(QStringLiteral("littleToolButton"));
        littleToolButton->setGeometry(QRect(35, 35, 30, 30));
        littleToolButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/toolChoice.png);"));
        tool = new QPushButton(centralWidget);
        tool->setObjectName(QStringLiteral("tool"));
        tool->setGeometry(QRect(710, 430, 30, 30));
        tool->setMouseTracking(true);
        tool->setStyleSheet(QLatin1String("background: transparent;\n"
"border: transparent;\n"
"\n"
"border-image: url(:/new/prefix1/toolChoice.png);"));
        toolIcon = new QLabel(centralWidget);
        toolIcon->setObjectName(QStringLiteral("toolIcon"));
        toolIcon->setGeometry(QRect(710, 430, 30, 30));
        toolIcon->setMouseTracking(true);
        toolIcon->setAcceptDrops(true);
        toolIcon->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/wrong.png);"));
        pictureViewLabel = new QLabel(centralWidget);
        pictureViewLabel->setObjectName(QStringLiteral("pictureViewLabel"));
        pictureViewLabel->setEnabled(true);
        pictureViewLabel->setGeometry(QRect(510, 40, 291, 251));
        pictureViewLabel->setMouseTracking(true);
        pictureViewLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 628, 501));
        textBrowser->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        studyTextPicture->setCentralWidget(centralWidget);
        listBackground->raise();
        pictureViewLabel->raise();
        textBrowser->raise();
        toolIcon->raise();
        textPicturesList->raise();
        toolFrame->raise();
        tool->raise();

        retranslateUi(studyTextPicture);

        QMetaObject::connectSlotsByName(studyTextPicture);
    } // setupUi

    void retranslateUi(QMainWindow *studyTextPicture)
    {
        studyTextPicture->setWindowTitle(QApplication::translate("studyTextPicture", "studyTextPicture", Q_NULLPTR));
        action222->setText(QApplication::translate("studyTextPicture", "222", Q_NULLPTR));
        action2222->setText(QApplication::translate("studyTextPicture", "222", Q_NULLPTR));
        action333->setText(QApplication::translate("studyTextPicture", "333", Q_NULLPTR));
        enlageButton->setText(QString());
        enlageButton->setShortcut(QApplication::translate("studyTextPicture", "Up", Q_NULLPTR));
        narrowButton->setText(QString());
        narrowButton->setShortcut(QApplication::translate("studyTextPicture", "Down", Q_NULLPTR));
        clockwiseButton->setText(QString());
        counterclockwiseButton->setText(QString());
        addPictureButton->setText(QString());
        addTextButton->setText(QString());
        deletButton->setText(QString());
        historyButton->setText(QString());
        littleToolButton->setText(QString());
        tool->setText(QString());
        toolIcon->setText(QString());
        pictureViewLabel->setText(QApplication::translate("studyTextPicture", "pictureViewLabel", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("studyTextPicture", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studyTextPicture: public Ui_studyTextPicture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYTEXTPICTURE_H
