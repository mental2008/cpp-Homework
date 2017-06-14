#include "studytextpicture.h"
#include "ui_studytextpicture.h"
#include <string>
#include<QString>
#include<iostream>
#include<QStringList>
#include<QPainter>
#include<QMovie>
#include<QLabel>
#include <QBitmap>
#include<QWidget>
#include <qevent.h>
#include <QPixmap>
#include<QFileDialog>
#include<QMessageBox>
#include<QFile>
#include"io.h"
#include"direct.h"
#include<fstream>
#include <cstdio>
#include <cstdlib>
#include<QInputDialog>
#include <QIcon>
#include "choosewindow.h"
using namespace std;
noteTextPicture::noteTextPicture(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studyTextPicture)
{

    ui->setupUi(this);
    file_search("studyKnowlodge");

    this->setWindowTitle("Knowledge");
    this->setWindowIcon(QIcon(":/new/prefix1/KnowledgeIcon.png"));

//    addNoteText *tryy = new addNoteText();
//    connect(tryy,SIGNAL(sendData(bool)),this,SLOT(receiveData(bool)) );
    updateTextPicturesList();
    this->setMouseTracking(true);
//    QMovie *movie = new QMovie(":/new/prefix1/try.gif");
//    ui->toolIcon->setMovie(movie);
//    movie->start();

    ui->tool->installEventFilter(this);
    ui->littleToolButton->installEventFilter(this);
    ui->pictureViewLabel->installEventFilter(this);
 //   updateTextPicturesView();

    ui->toolFrame->setVisible(false);
    ui->toolFrame->setEnabled(false);
    SYSTEMTIME t;
    GetLocalTime(&t);
    time = t.wHour*3600+t.wMinute*60+t.wSecond+t.wMilliseconds*(1.0/1000);
//    cout << "time : " << time << endl;

//    pictureMatterIcon();

    path=":/new/prefix1/history.png";
    image.load(path);
    img.load(path);
    imageWidth = image.width();
    imageHeight = image.height();
//    qreal imageQrealWidth = img.width();
//    qreal imageQrealHeight = img.height();
//    cout << "image width height : " << imageWidth << "  " << imageHeight << endl;
//    cout << "image qreal width heiht : " << imageQrealWidth << "  " << imageQrealHeight << endl;
    QMatrix qmatrix;
//    qmatrix.rotate(90);
//    img = img.transformed(qmatrix,Qt::FastTransformation);
//    img = img.scaled(imageWidth*2,imageHeight*2,Qt::KeepAspectRatio);
    ui->pictureViewLabel->setGeometry(300,100,imageWidth ,imageHeight);
    ui->pictureViewLabel->setPixmap(img);


//    ui->pictureViewLabel->setEnabled(false);
    ui->pictureViewLabel->setVisible(false);
    ui->narrowButton->setVisible(false);
    ui->enlageButton->setVisible(false);
    ui->counterclockwiseButton->setVisible(false);
    ui->clockwiseButton->setVisible(false);

    ui->textBrowser->setVisible(false);

//    cout << "构造函数里面的 needToshow.size() " << needToshow.size() << endl;

}



//结束构造函数

noteTextPicture::~noteTextPicture()
{
    delete ui;
}

void noteTextPicture::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton button;
    button = QMessageBox::question(this,tr("Exit program"),
             QString(tr("Warning: do you want to exit?")),
             QMessageBox::Yes | QMessageBox::No );

    if(button == QMessageBox::No){
        event->ignore();
    }
    else if( button == QMessageBox::Yes){
        ChooseWindow *choosewindow = new ChooseWindow;
        choosewindow->show();
        event->accept();
    }
    cout << "exit the program!" << endl;

}

void noteTextPicture::mouseMoveEvent(QMouseEvent *event)
{

}

void noteTextPicture::mousePressEvent(QMouseEvent * pe)
{

}

void noteTextPicture::mouseReleaseEvent(QMouseEvent * re)
{

    if( isPictureViewPress ) isPictureViewPress = false ;
}

void noteTextPicture::updateMouseXY( )
{

    mouseX = QCursor::pos().x() ;
    mouseY = QCursor::pos().y() ;

}

void noteTextPicture::updateTextPicturesList()
{

    needToshow.clear();
    ui->textPicturesList->clear();
    file_search("studyKnowlodge");
    for( int i  = 0 ; i < needToshow.size() ; ++i ){

        noteKnowlodge temp  = needToshow[i];
        QString qs = QString::fromStdString(temp.getqsTitle());
//        cout << "temp.getqsTitle() :" << temp.getqsTitle() << " temp.getqsContent():  " << temp.getqsContent() << endl;
        ui->textPicturesList->addItem(qs);

    }

}

