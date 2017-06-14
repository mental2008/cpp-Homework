#include "wordlistinstruction.h"
#include "ui_wordlistinstruction.h"

WordListInstruction::WordListInstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WordListInstruction)
{
    ui->setupUi(this);

    this->setWindowTitle("Word list introduction");
}

WordListInstruction::~WordListInstruction()
{
    delete ui;
}
