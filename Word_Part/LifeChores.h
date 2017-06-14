#ifndef LIFECHORES_H
#define LIFECHORES_H
#include<string>
#include<time.h>
#include"ShortNote.h"
#include<windows.h>
#include<io.h>
#include<direct.h>
#include<iostream>
#include<vector>
using std::string;

class LifeChores:public ShortNote
{
//private:
//    string creationTime;//到时候每个日期对应一个框架
//    string endTime;
//    string note;
private:
    string shown;
public:
    LifeChores(SYSTEMTIME);
    //继承
    //string GetSystemTime();
    //void SetCreationTime();
    //void setEndTime(string,string,string);
    //void setNote(string);
    //string GetCreationTime();
    //string getEndTime();
    //string getNote();
    void setShown();
    string getShown();
    void JUSTCLAIMPUREVIRTUAL();
    static void fileSearch(string,std::vector<string>&);
};

#endif // LIFECHORES_H