void noteTextPicture::file_search(string path)
{
    struct _finddata_t filefind;

    string curr = path + "\\*.*";
    int done = 0, handle;

    if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)return;

    while (!(done = _findnext(handle, &filefind)))
    {
        if (!strcmp(filefind.name, ".."))continue;

        if ((_A_SUBDIR != filefind.attrib))
        {
//			//打印文件名
//			cout << filefind.name << endl;
            string path = "studyKnowlodge/";
            path = path + filefind.name;
//            cout <<  "path :" << path << endl;
            ifstream file( path , ios::in);
            if(!file){
                cerr << "File open error" << endl;
                exit(EXIT_FAILURE);
            }

            char ch ;
            char str[1000];
            int Year;
            int Month;
            int Day;
            int Hour;
            int Minute;
            int Second;

            string Title ;
            string Content ;
            bool Is ;

            file>>Year;
            file>>Month;
            file>>Day ;
            file>>Hour;
            file>>Minute;
            file>>Second;
            file.get(ch);
            file.getline(str,1000);
            Title = str;

            file.getline(str,1000);
            Content = str ;
//            cout << Content << endl;
            file >> Is;

            noteKnowlodge temp(Year,Month, Day, Hour, Minute, Second,
                                Title , Content , Is);
            needToshow.push_back(temp);

//            cout << "temp.getqsTitle() :" << temp.getqsTitle() << " temp.getqsContent():  " << temp.getqsContent() << endl;

            file.close();
        }
    }
    //关闭句柄
    _findclose(handle);
}

void noteTextPicture::pictureMatterIcon()
{
    ui->narrowButton->setVisible(true);
    ui->enlageButton->setVisible(true);
    ui->clockwiseButton->setVisible(true);
    ui->counterclockwiseButton->setVisible(true);
    ui->pictureViewLabel->setVisible(true);

    ui->textBrowser->setVisible(false);
}

void noteTextPicture::textMatterIcon()
{
    ui->narrowButton->setVisible(false);
    ui->enlageButton->setVisible(false);
    ui->clockwiseButton->setVisible(false);
    ui->counterclockwiseButton->setVisible(false);
    ui->pictureViewLabel->setVisible(false);

    ui->textBrowser->setVisible(true);
}

//鼠标过滤事件

bool noteTextPicture::eventFilter(QObject *object, QEvent *evt )
{

    static QPoint lastQCursorPos ;


    if(evt->type() == QEvent::MouseButtonPress)
    {



        QMouseEvent* e = static_cast<QMouseEvent*>(evt);
//        if(ui->tool->rect().contains(e->pos()) &&
//            (e->button() == Qt::LeftButton))
//        {
//            cout << "ui->tool->rect().contains(e->pos()) &&"
//                    "(e->button() == Qt::LeftButton))"<< endl;
//            lastPntOfTool = e->pos();
//            isTool = true;
//        }

//        if(ui->toolFrame->rect().contains(e->pos()) &&
//            (e->button() == Qt::LeftButton))
//        {
//            cout << "ui->toolFrame->rect().contains(e->pos()) &&"
//                    "(e->button() == Qt::LeftButton))"<< endl;
//            lastPntOfLittleTool = e->pos();
//            islittleTool = true;
//        }

        QPoint qpoint = e->pos();
         if( noteTextPicture::isQcursorInPictureView( qpoint ) &&
                 (e->button() == Qt::LeftButton) && !isTool && !islittleTool ){
               lastQCursorPos = e->pos();
              isPictureViewPress = true;
         }

    }
    else if(evt->type() == QEvent::MouseMove)
    {
        updateMouseXY();
        QMouseEvent* e = static_cast<QMouseEvent*>(evt);

        if( isTool ){
            int dx = e->pos().x();
            int dy=e->pos().y();
            int finalx = ui->tool->x()+dx ;
            int finaly = ui->tool->y()+dy ;
            if( finalx >= 0 && finalx <= 800-20 && finaly >= 0 && finaly <= 500 -20 ){
                ui->tool->move(finalx-15,finaly-15);
                ui->toolIcon->move( finalx-15 , finaly-15);
            }
        }

        if( islittleTool ){
            int dx = e->pos().x();
            int dy=e->pos().y();
            int finalx = ui->toolFrame->x()+dx ;
            int finaly = ui->toolFrame->y()+dy ;
            if( finalx >= 0 && finalx <= 800-80 && finaly >= 20 && finaly <= 500 -80 ){
                ui->toolFrame->move( finalx -15 , finaly-15 );
            }
        }

        if( isPictureViewPress && !islittleTool && !isTool ){
            int dx = e->pos().x() - lastQCursorPos.x();
            int dy = e->pos().y() - lastQCursorPos.y();
            int finalx = dx + ui->pictureViewLabel->pos().x();
            int finaly = dy + ui->pictureViewLabel->pos().y();
 //           cout << "pictureViewLabel move x y : " << finalx << "  " << finaly << endl;
            ui->pictureViewLabel->move( finalx , finaly );

        }

    }
    else if(evt->type() == QEvent::MouseButtonRelease )
    {
        if( isTool ) isTool = false;
        if( islittleTool ) islittleTool = false;
        if( isPictureViewPress ) isPictureViewPress = false ;

    }
    return false;
}

