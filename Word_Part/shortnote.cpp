
#include "ShortNote.h"
#include"note.h"
#include<string>
using std::string;
ShortNote::ShortNote(SYSTEMTIME ct):
    Note(ct)
{
    setCreationTime();
    endTime="";
    note="";
    endDay="";
    endMonth="";
    endYear="";
    setFileName();
}

ShortNote::~ShortNote()
{

}

string ShortNote::getCreationTime()
{
    return creationTime;
}

std::__cxx11::string ShortNote::getEndTime()
{
    return endTime;
}

std::__cxx11::string ShortNote::getNote()
{
    return note;
}

std::__cxx11::string ShortNote::getEndYear()
{
    return endYear;

}

std::__cxx11::string ShortNote::getEndMonth()
{
    return endMonth;
}

std::__cxx11::string ShortNote::getEndDay()
{
    return endDay;
}

std::__cxx11::string ShortNote::getFileName()
{
    return fileName;
}

std::__cxx11::string ShortNote::getFilePath()
{
    return filePath;
}

void ShortNote::setCreationTime()
{
    creationTime = initialTimeToString();
}

void ShortNote::setEndTime(string endtime)
{
    endTime=endtime;
}

void ShortNote::setNote(std::__cxx11::string note)
{
    this->note=note;
}

void ShortNote::setEndYear(int endyear)
{
    string s =std::to_string(endyear);
    this->endYear=s;
}

void ShortNote::setEndMonth(int endmonth)
{
    string s =std::to_string(endmonth);
    this->endMonth=s;
}

void ShortNote::setEndDay(int endday)
{
    string s = std::to_string(endday);
    this->endDay=s;
}

void ShortNote::setFileName()
{
    fileName=getFilePath()+getCreationTime()+".txt";
}

void ShortNote::setFilePath(std::__cxx11::string filepath)
{
    filePath=filepath;
}


