#ifndef WORDWINDOW_H
#define WORDWINDOW_H

#include <QMainWindow>
#include <string>
#include <vector>
#include "word.h"
#include <QCloseEvent>

namespace Ui {
class WordWindow;
}

class WordWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WordWindow(QWidget *parent = 0);
    ~WordWindow();
    void StartUp();
    void InputData();
    void closeEvent(QCloseEvent *event);

private slots:
    void on_LeftMove_clicked();

    void on_RightMove_clicked();

    void on_EnterButton_clicked();

    void on_addButton_pressed();

    void receiveAddWord(Word);

    void receiveChangeWord(Word);

    void on_deleteButton_pressed();

    void on_changeButton_pressed();

private:
    Ui::WordWindow *ui;
    std::vector<Word> WordVec;
    int count;
    void file_search(std::string);
};

#endif // WORDWINDOW_H
