#include "wordwindow.h"
#include "ui_wordwindow.h"
#include "windows.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
#include "addworddialog.h"
#include "io.h"
#include "direct.h"
#include "word.h"
#include <fstream>
#include <QMessageBox>
#include <cstdio>
#include "changeworddialog.h"
#include "choosewindow.h"

WordWindow::WordWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WordWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Word list");
    this->setWindowIcon(QIcon(":/new/prefix1/WordPartIcon.jpg"));

    WordVec.clear();

    ui->LeftMove->setEnabled(false);
    ui->LeftMove->setVisible(false);

    ui->RightMove->setEnabled(false);
    ui->RightMove->setVisible(false);

    ui->EnglishWord->setVisible(false);
    ui->EnglishWord->setEnabled(false);
    ui->ChineseMeaning->setVisible(false);
    ui->ChineseMeaning->setEnabled(false);

    ui->addButton->setVisible(false);
    ui->addButton->setEnabled(false);

    ui->deleteButton->setVisible(false);
    ui->deleteButton->setEnabled(false);

    ui->changeButton->setVisible(false);
    ui->changeButton->setEnabled(false);

    ui->EmptyListPicture->setVisible(false);
    ui->EmptyListPicture->setEnabled(false);
    ui->EmptyListLabel->setVisible(false);
    ui->EmptyListLabel->setEnabled(false);

    srand((unsigned int)time(NULL));
    int temp = rand() % 3;
    switch (temp) {
    case 0:
        ui->InitialPicture->setStyleSheet("border-image: url(:/new/prefix1/InspirationalPicture0.jpg);");
        break;
    case 1:
        ui->InitialPicture->setStyleSheet("border-image: url(:/new/prefix1/InspirationalPicture1.jpg);");
        break;
    case 2:
        ui->InitialPicture->setStyleSheet("border-image: url(:/new/prefix1/InspirationalPicture2.jpg);");
        break;
    default:
        break;
    }

    ui->EnterButton->setFlat(true);
    /*ui->progressBar->setStyleSheet("QProgressBar {\
                                   border: 2px solid grey;\
                                   border-radius: 5px;\
                                   background-color: #FFFFFF;\
                                }\
                                \
                                QProgressBar::chunk {\
                                   background-color: #05B8CC;\
                                   width: 20px;\
                                }\
                                \
                                QProgressBar {\
                                   border: 2px solid grey;\
                                   border-radius: 5px;\
                                   text-align: center;\
                                }");*/

//    for(int i = 0; i < ui->listWidget->count(); i++)
//    {
//        ui->listWidget->item(i)->setTextAlignment(Qt::AlignHCenter);
//    }
}

WordWindow::~WordWindow()
{
    delete ui;
}

void WordWindow::closeEvent(QCloseEvent *event)
{
    this->close();
    ChooseWindow *choosewindow = new ChooseWindow;
    choosewindow->show();
}

void WordWindow::StartUp()
{
    //ui->InitialPicture->setEnabled(false);
    while(ui->progressBar->value() != 100)
    {
        int tempValue = ui->progressBar->value();
        int increase = std::min(rand() % 20 + 1, rand() % (100 - tempValue) + 1);
        int sleepTime = rand() % 1000;
        Sleep(sleepTime);
        ui->progressBar->setValue(tempValue + increase);
    }
}

