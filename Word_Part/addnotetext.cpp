#include "addnotetext.h"
#include "ui_addnotetext.h"
#include<iostream>

using std::string;
addNoteText::addNoteText(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNoteText)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Text");
    this->setWindowIcon(QIcon(":/new/prefix1/KnowledgeIcon.png"));

//    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(buttonBox_accepted()));

}

addNoteText::~addNoteText()
{
    delete ui;
}

void addNoteText::on_pushButton_2_pressed()
{
//    cout << (ui->lineEdit->text()).toStdString() << endl;
//    QString qsTitle;
//    QString qsContent;
//    qsTitle = ui->lineEdit->text();
//    qsContent = ui->textEdit->toPlainText();
//    if( (qsTitle!="") && (qsContent != "") ){
//        cout << qsTitle.toStdString() << "  " << qsContent.toStdString() << endl;
//        noteText temp;
//        temp.setqsTitle(qsTitle);
//        temp.setqsContent(qsContent);

//        this->close();
//    }
//    else{
//        cout << "empty text" << endl;
//    }
//    cout << qsTitle.toStdString() << endl;
}



void addNoteText::buttonBox_accepted()
{
//    emit sendData(true);
}

void addNoteText::on_pushButton_2_clicked()
{
 //   cout << (ui->lineEdit->text()).toStdString() << endl;
    string qsTitle;
//    string qsContent;
    string content ;
    qsTitle = ui->lineEdit->text().toStdString();
    content = ui->textEdit->toPlainText().toStdString();
    if( (qsTitle != "") && (content != "") ){

        SYSTEMTIME ct ;
        GetLocalTime(&ct);
        noteKnowlodge temp(ct);
        temp.setqsTitle(qsTitle);
//        temp.setqsContent(qsContent);
        temp.setContent(content);
        temp.setType("text");
        emit sendData(temp);
        this->close();

    }
    else{
        cout << "empty txt" << endl;
    }
//    cout << qsTitle << endl;
}
