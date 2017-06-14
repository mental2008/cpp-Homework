#include "noteknowlodge.h"
#include<iostream>

//using namespace std;
noteKnowlodge::noteKnowlodge(SYSTEMTIME ct ) :
    Note(ct)
{

}

noteKnowlodge::noteKnowlodge(int Year, int Month, int Day, int Hour, int Minute, int Second,
                             string Title , string Content , bool Is ):
    Note(Year, Month,  Day,  Hour,  Minute,  Second)
{

    setqsTitle(Title);
    setqsContent( Content );
    setType(Is);

}

noteKnowlodge::~noteKnowlodge()
{

}


void noteKnowlodge::setqsTitle(string s )
{
    title = s ;
}

void noteKnowlodge::setqsContent(string s )
{
    qscontent = s ;
}

void noteKnowlodge::setContent(string s )
{
    content = s ;
}

void noteKnowlodge::setType( bool  b )
{
    if( b ){
        isText = true ;
    }
    else isText = false ;
}


string noteKnowlodge::getqsTitle()
{
    return title ;
}

string noteKnowlodge::getqsContent()
{
    return qscontent;
}

string noteKnowlodge::getContent()
{
    return content ;
}

bool noteKnowlodge::getisText()
{
    return isText;
}

void noteKnowlodge::JUSTCLAIMPUREVIRTUAL()
{
    ;
}