void WordWindow::on_LeftMove_clicked()
{
    count--;

    Word temp = WordVec[count - 1];
    QString text = QString::fromStdString(temp.getWordName());

    ui->EnglishWord->setEnabled(true);
    ui->EnglishWord->setVisible(true);
    ui->EnglishWord->setText(text);
    ui->EnglishWord->setAlignment(Qt::AlignHCenter);

    ui->ChineseMeaning->setEnabled(true);
    ui->ChineseMeaning->setVisible(true);
    ui->ChineseMeaning->clear();

    if(temp.getHasNounMeaning() == true)
    {
        QString s = QString::fromStdString("n." + temp.getNounMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasVerbMeaning() == true)
    {
        QString s = QString::fromStdString("v." + temp.getVerbMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasAdjMeaning() == true)
    {
        QString s = QString::fromStdString("adj." + temp.getAdjMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasAdvMeaning() == true)
    {
        QString s = QString::fromStdString("adv." + temp.getAdvMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    for(int i = 0; i < ui->ChineseMeaning->count(); i++)
    {
        ui->ChineseMeaning->item(i)->setTextAlignment(Qt::AlignHCenter);
    }

    if(count == 1)
    {
        ui->LeftMove->setVisible(false);
        ui->LeftMove->setEnabled(false);
    }
    else
    {
        ui->LeftMove->setVisible(true);
        ui->LeftMove->setEnabled(true);
    }

    if(count < (int) WordVec.size())
    {
        ui->RightMove->setVisible(true);
        ui->RightMove->setEnabled(true);
    }
    else
    {
        ui->RightMove->setVisible(false);
        ui->RightMove->setEnabled(false);
    }

}

void WordWindow::on_RightMove_clicked()
{
    count++;

    Word temp = WordVec[count - 1];
    QString text = QString::fromStdString(temp.getWordName());

    ui->EnglishWord->setEnabled(true);
    ui->EnglishWord->setVisible(true);
    ui->EnglishWord->setText(text);
    ui->EnglishWord->setAlignment(Qt::AlignHCenter);

    ui->ChineseMeaning->setEnabled(true);
    ui->ChineseMeaning->setVisible(true);
    ui->ChineseMeaning->clear();

    if(temp.getHasNounMeaning() == true)
    {
        QString s = QString::fromStdString("n." + temp.getNounMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasVerbMeaning() == true)
    {
        QString s = QString::fromStdString("v." + temp.getVerbMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasAdjMeaning() == true)
    {
        QString s = QString::fromStdString("adj." + temp.getAdjMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasAdvMeaning() == true)
    {
        QString s = QString::fromStdString("adv." + temp.getAdvMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    for(int i = 0; i < ui->ChineseMeaning->count(); i++)
    {
        ui->ChineseMeaning->item(i)->setTextAlignment(Qt::AlignHCenter);
    }

    if(count == (int)WordVec.size())
    {
        ui->RightMove->setVisible(false);
        ui->RightMove->setEnabled(false);
    }
    else
    {
        ui->RightMove->setVisible(true);
        ui->RightMove->setEnabled(true);
    }

    if(count > 1)
    {
        ui->LeftMove->setVisible(true);
        ui->LeftMove->setEnabled(true);
    }
    else
    {
        ui->LeftMove->setVisible(false);
        ui->LeftMove->setEnabled(false);
    }

}

void WordWindow::file_search(std::string path)
{
    struct _finddata_t filefind;

    std::string curr = path + "\\*.*";
    int done = 0, handle;

    if ((handle = _findfirst(curr.c_str(), &filefind)) == -1) return;

    while (!(done = _findnext(handle, &filefind)))
    {
        if (!strcmp(filefind.name, ".."))continue;
        //避免遍历父路径

        if ((_A_SUBDIR != filefind.attrib))
        {
            std::string filePath = path + "/"+ filefind.name;
            //读取文件
            std::ifstream file(filePath.c_str(), std::ios::in);
            std::cout << filePath << std::endl;
            if(!file)
            {
                std::cerr << "File open Error" << std::endl;
                exit(EXIT_FAILURE);
            }
            int year, month, day, hour, minute, second;
            bool hasNounMeaning, hasVerbMeaning, hasAdjMeaning, hasAdvMeaning;
            std::string nounMeaning, verbMeaning, adjMeaning, advMeaning, wordName;
            char ch[200];

            file >> year;
            file >> month;
            file >> day;
            file >> hour;
            file >> minute;
            file >> second;

            file >> hasNounMeaning;
            if(hasNounMeaning == true)
            {
                char tmp;
                file.get(tmp);
                file.getline(ch, 200);
                nounMeaning = ch;
            }
            else
            {
                nounMeaning = "";
            }

            file >> hasVerbMeaning;
            if(hasVerbMeaning == true)
            {
                char tmp;
                file.get(tmp);
                file.getline(ch, 200);
                verbMeaning = ch;
            }
            else
            {
                verbMeaning = "";
            }

            file >> hasAdjMeaning;
            if(hasAdjMeaning == true)
            {
                char tmp;
                file.get(tmp);
                file.getline(ch, 200);
                adjMeaning = ch;
            }
            else
            {
                adjMeaning = "";
            }

            file >> hasAdvMeaning;
            if(hasAdvMeaning == true)
            {
                char tmp;
                file.get(tmp);
                file.getline(ch, 200);
                advMeaning = ch;

            }
            else
            {
                advMeaning = "";
                char tmp;
                file.get(tmp);
            }

            file.getline(ch, 100);
            wordName = ch;

            std::cout << "noun = " << hasNounMeaning << " " << nounMeaning << std::endl;
            std::cout << "verb = " << hasVerbMeaning << " " << verbMeaning << std::endl;
            std::cout << "adj = " << hasAdjMeaning << " " << adjMeaning << std::endl;
            std::cout << "adv = " << hasAdvMeaning << " "<< advMeaning << std::endl;
            std::cout << "wordName = " << wordName << std::endl;

            Word word(year, month, day, hour, minute, second,
                      hasNounMeaning, hasVerbMeaning, hasAdjMeaning, hasAdvMeaning,
                      nounMeaning, verbMeaning, adjMeaning, advMeaning, wordName);

            WordVec.push_back(word);
        }
    }
    _findclose(handle);
}

void WordWindow::InputData()
{

    std::string path = "wordlist";
    if(access(path.c_str(), 0) == 0)
    {
        file_search(path);
    }
    else
    {
        mkdir(path.c_str());

    }

}

bool cmp(Word a, Word b)
{
    return a.initialTimeToString() > b.initialTimeToString();
}

void WordWindow::on_EnterButton_clicked()
{
    StartUp();

    InputData();

    sort(WordVec.begin(), WordVec.end(), cmp);

    Sleep(1000);

    ui->InitialPicture->setEnabled(false);
    ui->InitialPicture->setVisible(false);
    ui->progressBar->setEnabled(false);
    ui->progressBar->setVisible(false);
    ui->EnterButton->setEnabled(false);
    ui->EnterButton->setVisible(false);

    if((int) WordVec.size() == 0)
    {
        ui->EmptyListPicture->setVisible(true);
        ui->EmptyListPicture->setEnabled(true);

        ui->EmptyListLabel->setVisible(true);
        ui->EmptyListLabel->setEnabled(true);

        ui->EnglishWord->setVisible(false);
        ui->EnglishWord->setEnabled(false);

        ui->ChineseMeaning->setVisible(false);
        ui->ChineseMeaning->setEnabled(false);

        count = 0;
    }
    else
    {
        ui->deleteButton->setVisible(true);
        ui->deleteButton->setEnabled(true);

        ui->changeButton->setVisible(true);
        ui->changeButton->setEnabled(true);

        ui->EnglishWord->setVisible(true);
        ui->EnglishWord->setEnabled(true);

        Word temp = WordVec[0];
        QString str = QString::fromStdString(temp.getWordName());
        ui->EnglishWord->setText(str);
        ui->EnglishWord->setAlignment(Qt::AlignHCenter);

        ui->ChineseMeaning->setEnabled(true);
        ui->ChineseMeaning->setVisible(true);
        ui->ChineseMeaning->clear();

        if(temp.getHasNounMeaning() == true)
        {
            QString s = QString::fromStdString("n." + temp.getNounMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        if(temp.getHasVerbMeaning() == true)
        {
            QString s = QString::fromStdString("v." + temp.getVerbMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        if(temp.getHasAdjMeaning() == true)
        {
            QString s = QString::fromStdString("adj." + temp.getAdjMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        if(temp.getHasAdvMeaning() == true)
        {
            QString s = QString::fromStdString("adv." + temp.getAdvMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        for(int i = 0; i < ui->ChineseMeaning->count(); i++)
        {
            ui->ChineseMeaning->item(i)->setTextAlignment(Qt::AlignHCenter);
        }

        count = 1;

    }


    ui->addButton->setVisible(true);
    ui->addButton->setEnabled(true);

    ui->LeftMove->setEnabled(false);
    ui->LeftMove->setVisible(false);

    if(WordVec.size() > 1)
    {
        ui->RightMove->setEnabled(true);
        ui->RightMove->setVisible(true);
    }

}

void WordWindow::on_addButton_pressed()
{
    AddWordDialog *addworddialog = new AddWordDialog;
    connect(addworddialog, SIGNAL(emitWord(Word)), this, SLOT(receiveAddWord(Word)));
    if(addworddialog->exec() == QDialog::Accepted)
    {
        std::cout << "Accepted" << std::endl;
    }
}

void WordWindow::receiveAddWord(Word word)
{
    WordVec.push_back(word);

    if((int) WordVec.size() == 1)
    {

        count = 1;

        ui->EmptyListLabel->setEnabled(false);
        ui->EmptyListLabel->setVisible(false);

        ui->EmptyListPicture->setEnabled(false);
        ui->EmptyListPicture->setVisible(false);

        ui->deleteButton->setEnabled(true);
        ui->deleteButton->setVisible(true);

        ui->changeButton->setEnabled(true);
        ui->changeButton->setVisible(true);

        Word temp = WordVec[0];
        QString str = QString::fromStdString(temp.getWordName());

        ui->EnglishWord->setVisible(true);
        ui->EnglishWord->setEnabled(true);
        ui->EnglishWord->setText(str);
        ui->EnglishWord->setAlignment(Qt::AlignHCenter);

        ui->ChineseMeaning->setEnabled(true);
        ui->ChineseMeaning->setVisible(true);
        ui->ChineseMeaning->clear();

        if(temp.getHasNounMeaning() == true)
        {
            QString s = QString::fromStdString("n." + temp.getNounMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        if(temp.getHasVerbMeaning() == true)
        {
            QString s = QString::fromStdString("v." + temp.getVerbMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        if(temp.getHasAdjMeaning() == true)
        {
            QString s = QString::fromStdString("adj." + temp.getAdjMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        if(temp.getHasAdvMeaning() == true)
        {
            QString s = QString::fromStdString("adv." + temp.getAdvMeaning());
            ui->ChineseMeaning->addItem(s);
        }

        for(int i = 0; i < ui->ChineseMeaning->count(); i++)
        {
            ui->ChineseMeaning->item(i)->setTextAlignment(Qt::AlignHCenter);
        }

    }

    if(count < (int) WordVec.size())
    {

        ui->RightMove->setVisible(true);
        ui->RightMove->setEnabled(true);

    }

}

void WordWindow::on_deleteButton_pressed()
{
    if(QMessageBox::information(this, "Message", "Are you sure to delete this word", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == 16384)
    {

        std::vector<Word>::iterator it = WordVec.begin() + count - 1;
        Word tempWord = WordVec[count - 1];
        std::string filePath = "wordlist/" + tempWord.getWordName() + ".txt";
        remove(filePath.c_str());
        WordVec.erase(it);

        if((int) WordVec.size() == 0)
        {

            ui->EmptyListLabel->setVisible(true);
            ui->EmptyListLabel->setEnabled(true);

            ui->EmptyListPicture->setEnabled(true);
            ui->EmptyListPicture->setVisible(true);

            ui->EnglishWord->setVisible(false);
            ui->EnglishWord->setEnabled(false);

            ui->ChineseMeaning->setEnabled(false);
            ui->ChineseMeaning->setVisible(false);

            count = 0;

            ui->deleteButton->setEnabled(false);
            ui->deleteButton->setVisible(false);

            ui->changeButton->setEnabled(false);
            ui->changeButton->setVisible(false);

        }
        else if(count > (int) WordVec.size())
        {

            count--;

            Word temp = WordVec[count - 1];
            QString str = QString::fromStdString(temp.getWordName());

            ui->EnglishWord->setVisible(true);
            ui->EnglishWord->setEnabled(true);
            ui->EnglishWord->setText(str);
            ui->EnglishWord->setAlignment(Qt::AlignHCenter);

            ui->ChineseMeaning->setEnabled(true);
            ui->ChineseMeaning->setVisible(true);
            ui->ChineseMeaning->clear();

            if(temp.getHasNounMeaning() == true)
            {
                QString s = QString::fromStdString("n." + temp.getNounMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            if(temp.getHasVerbMeaning() == true)
            {
                QString s = QString::fromStdString("v." + temp.getVerbMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            if(temp.getHasAdjMeaning() == true)
            {
                QString s = QString::fromStdString("adj." + temp.getAdjMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            if(temp.getHasAdvMeaning() == true)
            {
                QString s = QString::fromStdString("adv." + temp.getAdvMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            for(int i = 0; i < ui->ChineseMeaning->count(); i++)
            {
                ui->ChineseMeaning->item(i)->setTextAlignment(Qt::AlignHCenter);
            }

        }
        else
        {

            Word temp = WordVec[count - 1];
            QString str = QString::fromStdString(temp.getWordName());

            ui->EnglishWord->setVisible(true);
            ui->EnglishWord->setEnabled(true);
            ui->EnglishWord->setText(str);
            ui->EnglishWord->setAlignment(Qt::AlignHCenter);

            ui->ChineseMeaning->setEnabled(true);
            ui->ChineseMeaning->setVisible(true);
            ui->ChineseMeaning->clear();

            if(temp.getHasNounMeaning() == true)
            {
                QString s = QString::fromStdString("n." + temp.getNounMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            if(temp.getHasVerbMeaning() == true)
            {
                QString s = QString::fromStdString("v." + temp.getVerbMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            if(temp.getHasAdjMeaning() == true)
            {
                QString s = QString::fromStdString("adj." + temp.getAdjMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            if(temp.getHasAdvMeaning() == true)
            {
                QString s = QString::fromStdString("adv." + temp.getAdvMeaning());
                ui->ChineseMeaning->addItem(s);
            }

            for(int i = 0; i < ui->ChineseMeaning->count(); i++)
            {
                ui->ChineseMeaning->item(i)->setTextAlignment(Qt::AlignHCenter);
            }
        }

        if(count <= 1)
        {
            ui->LeftMove->setEnabled(false);
            ui->LeftMove->setVisible(false);
        }
        else
        {
            ui->LeftMove->setEnabled(true);
            ui->LeftMove->setVisible(true);
        }

        if(count < (int) WordVec.size())
        {
            ui->RightMove->setEnabled(true);
            ui->RightMove->setVisible(true);
        }
        else
        {
            ui->RightMove->setEnabled(false);
            ui->RightMove->setVisible(false);
        }

    }
}

void WordWindow::on_changeButton_pressed()
{
    ChangeWordDialog *dialog = new ChangeWordDialog(WordVec[count - 1]);
    connect(dialog, SIGNAL(emitWord(Word)), this, SLOT(receiveChangeWord(Word)));
    if(dialog->exec() == QDialog::Accepted)
    {
        std::cout << "Change ok" << std::endl;
    }

}

void WordWindow::receiveChangeWord(Word word)
{
    WordVec[count - 1] = word;

    Word temp = WordVec[count - 1];
    QString str = QString::fromStdString(temp.getWordName());

    ui->EnglishWord->setVisible(true);
    ui->EnglishWord->setEnabled(true);
    ui->EnglishWord->setText(str);
    ui->EnglishWord->setAlignment(Qt::AlignHCenter);

    ui->ChineseMeaning->setEnabled(true);
    ui->ChineseMeaning->setVisible(true);
    ui->ChineseMeaning->clear();

    if(temp.getHasNounMeaning() == true)
    {
        QString s = QString::fromStdString("n." + temp.getNounMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasVerbMeaning() == true)
    {
        QString s = QString::fromStdString("v." + temp.getVerbMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasAdjMeaning() == true)
    {
        QString s = QString::fromStdString("adj." + temp.getAdjMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    if(temp.getHasAdvMeaning() == true)
    {
        QString s = QString::fromStdString("adv." + temp.getAdvMeaning());
        ui->ChineseMeaning->addItem(s);
    }

    for(int i = 0; i < ui->ChineseMeaning->count(); i++)
    {
        ui->ChineseMeaning->item(i)->setTextAlignment(Qt::AlignHCenter);
    }

}