bool noteTextPicture::isQcursorInPictureView(QPoint qpoint)
{
    updateMouseXY();
//    cout << "this-> x y : " << this->x() << "  " << this->y() << endl;
    int x = ui->pictureViewLabel->pos().x() + this->x() + 300- 275  ;
    int y = ui->pictureViewLabel->pos().y() + this->y() + 140 - 83  ;
    int maxx = x + ui->pictureViewLabel->width();
    int maxy = y + ui->pictureViewLabel->height();
 //   cout << " x  y : " << x << " " << y << endl;
 //   cout << "maxx maxy : " << maxx << "  " << maxy << endl;
//    cout << "mouseX mouseY : " << mouseX << "  " << mouseY << endl;
    if( mouseX >= x && mouseX <= maxx && mouseY >= y && mouseY <= maxy ) return true ;
    else return false ;

}

void noteTextPicture::on_tool_pressed()
{

//    cout << "ui->tool->rect().contains(e->pos()) &&"
//            "(e->button() == Qt::LeftButton))"<< endl;
//    lastPntOfTool = QCursor::pos();

    isTool = true;
//    cout << toolButtonTime++ << endl;
    SYSTEMTIME t;
    GetLocalTime(&t);
    double nowtime = t.wHour*3600+t.wMinute*60+t.wSecond+t.wMilliseconds*(1.0/1000);
 //   cout << "nowtime: " << nowtime << " time: " << time << endl;
    if( nowtime - time < 0.2 ){
        displayTool();
    }
    time = nowtime;

}

void noteTextPicture::on_littleToolButton_pressed( )
{
//    cout << "ui->toolFrame->rect().contains(e->pos()) &&"
//            "(e->button() == Qt::LeftButton))"<< endl;
    islittleTool = true;
//    cout << toolButtonTime++ << endl;
    SYSTEMTIME t;
    GetLocalTime(&t);
    double nowtime = t.wHour*3600+t.wMinute*60+t.wSecond+t.wMilliseconds*(1.0/1000);
//    cout << "nowtime: " << nowtime << " time: " << time << endl;
    if( nowtime - time < 0.2 ){
        displayTool();
    }
    time = nowtime;
}

void noteTextPicture::displayTool()
{
    if( isDisplayTool ){

        ui->toolFrame->setVisible(true);
        ui->toolFrame->setEnabled(true);
        ui->tool->setVisible(false);
        ui->tool->setEnabled(false);
        ui->toolIcon->setVisible(false);
        ui->toolIcon->setEnabled(false);
        int x = ui->tool->pos().x() ;
        int y = ui->tool->pos().y() ;
        ui->toolFrame->move( x - 35 , y - 35 );
//        cout << "now toolFrame" << endl;
    }
    else{
        ui->tool->setVisible(true);
        ui->tool->setEnabled(true);
        ui->toolIcon->setVisible(true);
        ui->toolIcon->setEnabled(true);
        ui->toolFrame->setVisible(false);
        ui->toolFrame->setEnabled(false);
        int x = ui->toolFrame->pos().x() ;
        int y = ui->toolFrame->pos().y() ;

        ui->tool->move( x +35, y +35);
        ui->toolIcon->move(x+35,y+35);
//        cout << "now tool" << endl;
    }

    isDisplayTool = !isDisplayTool;
}

