#include "messagewindowc.h"
#include "ui_messagewindowc.h"
#include"LifeChoreswindow.h"
#include<QDebug>
#include<iostream>

//extern QString globaldata;
MessageWindowC::MessageWindowC(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::MessageWindowC)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/lifechores.png"));

    this->setWindowTitle("Detail");
//    LifeChoresWindow *s=new LifeChoresWindow();
//    connect(s,SIGNAL(sendData(QString)),this,SLOT(receiveData(QString)));

    //ui->label->setText(globaldata);


}

MessageWindowC::~MessageWindowC()
{
    delete ui;
}

void MessageWindowC::receiveData(QString data)
{
    ui->textBrowser->setText(data);
//    qDebug()<<data;
//    std::cout<<"wtf"<<std::endl;
}
