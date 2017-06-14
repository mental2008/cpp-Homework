#ifndef STUDYTEXTPICTURE_H
#define STUDYTEXTPICTURE_H

#include <QMainWindow>
#include <string>
#include<Qstring>
#include<QStringList>
#include<QTime>
#include"note.h"
#include "addnotetext.h"
#include"noteknowlodge.h"

using std::string;
namespace Ui {
class studyTextPicture;
}

class noteTextPicture : public QMainWindow
{
    Q_OBJECT


public:
    explicit noteTextPicture(QWidget *parent = 0);

    ~noteTextPicture();

    void closeEvent( QCloseEvent *event );

    void updateTextPicturesView();

    void mouseMoveEvent( QMouseEvent * me );

    void mousePressEvent(QMouseEvent * pe);

    void mouseReleaseEvent(QMouseEvent * re);

    void updateTextPicturesList();

    void updateMouseXY();

    void pictureMatterIcon();

    void textMatterIcon();

    bool eventFilter(QObject *, QEvent *e);

    bool isQcursorInPictureView( QPoint qpoint);

    void file_search(string path);


private slots:

    void on_tool_pressed( );

    void on_littleToolButton_pressed( );

    void displayTool();

    void on_counterclockwiseButton_pressed();

    void on_enlageButton_pressed();

    void on_narrowButton_pressed();


    void on_clockwiseButton_pressed();

    void on_addTextButton_pressed();

    void receiveData( noteKnowlodge  );

    void on_addPictureButton_pressed();


    void on_textPicturesList_doubleClicked(const QModelIndex &index);

    void on_deletButton_pressed();

    void on_historyButton_pressed();

private:

    Ui::studyTextPicture *ui;
//    addNoteText addNoteTextWindow;
    int mouseX = 0  , mouseY = 0 ;
    int mainWindowX , maxinWindowY ;
    int toolButtonTime = 0 ;

    bool isTool = false;
    bool islittleTool = false;
    bool isPictureViewPress = false;
    bool isDisplayTool = true ;

    double time  ;

    int imageWidth;
    int imageHeight;

    QString path;
    QPixmap img;
    QPixmap image ;

//    noteKnowlodge needToshow[];

    vector <noteKnowlodge> needToshow;

};

#endif // STUDYTEXTPICTURE_H