void noteTextPicture::on_counterclockwiseButton_pressed()
{
    QMatrix qmatrix;
    qmatrix.rotate(-90);
    img = img.transformed(qmatrix,Qt::FastTransformation);
    ui->pictureViewLabel->setPixmap(img);
}

void noteTextPicture::on_clockwiseButton_pressed()
{
    QMatrix qmatrix;
    qmatrix.rotate(90);
    img = img.transformed(qmatrix,Qt::FastTransformation);
    ui->pictureViewLabel->setPixmap(img);
}

void noteTextPicture::on_enlageButton_pressed()
{

    imageHeight++;
    imageWidth++;
    img = image.scaled(imageWidth,imageHeight,Qt::KeepAspectRatio);
    ui->pictureViewLabel->setPixmap(img);
    ui->pictureViewLabel->setFixedSize(imageWidth,imageHeight);
//    ui->pictureViewLabel->resize(imageWidth,imageHeight);
}

void noteTextPicture::on_narrowButton_pressed()
{
    imageHeight--;
    imageWidth--;
    img = image.scaled(imageWidth,imageHeight,Qt::KeepAspectRatio);
    ui->pictureViewLabel->setPixmap(img);
    ui->pictureViewLabel->setFixedSize(imageWidth,imageHeight);
//    ui->pictureViewLabel->resize(imageWidth,imageHeight);
}

void noteTextPicture::on_addTextButton_pressed()
{
    addNoteText *addNoteTextWindow = new addNoteText();
    connect(addNoteTextWindow,SIGNAL(sendData(noteKnowlodge)),this,SLOT(receiveData(noteKnowlodge)) );
    addNoteTextWindow->exec();
//    addNoteTextWindow.show();
//    addNoteTextWindow.isUpdate();
}

void noteTextPicture::receiveData( noteKnowlodge temp )
{

    string path = "studyKnowlodge";
    string textContentPath = "studyContentText" ;

    if( access(path.c_str(), 0) == 0 ){
//        cout << "qfile.exists()" << endl;
    }
    else{
//       cout << "!qfile.exists()" << endl;
       mkdir(path.c_str());
    }

    if( access(textContentPath.c_str(), 0) == 0 ){
//        cout << "qfile.exists()" << endl;
    }
    else{
//       cout << "!qfile.exists()" << endl;
       mkdir(textContentPath.c_str());
    }

    string path2 = path+"/" + temp.initialTimeToString()+".dat";
    string textContentPath2 = textContentPath + "/" + temp.initialTimeToString()+".text";

    ofstream file(path2,ios::out);

    file<<temp.getInitialYear() << endl;
    file<<temp.getInitialMonth() << endl;
    file<<temp.getInitialDay() << endl;
    file<< temp.getInitialHour() << endl;;
    file << temp.getInitialMinute()<< endl;
    file << temp.getInitialSecond() << endl;

   const char* str= temp.getqsTitle().c_str();

    file << str << endl;
    str = textContentPath2.c_str();
    file << str << endl;
    file << temp.getisText() << endl;

    file.close();

    ofstream fileText( textContentPath2 , ios::out );
    //不知要不要转成char[];
    fileText << temp.getContent() << endl;
    fileText.close();

    needToshow.push_back(temp);

    textMatterIcon();

}

