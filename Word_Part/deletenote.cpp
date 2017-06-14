#include "deletenote.h"
#include "ui_deletenote.h"
#include<vector>
#include"StudyPlan.h"
#include<fstream>
#include<string>
#include<QString>
#include<QDebug>
#include<iostream>
#include<stdio.h>
#include"tooltip.h"
#include<QMessageBox>
DeleteNote::DeleteNote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteNote)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/studyplan.png"));
    this->setWindowTitle("Delete Note");
    std::vector<StudyPlan>toshow;
    toshow.clear();

    string path = "StudyPlan";
    //_mkdir(path.c_str());
    std::vector<string> nameOfFile;
    StudyPlan::fileSearch(path,nameOfFile);
//  std::cout<<nameOfFile[0]<<std::endl;
    SYSTEMTIME ct;
    GetLocalTime(&ct);
    StudyPlan tmp(ct);
    StudyPlan tmp1(ct);
    int numberOfFile=nameOfFile.size();
    //////
    for(int i=0;i<numberOfFile;i++){
        string pathOfText = path+"/"+nameOfFile[i];
        std::ifstream input(pathOfText,std::ios::in);
        if(input){//警告
            //std::cout<<"fuck"<<std::endl;//debug
        }
        string endtime;
        string note;
        string endy;
        string endm;
        string endd;
        string filename;
        string filepath;
        string iyear;
        string imonth;
        string iday;
        string ihour;
        string iminute;
        string isecond;
        char tmpofchar[500];
        input.getline(tmpofchar,50,'$');
        endtime=tmpofchar;
       // std::cout<<tmpofchar<<std::endl;//debug
        input.getline(tmpofchar,500,'$');
        note=tmpofchar;
       // std::cout<<tmpofchar<<std::endl;//debug
        input.getline(tmpofchar,50,'$');
        endy=tmpofchar;
        input.getline(tmpofchar,50,'$');
        endm=tmpofchar;
        input.getline(tmpofchar,50,'$');
        endd=tmpofchar;
//        input.getline(tmpofchar,50,'$');
//        filename=tmpofchar;
//        input.getline(tmpofchar,50,'$');
//        filepath=tmpofchar;
        input.getline(tmpofchar,50,'$');
        iyear=tmpofchar;
        input.getline(tmpofchar,50,'$');
        imonth=tmpofchar;
        input.getline(tmpofchar,50,'$');
        iday=tmpofchar;
        input.getline(tmpofchar,50,'$');
        ihour=tmpofchar;
        input.getline(tmpofchar,50,'$');
        iminute=tmpofchar;
        input.getline(tmpofchar,50,'$');
        isecond=tmpofchar;
        input.getline(tmpofchar,50,'$');

        input.close();
        //std::cout<<endtime<<" "<<note<<" "<<creationtime<<std::endl;//debug

        tmp.setEndTime(endtime);
        tmp.setNote(note);
        tmp.setEndYear(std::stoi(endy));
        tmp.setEndMonth(std::stoi(endm));
        tmp.setEndDay(std::stoi(endd));
        //

        tmp.setInitialYear(std::stoi(iyear));
        tmp.setInitialMonth(std::stoi(imonth));
        tmp.setInitialDay(std::stoi(iday));
        tmp.setInitialHour(std::stoi(ihour));
        tmp.setInitialMinute(std::stoi(iminute));
        tmp.setInitialSecond(std::stoi(isecond));
        tmp.setFilePath("StudyPlan/");
        tmp.setFileName();
        tmp.setShown();
        tmp.setCreationTime();
        string now = tmp1.getCreationTime().substr(0,8);


            toshow.push_back(tmp);
            //std::cout<<"delete no more"<<toshow[0]<<std::endl;//debug

    }
    int numberOfShow = toshow.size();
    //string showOnList[numberOfShow];
//    for(int i=0;i<numberOfShow;i++){
//        showOnList[i]=toshow[i];
//    }
    //std::sort(toshow.begin(),toshow.end(),cmp);
//    std::cout<<showOnList[1]<<std::endl;
    ui->select->clear();
    for(int i=0;i<numberOfShow;i++){
        string s= "Creation time:"+toshow[i].getCreationTime()+"\n"+"End time:"+toshow[i].getEndTime()
                +"\n"+"Note:"+toshow[i].getNote();
       QString qst=QString::fromStdString(s);
       //std::cout<<toshow[i].getShown();
        ui->select->addItem(qst);
        string line="---------------------------------------------------------";
        qst=QString::fromStdString(line);
        ui->select->addItem(qst);
    }

    //std::cout<<"fyou"<<std::endl;
}

DeleteNote::~DeleteNote()
{
    delete ui;
}


