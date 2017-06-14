#ifndef SHORTNOTE_H
#define SHORTNOTE_H
#include"note.h"
using std::string;
class ShortNote:public Note
{
private:
    string creationTime;
    string endTime;
    string note;
    string endYear;
    string endMonth;
    string endDay;
    string fileName;
    string filePath;
public:
    ShortNote(SYSTEMTIME);
    ~ShortNote();
    std::string getCreationTime();
    std::string getEndTime();
    std::string getNote();
    string getEndYear();
    string getEndMonth();
    string getEndDay();
    string getFileName();
    string getFilePath();
    void setCreationTime();
    void setEndTime(string);
    void setNote(string);
    void setEndYear(int);
    void setEndMonth(int);
    void setEndDay(int);
    void setFileName();
    void setFilePath(string);
};

#endif // SHORTNOTE_H
