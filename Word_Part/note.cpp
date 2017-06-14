#include "note.h"
#include "windows.h"
#include <stdexcept>
#include <cstdio>

Note::Note(SYSTEMTIME ct)
{
    setInitialYear(ct.wYear);
    setInitialMonth(ct.wMonth);
    setInitialDay(ct.wDay);
    setInitialHour(ct.wHour);
    setInitialMinute(ct.wMinute);
    setInitialSecond(ct.wSecond);
}

Note::Note(int Year, int Month, int Day, int Hour, int Minute, int Second)
{
    setInitialYear(Year);
    setInitialMonth(Month);
    setInitialDay(Day);
    setInitialHour(Hour);
    setInitialMinute(Minute);
    setInitialSecond(Second);
}

Note::~Note()
{

}

void Note::setInitialYear(int Year)
{
    initialYear = Year;
}

void Note::setInitialMonth(int Month)
{
    initialMonth = Month;
}

void Note::setInitialDay(int Day)
{
    initialDay = Day;
}

void Note::setInitialHour(int Hour)
{
    initialHour = Hour;
}

void Note::setInitialMinute(int Minute)
{
    initialMinute = Minute;
}

void Note::setInitialSecond(int Second)
{
    initialSecond = Second;
}

int Note::getInitialYear() const
{
    return initialYear;
}

int Note::getInitialMonth() const
{
    return initialMonth;
}

int Note::getInitialDay() const
{
    return initialDay;
}

int Note::getInitialHour() const
{
    return initialHour;
}

int Note::getInitialMinute() const
{
    return initialMinute;
}

int Note::getInitialSecond() const
{
    return initialSecond;
}

std::string Note::initialTimeToString() const
{
    std::string str;
    char ch[20];
    sprintf(ch, "%04d%02d%02d%02d%02d%02d", initialYear, initialMonth, initialDay, initialHour, initialMinute, initialSecond);
    str = ch;
    return str;
}
