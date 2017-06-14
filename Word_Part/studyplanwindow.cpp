#include "studyplanwindow.h"
#include "ui_studyplanwindow.h"
#include<sstream>
#include"StudyPlan.h"
#include"AddNoteWindow.h"
#include"fstream"
#include<algorithm>
#include"messagewindow.h"
#include<QDebug>
#include"deletenote.h"
#include"editnote.h"
#include"showallnote.h"
#include"choosewindow.h"
using std::string;
using std::stringstream;
//QString globaldata;
StudyPlanWindow::StudyPlanWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudyPlanWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/studyplan.png"));
    this->setWindowTitle("StudyPlanWindow");
}

StudyPlanWindow::~StudyPlanWindow()
{
    delete ui;
}

void StudyPlanWindow::closeEvent(QCloseEvent *event)
{
    this->close();
    ChooseWindow *choosewindow = new ChooseWindow;
    choosewindow->show();
}

void StudyPlanWindow::on_AddNote_clicked()
{
    AddNoteWindow *a = new AddNoteWindow;
    a->show();

}

 bool cmp(StudyPlan x, StudyPlan y)
{
    return x.getShown() < y.getShown();
}
std::vector<StudyPlan> toshow;
void StudyPlanWindow::on_Refresh_pressed()
{
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
        if(tmp.getEndTime()>=now){

            toshow.push_back(tmp);
            //std::cout<<"delete no more"<<toshow[0]<<std::endl;//debug
        }
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

       QString qst=QString::fromStdString(toshow[i].getShown());
       //std::cout<<toshow[i].getShown();
        ui->ListOfNote->addItem(qst);
        string line="-----------------------------------------------";
        qst=QString::fromStdString(line);
        ui->ListOfNote->addItem(qst);
    }

    //std::cout<<"fyou"<<std::endl;
}









void StudyPlanWindow::on_ListOfNote_itemDoubleClicked(QListWidgetItem *item)
{

    int i = ui->ListOfNote->currentRow();
    if(i%2==0){
    string shown = toshow[i/2].getShown();

//std::cout<<i<<std::endl;
    QString qst = QString::fromStdString(shown);
    // qDebug()<<qst;

//     globaldata=qst;
     MessageWindow *message = new MessageWindow;
    connect(this,SIGNAL(sendData(QString)),message,SLOT(receiveData(QString)));
     emit sendData(qst);
    message->show();

}
}

void StudyPlanWindow::on_DeleteNote_pressed()
{
    DeleteNote *de=new DeleteNote;
    de->exec();
}

void StudyPlanWindow::on_EditNote_pressed()
{
    EditNote *e = new EditNote;
    e->exec();
}

void StudyPlanWindow::on_ListAllNote_pressed()
{
    ShowAllNote *s = new ShowAllNote;
    s->exec();
}
