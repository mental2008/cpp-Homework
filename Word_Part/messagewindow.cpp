#include "messagewindow.h"
#include "ui_messagewindow.h"
#include"studyplanwindow.h"
#include<QDebug>
#include<iostream>

//extern QString globaldata;
MessageWindow::MessageWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::MessageWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Detail");
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/studyplan.png"));
    this->setStyleSheet("border-image: url(:/new/prefix1/Resource/BackgroundOfNoteWindow.jpg);");
//    StudyPlanWindow *s=new StudyPlanWindow();
//    connect(s,SIGNAL(sendData(QString)),this,SLOT(receiveData(QString)));

    //ui->label->setText(globaldata);


}

MessageWindow::~MessageWindow()
{
    delete ui;
}

void MessageWindow::receiveData(QString data)
{
    ui->textBrowser->setText(data);
//    qDebug()<<data;
//    std::cout<<"wtf"<<std::endl;
}
