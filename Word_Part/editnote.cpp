#include "editnote.h"
#include "ui_editnote.h"
#include"StudyPlan.h"
#include<iostream>
#include<string>
#include<QString>
#include<vector>
#include<fstream>
#include<tooltip.h>
#include<QMessageBox>
#include<windows.h>
EditNote::EditNote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditNote)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/studyplan.png"));
    this->setWindowTitle("Edit Note");
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
        string line="--------------------------------------------------------";
        qst=QString::fromStdString(line);
        ui->select->addItem(qst);

    }

    //std::cout<<"fyou"<<std::endl;
}

EditNote::~EditNote()
{
    delete ui;
}

SYSTEMTIME ct;

StudyPlan tmpInEdit(ct);
string pathoftmp="null";
void EditNote::on_pushButtonEdit_pressed()
{
   QString qcurrentext = ui->select->currentText();
   string currentext = qcurrentext.toStdString();
   if('C'==currentext[0]){
       string name = currentext.substr(14,14);
       pathoftmp = "StudyPlan/"+name+".txt";
       std::ifstream input(pathoftmp,std::ios::in);

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

       tmpInEdit.setEndTime(endtime);
       tmpInEdit.setNote(note);
       tmpInEdit.setEndYear(std::stoi(endy));
       tmpInEdit.setEndMonth(std::stoi(endm));
       tmpInEdit.setEndDay(std::stoi(endd));
       //

       tmpInEdit.setInitialYear(std::stoi(iyear));
       tmpInEdit.setInitialMonth(std::stoi(imonth));
       tmpInEdit.setInitialDay(std::stoi(iday));
       tmpInEdit.setInitialHour(std::stoi(ihour));
       tmpInEdit.setInitialMinute(std::stoi(iminute));
       tmpInEdit.setInitialSecond(std::stoi(isecond));
       tmpInEdit.setFilePath("StudyPlan/");
       tmpInEdit.setFileName();
       tmpInEdit.setShown();
       tmpInEdit.setCreationTime();
       //addnote
       string sendtime = tmpInEdit.getEndTime();
       QString qendtime = QString::fromStdString(sendtime);
       QDate qdata = QDate::fromString(qendtime,"yyyyMMdd");
       ui->dateEdit->setDate(qdata);
       string snote= tmpInEdit.getNote();
       QString qnote = QString::fromStdString(snote);
       ui->textEdit->setText(qnote);





   }
   else{
       QMessageBox::warning(this, "Warning", "This can not be edited");
   }
}



void EditNote::on_pushButtonSave_pressed()
{
    //save
    if(pathoftmp!="null"){
    QDate new_qdata = ui->dateEdit->date();
    QString new_qendtime = new_qdata.toString("yyyyMMdd");
    string new_endtime = new_qendtime.toStdString();
    tmpInEdit.setEndTime(new_endtime);
    QString new_qnote = ui->textEdit->toPlainText();
    string new_note = new_qnote.toStdString();
    tmpInEdit.setNote(new_note);

    //ouput

    std::ofstream outcome(pathoftmp,std::ios::out);
    if(outcome)
        std::cout<<"ok"<<std::endl;
    outcome<<tmpInEdit.getEndTime()<<'$';
    outcome<<tmpInEdit.getNote()<<'$';
    //outcome<<tmpInEdit.getCreationTime()<<'$';
    outcome<<tmpInEdit.getEndYear()<<'$';
    outcome<<tmpInEdit.getEndMonth()<<'$';
    outcome<<tmpInEdit.getEndDay()<<'$';
//    outcome<<tmpInEdit.getFileName()<<'$';
//    outcome<<tmpInEdit.getFilePath()<<'$';
    outcome<<tmpInEdit.getInitialYear()<<'$';
    outcome<<tmpInEdit.getInitialMonth()<<'$';
    outcome<<tmpInEdit.getInitialDay()<<'$';
    outcome<<tmpInEdit.getInitialHour()<<'$';
    outcome<<tmpInEdit.getInitialMinute()<<'$';
    outcome<<tmpInEdit.getInitialSecond()<<'$';
   // outcome<<tmpInEdit.getEndTime()<<std::endl;
   //outcome<<tmpInEdit.getNote()<<std::endl;
    outcome.close();


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
        string line="-------------------------------------------------------";
        qst=QString::fromStdString(line);
        ui->select->addItem(qst);
    }

    ToolTip *t = new ToolTip;
    t->exec();
    }
    else{
        QMessageBox::warning(this, "Warning", "You did not select note");
    }
}
