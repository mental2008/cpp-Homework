#include "AddNoteWindow.h"
#include "ui_AddNoteWindow.h"
#include"StudyPlan.h"
#include<iostream>
#include<qdebug.h>
#include<io.h>
#include<direct.h>
#include<cstring>
#include"tooltip.h"
#include<fstream>
#include<QTime>
#include<QDate>
#include<QMessageBox>
AddNoteWindow::AddNoteWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddNoteWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Note");
    const QDate tmp = QDate::currentDate();
    ui->dateEdit->setDate(tmp);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/studyplan.png"));

}

AddNoteWindow::~AddNoteWindow()
{
    delete ui;
}

void AddNoteWindow::on_ButtonAdd_pressed()
{
    SYSTEMTIME ct;
    GetLocalTime(&ct);
    StudyPlan studyplan(ct);

    int endofday =ui->dateEdit->date().day();
    int endofmonth =ui->dateEdit->date().month();
    int endofyear =ui->dateEdit->date().year();
    studyplan.setEndDay(endofday);
    studyplan.setEndMonth(endofmonth);
    studyplan.setEndYear(endofyear);
    QDate date = ui->dateEdit->date();
    QString qendtime=date.toString("yyyyMMdd");
    string endtime=qendtime.toStdString();
    studyplan.setEndTime(endtime);
    //std::cout<<studyplan.getEndTime()<<std::endl;
    QString qtext = ui->textEdit->toPlainText();
    //qDebug()<<qtext;
    string text=qtext.toStdString();
    bool have$ = false;
    for(int i=0;i<text.length();i++){
        if('$'==text[i])
            have$ =true;
    }
    if(!have$&&text.length()<500)
    {
    studyplan.setNote(text);
    studyplan.setShown();//手动
    //std::cout<<studyplan.getShown()<<std::endl;//debug
    studyplan.setFileName();//手动
    //std::cout<<studyplan.getFileName()<<studyplan.getFilePath()<<std::endl;//debug
    const char*filepath=studyplan.getFilePath().c_str();
    mkdir(filepath);
    //std::cout<<access(filepath,0);//debug
//    const char*filename=studyplan.getFileName().c_str();
//    freopen(filename,"w",stdout);
//    std::cout<<studyplan.getCreationTime()<<std::endl;
//    std::cout<<studyplan.getEndYear()<<std::endl;
//    std::cout<<studyplan.getEndMonth()<<std::endl;
//    std::cout<<studyplan.getEndDay()<<std::endl;
//    std::cout<<studyplan.getEndTime()<<std::endl;
//    std::cout<<studyplan.getNote()<<std::endl;
    std::ofstream outcome(studyplan.getFileName(),std::ios::out);
    outcome<<studyplan.getEndTime()<<'$';
    outcome<<studyplan.getNote()<<'$';
    //outcome<<studyplan.getCreationTime()<<'$';
    outcome<<studyplan.getEndYear()<<'$';
    outcome<<studyplan.getEndMonth()<<'$';
    outcome<<studyplan.getEndDay()<<'$';
//    outcome<<studyplan.getFileName()<<'$';
//    outcome<<studyplan.getFilePath()<<'$';
    outcome<<studyplan.getInitialYear()<<'$';
    outcome<<studyplan.getInitialMonth()<<'$';
    outcome<<studyplan.getInitialDay()<<'$';
    outcome<<studyplan.getInitialHour()<<'$';
    outcome<<studyplan.getInitialMinute()<<'$';
    outcome<<studyplan.getInitialSecond()<<'$';
   // outcome<<studyplan.getEndTime()<<std::endl;
   //outcome<<studyplan.getNote()<<std::endl;
    outcome.close();
    ui->textEdit->clear();
    ToolTip *tooltip=new ToolTip();
    tooltip->exec();
    }
    if(have$==true)
    {
        QMessageBox::warning(this, "Warning", "Note can not contain $");

    }
    if(text.length()>=500){
        QMessageBox::warning(this, "Warning", "Note can not more than 500");
    }

}