void noteTextPicture::on_addPictureButton_pressed(){

    QString qspath = QFileDialog::getOpenFileName(this, tr("Add picture note"), ".", tr("Image Files(*.jpg *.png)"));

    if( !qspath.isNull() ){

        bool isOK ;
        QString qstitle = QInputDialog::getText( this , "Add picture note",
                                                 "Please input the title of the picture",
                                                 QLineEdit::Normal,"",&isOK);
        if(isOK&&qstitle!="") {
               QMessageBox::StandardButton qb = QMessageBox::information(this, "Information",
                                                   "The title of the picture is : <b>" + qstitle + "</b>",
                                                   QMessageBox::Yes | QMessageBox::No,
                                                   QMessageBox::Yes);
               if( qb ==  QMessageBox::Yes ){
                   string title = qstitle.toStdString();

                   cout << "has select picture " << endl;

                   SYSTEMTIME ct;
                   GetLocalTime(&ct);
                   noteKnowlodge temp(ct);
                   string path = "studyKnowlodge";
                   string pictureContentPath = "studyContentPicture" ;

                   if( access(path.c_str(), 0) == 0 ){
               //        cout << "qfile.exists()" << endl;
                   }
                   else{
               //       cout << "!qfile.exists()" << endl;
                      mkdir(path.c_str());
                   }

                   if( access(pictureContentPath.c_str(), 0) == 0 ){
               //        cout << "qfile.exists()" << endl;
                   }
                   else{
               //       cout << "!qfile.exists()" << endl;
                      mkdir(pictureContentPath.c_str());
                   }

                   string path2 = path+"/" + temp.initialTimeToString()+".dat";
                   string pictureContentPath2 = pictureContentPath + "/" + temp.initialTimeToString()+".jpg";

                   ofstream file(path2,ios::out);

                   file<<temp.getInitialYear() << endl;
                   file<<temp.getInitialMonth() << endl;
                   file<<temp.getInitialDay() << endl;
                   file<< temp.getInitialHour() << endl;;
                   file << temp.getInitialMinute()<< endl;
                   file << temp.getInitialSecond() << endl;

                   const char* str= title.c_str();

                   temp.setqsTitle(title);
                   temp.setType(false);
                   file << str << endl;
                   str = pictureContentPath2.c_str();
                   temp.setqsContent(pictureContentPath2);
                   file << str << endl;
                   file << temp.getisText() << endl;
                   cout << "after  temp.setType(false) " << temp.getisText() << endl;

                   needToshow.push_back(temp);
                   file.close();

                   QPixmap qpixmap;
                   qpixmap.load(qspath);
                   QString qspictureContentPath2 = QString::fromStdString(pictureContentPath2);
                   qpixmap.save(qspictureContentPath2);


//                   image.load(qspath);
//                   imageWidth = img.width();
//                   imageHeight = img.height();
//                   ui->pictureViewLabel->setPixmap(img);
//                   ui->pictureViewLabel->setFixedSize(imageWidth,imageHeight);
//                   ui->pictureViewLabel->move(0,0);
//                   pictureMatterIcon();


               }


        }


    }
    else{

    }

}

void noteTextPicture::on_textPicturesList_doubleClicked(const QModelIndex &index)
{

    int clickRow = index.row();
//    cout << index.row() << endl;
    noteKnowlodge temp = needToshow[clickRow];
    if( temp.getisText() ){

        textMatterIcon();
        QString qs ;
        string s = "" ;
        cout << "temp.getqsContent() :" << temp.getqsContent() << endl;
        ifstream stream( temp.getqsContent() , ios::in);
        if( stream ){
//            char ss;
//            while( stream >> ss ){
//                s += ss ;
//            }
            char ss[1000];
            while(stream.getline(ss,1000 )){
                string temp = ss;
                s += temp + "\n";
            }
            stream.close();
            qs = QString::fromStdString(s);
            ui->textBrowser->setText(qs);
        }
        else{
            cout << "!stream" << endl;
        }

    }
    else{

        pictureMatterIcon();
        string path = temp.getqsContent();
 //       cout << "temp.getqsContent() :" << temp.getqsContent() << endl;
        QString qspath = QString::fromStdString(path);
        img.load(qspath);
        image.load(qspath);
        imageWidth = img.width();
        imageHeight = img.height();
        ui->pictureViewLabel->setVisible(true);
        ui->pictureViewLabel->setPixmap(img);
        ui->pictureViewLabel->setFixedSize(imageWidth,imageHeight);
        ui->pictureViewLabel->move(0,0);

    }
}

void noteTextPicture::on_deletButton_pressed()
{

    int selectIndex =  ui->textPicturesList->currentRow();
//    cout << "selectIndex : " << selectIndex << endl;

    if( selectIndex >= 0 && selectIndex < needToshow.size() ){

        noteKnowlodge temp = needToshow[selectIndex];

        QMessageBox::StandardButton qb = QMessageBox::information(this, "Information",
                                        "Delet the knowlodge ??",
                                            QMessageBox::Yes | QMessageBox::No,
                                            QMessageBox::Yes);
        if( qb == QMessageBox::Yes ){

            string ss = "studyKnowlodge/" + temp.initialTimeToString() + ".dat";
            cout << ss << endl;
            const char* str = ss.c_str();
            remove(str);
            const char* str2 = temp.getqsContent().c_str();
            cout << temp.getqsContent() << endl;
            remove(str2);
            vector<noteKnowlodge>::iterator it = needToshow.begin() + selectIndex;
            needToshow.erase(it);

            updateTextPicturesList();

        }

    }
    ui->pictureViewLabel->setVisible(false);
    ui->textBrowser->setVisible(false);
}

void noteTextPicture::on_historyButton_pressed()
{
    updateTextPicturesList();
}
