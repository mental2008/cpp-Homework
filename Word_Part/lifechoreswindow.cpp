#include "lifechoreswindow.h"
#include "ui_lifechoreswindow.h"
#include<sstream>
#include"LifeChores.h"
#include"AddNoteWindowc.h"
#include"fstream"
#include<algorithm>
#include"messagewindowc.h"
#include<QDebug>
#include"deletenotec.h"
#include"editnotec.h"
#include"showallnotec.h"
#include"choosewindow.h"
using std::string;
using std::stringstream;
//QString globaldata;
LifeChoresWindow::LifeChoresWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LifeChoresWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/lifechores.png"));

    this->setWindowTitle("LifeChoresWindow");
}

void LifeChoresWindow::closeEvent(QCloseEvent *event)
{
    this->close();
    ChooseWindow *choosewindow = new ChooseWindow;
    choosewindow->show();
}

LifeChoresWindow::~LifeChoresWindow()
{
    delete ui;
}

void LifeChoresWindow::on_AddNote_clicked()
{
    AddNoteWindowC *a = new AddNoteWindowC;
    a->show();

}

 bool cmp(LifeChores x, LifeChores y)
{
    return x.getShown() < y.getShown();
}
std::vector<LifeChores> toshowc;
void LifeChoresWindow::on_Refresh_pressed()
{
    toshowc.clear();

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
        if(tmp.getEndTime()>=now){

            toshowc.push_back(tmp);
            //std::cout<<"delete no more"<<toshowc[0]<<std::endl;//debug
        }
    }
    int numberOfShow = toshowc.size();
    //string showOnList[numberOfShow];
//    for(int i=0;i<numberOfShow;i++){
//        showOnList[i]=toshowc[i];
//    }
    std::sort(toshowc.begin(),toshowc.end(),cmp);
//    std::cout<<showOnList[1]<<std::endl;
    ui->ListOfNote->clear();
    for(int i=0;i<numberOfShow;i++){

       QString qst=QString::fromStdString(toshowc[i].getShown());
       //std::cout<<toshowc[i].getShown();
        ui->ListOfNote->addItem(qst);
        string line="-----------------------------------------------";
        qst=QString::fromStdString(line);
        ui->ListOfNote->addItem(qst);
    }

    //std::cout<<"fyou"<<std::endl;
}









void LifeChoresWindow::on_ListOfNote_itemDoubleClicked(QListWidgetItem *item)
{

    int i = ui->ListOfNote->currentRow();
    if(i%2==0){
    string shown = toshowc[i/2].getShown();

//std::cout<<i<<std::endl;
    QString qst = QString::fromStdString(shown);
    // qDebug()<<qst;

//     globaldata=qst;
     MessageWindowC *message = new MessageWindowC();
    connect(this,SIGNAL(sendData(QString)),message,SLOT(receiveData(QString)));
     emit sendData(qst);
    message->show();

}
}

void LifeChoresWindow::on_DeleteNote_pressed()
{
    DeleteNoteC *de=new DeleteNoteC;
    de->exec();
}

void LifeChoresWindow::on_EditNote_pressed()
{
    EditNoteC *e = new EditNoteC;
    e->exec();
}

void LifeChoresWindow::on_ListAllNote_pressed()
{
    ShowAllNoteC *s = new ShowAllNoteC;
    s->exec();
}
