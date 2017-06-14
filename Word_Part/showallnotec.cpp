#include "showallnotec.h"
#include "ui_showallnotec.h"
#include<vector>
//#include"LifeChores.h"
#include<string>
#include<fstream>
#include<QString>
ShowAllNoteC::ShowAllNoteC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowAllNoteC)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/lifechores.png"));

    this->setWindowTitle("Show All Notes");
    std::vector<LifeChores> toshow;
    toshow.clear();

    string path = "LifeChores";
    //_mkdir(path.c_str());
    std::vector<string> nameOfFile;
    LifeChores::fileSearch(path,nameOfFile);
//  std::cout<<nameOfFile[0]<<std::endl;
    SYSTEMTIME ct;
    GetLocalTime(&ct);
    LifeChores tmp(ct);
    LifeChores tmp1(ct);
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
        //if(tmp.getEndTime()>=now){

            toshow.push_back(tmp);
            //std::cout<<"delete no more"<<toshow[0]<<std::endl;//debug
       // }
    }
    int numberOfShow = toshow.size();
    //string showOnList[numberOfShow];
//    for(int i=0;i<numberOfShow;i++){
//        showOnList[i]=toshow[i];
//    }
    std::sort(toshow.begin(),toshow.end(),cmp);
//    std::cout<<showOnList[1]<<std::endl;
    ui->ListOfNote->clear();
    for(int i=0;i<numberOfShow;i++){
       string s= "Creation time:"+toshow[i].getCreationTime()+"\n"+"End time:"+toshow[i].getEndTime()
                +"\n"+"Note:"+toshow[i].getNote()+"\n";
       QString qst=QString::fromStdString(s);
       //std::cout<<toshow[i].getShown();
        ui->ListOfNote->addItem(qst);
//        string line="-----------------------------------------------------------------------------";
//        qst=QString::fromStdString(line);
//        ui->ListOfNote->addItem(qst);

    }

    //std::cout<<"fyou"<<std::endl;
}


ShowAllNoteC::~ShowAllNoteC()
{
    delete ui;
}
