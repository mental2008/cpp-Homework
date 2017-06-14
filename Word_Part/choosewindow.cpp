#include "choosewindow.h"
#include "ui_choosewindow.h"
#include "knowledgeinstruction.h"
#include "lifechoresinstruction.h"
#include "studyplaninstruction.h"
#include "wordlistinstruction.h"
#include "wordwindow.h"
#include <iostream>
#include"studyplanwindow.h"
#include"lifechoreswindow.h"
#include "studytextpicture.h"
ChooseWindow::ChooseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChooseWindow)
{
    ui->setupUi(this);

    ui->menubar->setStyleSheet("background-color: rgb(242, 255, 199);");

    this->setWindowTitle("Memory Note");
    this->setWindowIcon(QIcon(":/new/prefix1/LoginWindowIcon.jpg"));
}

ChooseWindow::~ChooseWindow()
{
    delete ui;
}

void ChooseWindow::on_actionKnowledge_triggered()
{
    KnowledgeInstruction *dialog = new KnowledgeInstruction(this);
    dialog->exec();
}

void ChooseWindow::on_actionLife_chores_triggered()
{
    LifeChoresInstruction *dialog = new LifeChoresInstruction(this);
    dialog->exec();
}

void ChooseWindow::on_actionStudy_plan_triggered()
{
    StudyPlanInstruction *dialog = new StudyPlanInstruction(this);
    dialog->exec();
}

void ChooseWindow::on_actionWord_list_triggered()
{
    WordListInstruction *dialog = new WordListInstruction(this);
    dialog->exec();
}

void ChooseWindow::on_WordListButton_pressed()
{
    WordWindow *word = new WordWindow;
    this->close();
    word->show();
}

void ChooseWindow::on_KnowledgeButton_pressed()
{
    noteTextPicture *window = new noteTextPicture;
    this->close();
    window->show();
}

void ChooseWindow::on_LifeChoresButton_pressed()
{
    LifeChoresWindow *lifeChores = new LifeChoresWindow;
    this->close();
    lifeChores->show();
}

void ChooseWindow::on_StudyPlanButton_pressed()
{
    StudyPlanWindow *studyplan = new StudyPlanWindow;
    this->close();
    studyplan->show();
}
