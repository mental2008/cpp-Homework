#ifndef NOTE_H
#define NOTE_H
#include "windows.h"
#include <string>

class Note
{
public:
    Note(SYSTEMTIME);
    Note(int, int, int, int, int, int);
    ~Note();
    int getInitialYear() const;
    int getInitialMonth() const;
    int getInitialDay() const;
    int getInitialHour() const;
    int getInitialMinute() const;
    int getInitialSecond() const;
    void setInitialYear(int);
    void setInitialMonth(int);
    void setInitialDay(int);
    void setInitialHour(int);
    void setInitialMinute(int);
    void setInitialSecond(int);
    std::string initialTimeToString() const;
    virtual void JUSTCLAIMPUREVIRTUAL() = 0;
private:
    int initialYear;
    int initialMonth;
    int initialDay;
    int initialHour;
    int initialMinute;
    int initialSecond;
};

#endif // NOTE_H
