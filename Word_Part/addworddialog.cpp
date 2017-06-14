#include "addworddialog.h"
#include "ui_addworddialog.h"
#include <iostream>
#include <QMessageBox>
#include <word.h>
#include "windows.h"
#include <cctype>
#include <fstream>
#include <cstdlib>
#include "io.h"
#include "direct.h"

AddWordDialog::AddWordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWordDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Add");
    this->setWindowIcon(QIcon(":/new/prefix1/addPicture"));

//    QObject::connect(ui->acceptButton, SIGNAL(pressed()), this, SLOT(accept()));
//    QObject::connect(ui->cancelButton, SIGNAL(pressed()), this, SLOT(reject()));


}

AddWordDialog::~AddWordDialog()
{
    delete ui;
}


void AddWordDialog::on_nounCheck_stateChanged(int arg1)
{
    if(arg1 == 2)
    {
        ui->nounInput->setEnabled(true);
    }
    else
    {
        ui->nounInput->setEnabled(false);
    }
}

void AddWordDialog::on_verbCheck_stateChanged(int arg1)
{
    if(arg1 == 2)
    {
        ui->verbInput->setEnabled(true);
    }
    else
    {
        ui->verbInput->setEnabled(false);
    }
}

void AddWordDialog::on_adjectiveCheck_stateChanged(int arg1)
{
    if(arg1 == 2)
    {
        ui->adjectiveInput->setEnabled(true);
    }
    else
    {
        ui->adjectiveInput->setEnabled(false);
    }
}

void AddWordDialog::on_adverbCheck_stateChanged(int arg1)
{
    if(arg1 == 2)
    {
        ui->adverbInput->setEnabled(true);
    }
    else
    {
        ui->adverbInput->setEnabled(false);
    }
}

void createWordFile(Word word)
{
    std::string filePath = "wordlist/" + word.getWordName() + ".txt";
    std::ofstream file(filePath.c_str(), std::ios::out);

    if(!file)
    {
        std::cerr << "File creates error" << std::endl;
        exit(EXIT_FAILURE);
    }

    file << word.getInitialYear() << std::endl;
    file << word.getInitialMonth() << std::endl;
    file << word.getInitialDay() << std::endl;
    file << word.getInitialHour() << std::endl;
    file << word.getInitialMinute() << std::endl;
    file << word.getInitialSecond() << std::endl;

    file << word.getHasNounMeaning() << std::endl;
    if(word.getHasNounMeaning() == true)
    {
        file << word.getNounMeaning() << std::endl;
    }

    file << word.getHasVerbMeaning() << std::endl;
    if(word.getHasVerbMeaning() == true)
    {
        file << word.getVerbMeaning() << std::endl;
    }

    file << word.getHasAdjMeaning() << std::endl;
    if(word.getHasAdjMeaning() == true)
    {
        file << word.getAdjMeaning() << std::endl;
    }

    file << word.getHasAdvMeaning() << std::endl;
    if(word.getHasAdvMeaning() == true)
    {
        file << word.getAdvMeaning() << std::endl;
    }

    file << word.getWordName() << std::endl;
    file.close();
}

void AddWordDialog::on_acceptButton_pressed()
{

    bool is_WordNameAllEnglish = true;

    std::string tempWordName = ui->wordInput->text().toStdString();

    int lenWordName = (int) tempWordName.size();
    for(int i = 0; i < lenWordName; i++)
    {
        if((tempWordName[i] >= 'a' && tempWordName[i] <= 'z') ||
                (tempWordName[i] >= 'A' && tempWordName[i] <= 'Z'))
        {
            ;
        }
        else
        {
            is_WordNameAllEnglish = false;
            break;
        }
    }

    SYSTEMTIME ct;
    GetLocalTime(&ct);

    bool hasNounMeaning, hasVerbMeaning, hasAdjMeaning, hasAdvMeaning;
    std::string nounMeaning, verbMeaning, adjMeaning, advMeaning, wordName;

    if(ui->nounCheck->checkState() == 2)
    {
        hasNounMeaning = true;
        nounMeaning = ui->nounInput->text().toStdString();
    }
    else
    {
        hasNounMeaning = false;
        nounMeaning = "";
    }

    if(ui->verbCheck->checkState() == 2)
    {
        hasVerbMeaning = true;
        verbMeaning = ui->verbInput->text().toStdString();
    }
    else
    {
        hasVerbMeaning = false;
        verbMeaning = "";
    }

    if(ui->adjectiveCheck->checkState() == 2)
    {
        hasAdjMeaning = true;
        adjMeaning = ui->adjectiveInput->text().toStdString();
    }
    else
    {
        hasAdjMeaning = false;
        adjMeaning = "";
    }

    if(ui->adverbCheck->checkState() == 2)
    {
        hasAdvMeaning = true;
        advMeaning = ui->adverbInput->text().toStdString();
    }
    else
    {
        hasAdvMeaning = false;
        advMeaning = "";
    }

    if(is_WordNameAllEnglish == false)
    {
        QMessageBox::warning(this, "Message", "The word should be in English");
    }
    else if(lenWordName > 14 || lenWordName < 1)
    {
        QMessageBox::warning(this, "Message", "The word length is invalid (1 ~ 14)");
    }
    else if(hasNounMeaning == true && nounMeaning == "")
    {
        QMessageBox::warning(this, "Message", "The noun meaning should not be empty");
    }
    else if((int)nounMeaning.size() > 50)
    {
        QMessageBox::warning(this, "Message", "The noun meaning is too long");
    }
    else if(hasVerbMeaning == true && verbMeaning == "")
    {
        QMessageBox::warning(this, "Message", "The verb meaning should not be empty");
    }
    else if((int)verbMeaning.size() > 50)
    {
        QMessageBox::warning(this, "Message", "The verb meaning is too long");
    }
    else if(hasAdjMeaning == true && adjMeaning == "")
    {
        QMessageBox::warning(this, "Message", "The adjective meaning should not be empty");
    }
    else if((int)adjMeaning.size() > 50)
    {
        QMessageBox::warning(this, "Message", "The adjective meaning is too long");
    }
    else if(hasAdvMeaning == true && advMeaning == "")
    {
        QMessageBox::warning(this, "Message", "The adverb meaning should not be empty");
    }
    else if((int)advMeaning.size() > 50)
    {
        QMessageBox::warning(this, "Message", "The adverb meaning is too long");
    }
    else
    {
        wordName = "";
        for(int i = 0; i < lenWordName; i++)
        {
            if(i == 0)
            {
                wordName += toupper(tempWordName[i]);
            }
            else
            {
                wordName += tolower(tempWordName[i]);
            }
        }
        Word word(ct, hasNounMeaning, hasVerbMeaning, hasAdjMeaning, hasAdvMeaning,
                  nounMeaning, verbMeaning, adjMeaning, advMeaning, wordName);

        std::string filePath = "wordlist/" + word.getWordName() + ".txt";
        if(access(filePath.c_str(), 0) == 0)
        {
            QMessageBox::warning(this, "Message", "This word has existed");
        }
        else
        {
            createWordFile(word);

            emit emitWord(word);

            this->accept();
        }

    }

}

void AddWordDialog::on_cancelButton_pressed()
{
    this->reject();
}
