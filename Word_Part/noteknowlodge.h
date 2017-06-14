#ifndef NOTEKNOWLODGE_H
#define NOTEKNOWLODGE_H
#include"note.h"
#include<string>
using namespace std;
class noteKnowlodge: public Note
{

public:
    noteKnowlodge( SYSTEMTIME );

    noteKnowlodge(int, int, int, int, int, int,string,string,bool);

    ~noteKnowlodge();

virtual void setqsTitle( string ) ;

virtual void setqsContent( string ) ;

virtual void setType( bool );

virtual void setContent( string );

virtual string getqsTitle() ;

virtual string getqsContent() ;

virtual string getContent();

virtual bool getisText();

virtual void JUSTCLAIMPUREVIRTUAL() ;

private:

    string title;
    string qscontent ;
    string content;
    bool isText;

};

#endif // NOTEKNOWLODGE_H
