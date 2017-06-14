#ifndef ADDNOTETEXT_H
#define ADDNOTETEXT_H

#include <QDialog>
#include<string>
#include"noteknowlodge.h"
using std::string;
namespace Ui {
class addNoteText;
}

class addNoteText : public QDialog
{
    Q_OBJECT

public:
    explicit addNoteText(QWidget *parent = 0);

    ~addNoteText();

//    bool isUpdate();

    void closeEvent();

private slots:

    void on_pushButton_2_pressed();

    void buttonBox_accepted();

//    void update();

    void on_pushButton_2_clicked();

signals:

    void sendData( noteKnowlodge );

private:
    Ui::addNoteText *ui;

    QString qs;
    string s ;

//    bool isUpdateVariable = false;

};

#endif // ADDNOTETEXT_H
