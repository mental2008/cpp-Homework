#include "AddNoteWindowc.h"
#include "ui_AddNoteWindowc.h"
#include"LifeChores.h"
#include<iostream>
#include<qdebug.h>
#include<io.h>
#include<direct.h>
#include<cstring>
#include"tooltipc.h"
#include<fstream>
#include<QTime>
#include<QDate>
#include<QMessageBox>
AddNoteWindowC::AddNoteWindowC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddNoteWindowC)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/lifechores.png"));
    this->setWindowTitle("Add Note");
    const QDate tmp = QDate::currentDate();
    ui->dateEdit->setDate(tmp);
}

AddNoteWindowC::~AddNoteWindowC()
{
    delete ui;
}

void AddNoteWindowC::on_ButtonAdd_pressed()
{
    SYSTEMTIME ct;
    GetLocalTime(&ct);
    LifeChores lifechores(ct);

    int endofday =ui->dateEdit->date().day();
    int endofmonth =ui->dateEdit->date().month();
    int endofyear =ui->dateEdit->date().year();
    lifechores.setEndDay(endofday);
    lifechores.setEndMonth(endofmonth);
    lifechores.setEndYear(endofyear);
    QDate date = ui->dateEdit->date();
    QString qendtime=date.toString("yyyyMMdd");
    string endtime=qendtime.toStdString();
    lifechores.setEndTime(endtime);
    //std::cout<<lifechores.getEndTime()<<std::endl;
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
    lifechores.setNote(text);
    lifechores.setShown();//手动
    //std::cout<<lifechores.getShown()<<std::endl;//debug
    lifechores.setFileName();//手动
    //std::cout<<lifechores.getFileName()<<lifechores.getFilePath()<<std::endl;//debug
    const char*filepath=lifechores.getFilePath().c_str();
    mkdir(filepath);
    //std::cout<<access(filepath,0);//debug
//    const char*filename=lifechores.getFileName().c_str();
//    freopen(filename,"w",stdout);
//    std::cout<<lifechores.getCreationTime()<<std::endl;
//    std::cout<<lifechores.getEndYear()<<std::endl;
//    std::cout<<lifechores.getEndMonth()<<std::endl;
//    std::cout<<lifechores.getEndDay()<<std::endl;
//    std::cout<<lifechores.getEndTime()<<std::endl;
//    std::cout<<lifechores.getNote()<<std::endl;
    std::ofstream outcome(lifechores.getFileName(),std::ios::out);
    outcome<<lifechores.getEndTime()<<'$';
    outcome<<lifechores.getNote()<<'$';
    //outcome<<lifechores.getCreationTime()<<'$';
    outcome<<lifechores.getEndYear()<<'$';
    outcome<<lifechores.getEndMonth()<<'$';
    outcome<<lifechores.getEndDay()<<'$';
//    outcome<<lifechores.getFileName()<<'$';
//    outcome<<lifechores.getFilePath()<<'$';
    outcome<<lifechores.getInitialYear()<<'$';
    outcome<<lifechores.getInitialMonth()<<'$';
    outcome<<lifechores.getInitialDay()<<'$';
    outcome<<lifechores.getInitialHour()<<'$';
    outcome<<lifechores.getInitialMinute()<<'$';
    outcome<<lifechores.getInitialSecond()<<'$';
   // outcome<<lifechores.getEndTime()<<std::endl;
   //outcome<<lifechores.getNote()<<std::endl;
    outcome.close();
    ui->textEdit->clear();
    ToolTipC *tooltip=new ToolTipC();
    tooltip->exec();
    }
    if(have$)
    {
        QMessageBox::warning(this, "Warning", "Note can not contain $");

    }
    if(text.length()>=500){
        QMessageBox::warning(this, "Warning", "Note can not more than 500");
    }

}
