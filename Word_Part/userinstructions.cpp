#include "userinstructions.h"
#include "ui_userinstructions.h"

UserInstructions::UserInstructions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInstructions)
{
    ui->setupUi(this);
    this->setWindowTitle("User Instructions");
}

UserInstructions::~UserInstructions()
{
    delete ui;
}