void DeleteNote::on_pushButtonDelete_pressed()
{
    QString currentext;
    currentext=ui->select->currentText();
  //  qDebug()<<currentext;
    string text = currentext.toStdString();
    if('C'==text[0]){
        string name = text.substr(14,14);
        std::cout<<name<<std::endl;
        string path="StudyPlan/"+name+".txt";
        std::fstream f (path);
//        if(f){
//            std::cout<<"open"<<std::endl;
//        }
        f.close();
        const char*cpath = path.c_str();
        std::remove(cpath);
        ToolTip *t=new ToolTip;
        t->exec();
}
    else{
        QMessageBox::warning(this, "Warning", "This can not be deleted");
    }
    //updata
    std::vector<StudyPlan>toshow;
    toshow.clear();

    string path = "StudyPlan";
    //_mkdir(path.c_str());
    std::vector<string> nameOfFile;
    StudyPlan::fileSearch(path,nameOfFile);
//  std::cout<<nameOfFile[0]<<std::endl;
    SYSTEMTIME ct;
    GetLocalTime(&ct);
    StudyPlan tmp(ct);
    StudyPlan tmp1(ct);
    int numberOfFile=nameOfFile.size();
    //////
    for(int i=0;i<numberOfFile;i++){
        string pathOfText = path+"/"+nameOfFile[i];
        std::ifstream input(pathOfText,std::ios::in);
        if(input){//警告
            //std::cout<<"fuck"<<std::endl;//debug
        }
        string endtime;
        string note;
        string endy;
        string endm;
        string endd;
        string filename;
        string filepath;
        string iyear;
        string imonth;
        string iday;
        string ihour;
        string iminute;
        string isecond;
        char tmpofchar[500];
        input.getline(tmpofchar,50,'$');
        endtime=tmpofchar;
       // std::cout<<tmpofchar<<std::endl;//debug
        input.getline(tmpofchar,500,'$');
        note=tmpofchar;
       // std::cout<<tmpofchar<<std::endl;//debug
        input.getline(tmpofchar,50,'$');
        endy=tmpofchar;
        input.getline(tmpofchar,50,'$');
        endm=tmpofchar;
        input.getline(tmpofchar,50,'$');
        endd=tmpofchar;
//        input.getline(tmpofchar,50,'$');
//        filename=tmpofchar;
//        input.getline(tmpofchar,50,'$');
//        filepath=tmpofchar;
        input.getline(tmpofchar,50,'$');
        iyear=tmpofchar;
        input.getline(tmpofchar,50,'$');
        imonth=tmpofchar;
        input.getline(tmpofchar,50,'$');
        iday=tmpofchar;
        input.getline(tmpofchar,50,'$');
        ihour=tmpofchar;
        input.getline(tmpofchar,50,'$');
        iminute=tmpofchar;
        input.getline(tmpofchar,50,'$');
        isecond=tmpofchar;
        input.getline(tmpofchar,50,'$');

        input.close();
        //std::cout<<endtime<<" "<<note<<" "<<creationtime<<std::endl;//debug

        tmp.setEndTime(endtime);
        tmp.setNote(note);
        tmp.setEndYear(std::stoi(endy));
        tmp.setEndMonth(std::stoi(endm));
        tmp.setEndDay(std::stoi(endd));
        //

        tmp.setInitialYear(std::stoi(iyear));
        tmp.setInitialMonth(std::stoi(imonth));
        tmp.setInitialDay(std::stoi(iday));
        tmp.setInitialHour(std::stoi(ihour));
        tmp.setInitialMinute(std::stoi(iminute));
        tmp.setInitialSecond(std::stoi(isecond));
        tmp.setFilePath("StudyPlan/");
        tmp.setFileName();
        tmp.setShown();
        tmp.setCreationTime();
        string now = tmp1.getCreationTime().substr(0,8);


            toshow.push_back(tmp);
            //std::cout<<"delete no more"<<toshow[0]<<std::endl;//debug

    }
    int numberOfShow = toshow.size();
    //string showOnList[numberOfShow];
//    for(int i=0;i<numberOfShow;i++){
//        showOnList[i]=toshow[i];
//    }
    //std::sort(toshow.begin(),toshow.end(),cmp);
//    std::cout<<showOnList[1]<<std::endl;
    ui->select->clear();
    for(int i=0;i<numberOfShow;i++){
        string s= "Creation time:"+toshow[i].getCreationTime()+"\n"+"End time:"+toshow[i].getEndTime()
                +"\n"+"Note:"+toshow[i].getNote();
       QString qst=QString::fromStdString(s);
       //std::cout<<toshow[i].getShown();
        ui->select->addItem(qst);
        string line="---------------------------------------------------------";
        qst=QString::fromStdString(line);
        ui->select->addItem(qst);

    }



}
