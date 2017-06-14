#include "changeworddialog.h"
#include "ui_changeworddialog.h"
#include <QString>
#include "windows.h"
#include <cstdio>
#include "io.h"
#include "direct.h"
#include <fstream>
#include <iostream>
#include <QMessageBox>

ChangeWordDialog::ChangeWordDialog(Word word, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeWordDialog)
{
    ui->setupUi(this);

    ui->wordInput->setText(QString::fromStdString(word.getWordName()));

    this->setWindowTitle("Change");
    this->setWindowIcon(QIcon((":/new/prefix1/changePicture")));

    if(word.getHasNounMeaning() == true)
    {
        ui->nounCheck->setChecked(true);
        ui->nounInput->setEnabled(true);
        ui->nounInput->setText(QString::fromStdString(word.getNounMeaning()));
    }
    else
    {
        ui->nounCheck->setChecked(false);
        ui->nounInput->setEnabled(false);
    }

    if(word.getHasVerbMeaning() == true)
    {
        ui->verbCheck->setChecked(true);
        ui->verbInput->setEnabled(true);
        ui->verbInput->setText(QString::fromStdString(word.getVerbMeaning()));
    }
    else
    {
        ui->verbCheck->setChecked(false);
        ui->verbInput->setEnabled(false);
    }

    if(word.getHasAdjMeaning() == true)
    {
        ui->adjectiveCheck->setChecked(true);
        ui->adjectiveInput->setEnabled(true);
        ui->adjectiveInput->setText(QString::fromStdString(word.getAdjMeaning()));
    }
    else
    {
        ui->adjectiveCheck->setChecked(false);
        ui->adjectiveInput->setEnabled(false);
    }

    if(word.getHasAdvMeaning() == true)
    {
        ui->adverbCheck->setChecked(true);
        ui->adverbInput->setEnabled(true);
        ui->adverbInput->setText(QString::fromStdString(word.getAdvMeaning()));
    }
    else
    {
        ui->adverbCheck->setChecked(false);
        ui->adverbInput->setEnabled(false);
    }

}

ChangeWordDialog::~ChangeWordDialog()
{
    delete ui;
}

void changeWordFile(Word word)
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

void ChangeWordDialog::on_acceptButton_pressed()
{

    SYSTEMTIME ct;
    GetLocalTime(&ct);

    bool hasNounMeaning, hasVerbMeaning, hasAdjMeaning, hasAdvMeaning;
    std::string nounMeaning, verbMeaning, adjMeaning, advMeaning, wordName;
    wordName = ui->wordInput->text().toStdString();

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

    if(hasNounMeaning == true && nounMeaning == "")
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

        Word word(ct, hasNounMeaning, hasVerbMeaning, hasAdjMeaning, hasAdvMeaning,
                  nounMeaning, verbMeaning, adjMeaning, advMeaning, wordName);

        changeWordFile(word);

        emit emitWord(word);

        this->accept();

    }
}

void ChangeWordDialog::on_cancelButton_pressed()
{
    this->reject();
}

void ChangeWordDialog::on_nounCheck_stateChanged(int arg1)
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

void ChangeWordDialog::on_verbCheck_stateChanged(int arg1)
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

void ChangeWordDialog::on_adjectiveCheck_stateChanged(int arg1)
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

void ChangeWordDialog::on_adverbCheck_stateChanged(int arg1)
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
