#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QIcon"
#include <string>
#include <iostream>
#include "wordwindow.h"
#include <fstream>
#include <cstdlib>
#include <QDialog>
#include "io.h"
#include "direct.h"
#include <QMessageBox>
#include "abouttheauthorswindow.h"
#include "userinstructions.h"
#include "choosewindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Memory Note");
    this->setWindowIcon(QIcon(":/new/prefix1/LoginWindowIcon.jpg"));

    ui->menuBar->setStyleSheet("background-color: rgb(242, 255, 199);");

//    QPalette palette(ui->menuBar->palette());
//    palette.setColor(QPalette::Background, Qt::black);
//    ui->menuBar->setPalette(palette);

    if(access("user.dat", 0) == 0)
    {
        std::ifstream file("user.dat", std::ios::in | std::ios::binary);
        if(!file)
        {
            std::cerr << "File open Error!" << std::endl;
            exit(EXIT_FAILURE);
        }
        file >> truePassword;
        file.close();
    }
    else
    {
        std::ofstream file("user.dat", std::ios::out | std::ios::binary);
        if(!file)
        {
            std::cerr << "File create Error!" << std::endl;
            exit(EXIT_FAILURE);
        }
        truePassword = "123456";
        file << truePassword << std::endl;
        file.close();
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_PasswordDisplayButton_pressed()
{
    ui->PasswordInput->setText(QString::fromStdString(nowPassword));
}

void LoginWindow::on_PasswordDisplayButton_released()
{
    std::string temp = "";
    for(int i = 0; i < (int)nowPassword.size(); i++)
    {
        temp += '*';
    }
    ui->PasswordInput->setText(QString::fromStdString(temp));
}


void LoginWindow::on_PasswordInput_textChanged(const QString &arg0)
{
    std::string temp = arg0.toStdString();
    if(temp.size() < nowPassword.size()) {
        int pos = ui->PasswordInput->cursorPosition();
        int len = (int)(nowPassword.size() - temp.size());
        nowPassword = nowPassword.substr(0, pos) + nowPassword.substr(pos + len, (int)nowPassword.size() - pos - len);
//        std::cout << nowPassword << std::endl;
        for(int i = 0; i < (int)nowPassword.size(); i++)
        {
            temp[i] = '*';
        }
        ui->PasswordInput->setText(QString::fromStdString(temp));
    }
    else {
        for(int i = (int)nowPassword.size(); i < (int)temp.size(); i++)
        {
            nowPassword += temp[i];
            temp[i] = '*';
        }
        ui->PasswordInput->setText(QString::fromStdString(temp));
    }
}

void LoginWindow::on_LoginButton_clicked()
{
    //After loginning...
    std::string user = ui->UserInput->text().toStdString();
    if(user == "admin" && nowPassword == truePassword)
    {
        ChooseWindow *choosewindow = new ChooseWindow(this);
        this->close();
        choosewindow->show();
    }

}


void LoginWindow::on_actionAbout_the_program_triggered()
{
    QMessageBox::aboutQt(this, "About the program");
}

void LoginWindow::on_actionAbout_the_authors_triggered()
{
    AboutTheAuthorsWindow *dialog = new AboutTheAuthorsWindow(this);
    dialog->exec();
}

void LoginWindow::on_actionUser_Instructions_triggered()
{
    UserInstructions *dialog = new UserInstructions(this);
    dialog->exec();
}
