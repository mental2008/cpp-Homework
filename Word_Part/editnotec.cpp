#include "editnotec.h"
#include "ui_editnotec.h"
#include"LifeChores.h"
#include<iostream>
#include<string>
#include<QString>
#include<vector>
#include<fstream>
#include<tooltipc.h>
#include<windows.h>
#include<QMessageBox>
EditNoteC::EditNoteC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditNoteC)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/lifechores.png"));

    this->setWindowTitle("Edit Note");
    std::vector<LifeChores>toshow;
    toshow.clear();

    string path = "LifeChores";
    //_mkdir(path.c_str());
    std::vector<string> nameOfFile;
    LifeChores::fileSearch(path,nameOfFile);
//  std::cout<<nameOfFile[0]<<std::endl;
    SYSTEMTIME ctc;
    GetLocalTime(&ctc);
    LifeChores tmp(ctc);
    LifeChores tmp1(ctc);
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
        tmp.setFilePath("LifeChores/");
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

EditNoteC::~EditNoteC()
{
    delete ui;
}

SYSTEMTIME ctc;

LifeChores tmpInEditc(ctc);
string pathoftmpc="null";
void EditNoteC::on_pushButtonEdit_pressed()
{
   QString qcurrentext = ui->select->currentText();
   string currentext = qcurrentext.toStdString();
   if('C'==currentext[0]){
       string name = currentext.substr(14,14);
       pathoftmpc = "LifeChores/"+name+".txt";
       std::ifstream input(pathoftmpc,std::ios::in);

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

       tmpInEditc.setEndTime(endtime);
       tmpInEditc.setNote(note);
       tmpInEditc.setEndYear(std::stoi(endy));
       tmpInEditc.setEndMonth(std::stoi(endm));
       tmpInEditc.setEndDay(std::stoi(endd));
       //

       tmpInEditc.setInitialYear(std::stoi(iyear));
       tmpInEditc.setInitialMonth(std::stoi(imonth));
       tmpInEditc.setInitialDay(std::stoi(iday));
       tmpInEditc.setInitialHour(std::stoi(ihour));
       tmpInEditc.setInitialMinute(std::stoi(iminute));
       tmpInEditc.setInitialSecond(std::stoi(isecond));
       tmpInEditc.setFilePath("LifeChores/");
       tmpInEditc.setFileName();
       tmpInEditc.setShown();
       tmpInEditc.setCreationTime();
       //addnote
       string sendtime = tmpInEditc.getEndTime();
       QString qendtime = QString::fromStdString(sendtime);
       QDate qdata = QDate::fromString(qendtime,"yyyyMMdd");
       ui->dateEdit->setDate(qdata);
       string snote= tmpInEditc.getNote();
       QString qnote = QString::fromStdString(snote);
       ui->textEdit->setText(qnote);





   }
   else{
       QMessageBox::warning(this, "Warning", "This can not be edited");
   }
}



void EditNoteC::on_pushButtonSave_pressed()
{
    //save
    if(pathoftmpc!="null"){
    QDate new_qdata = ui->dateEdit->date();
    QString new_qendtime = new_qdata.toString("yyyyMMdd");
    string new_endtime = new_qendtime.toStdString();
    tmpInEditc.setEndTime(new_endtime);
    QString new_qnote = ui->textEdit->toPlainText();
    string new_note = new_qnote.toStdString();
    tmpInEditc.setNote(new_note);

    //ouput

    std::ofstream outcome(pathoftmpc,std::ios::out);
    if(outcome)
       // std::cout<<"ok"<<std::endl;
    outcome<<tmpInEditc.getEndTime()<<'$';
    outcome<<tmpInEditc.getNote()<<'$';
    //outcome<<tmpInEditc.getCreationTime()<<'$';
    outcome<<tmpInEditc.getEndYear()<<'$';
    outcome<<tmpInEditc.getEndMonth()<<'$';
    outcome<<tmpInEditc.getEndDay()<<'$';
//    outcome<<tmpInEditc.getFileName()<<'$';
//    outcome<<tmpInEditc.getFilePath()<<'$';
    outcome<<tmpInEditc.getInitialYear()<<'$';
    outcome<<tmpInEditc.getInitialMonth()<<'$';
    outcome<<tmpInEditc.getInitialDay()<<'$';
    outcome<<tmpInEditc.getInitialHour()<<'$';
    outcome<<tmpInEditc.getInitialMinute()<<'$';
    outcome<<tmpInEditc.getInitialSecond()<<'$';
   // outcome<<tmpInEditc.getEndTime()<<std::endl;
   //outcome<<tmpInEditc.getNote()<<std::endl;
    outcome.close();


    std::vector<LifeChores>toshow;
    toshow.clear();

    string path = "LifeChores";
    //_mkdir(path.c_str());
    std::vector<string> nameOfFile;
    LifeChores::fileSearch(path,nameOfFile);
//  std::cout<<nameOfFile[0]<<std::endl;
    SYSTEMTIME ctc;
    GetLocalTime(&ctc);
    LifeChores tmp(ctc);
    LifeChores tmp1(ctc);
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
        tmp.setFilePath("LifeChores/");
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

    ToolTipC *t = new ToolTipC;
    t->exec();
    }
    else{
        QMessageBox::warning(this,"Warning","You did not select note");
    }
}
