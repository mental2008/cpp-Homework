#include "lifechoresinstruction.h"
#include "ui_lifechoresinstruction.h"

LifeChoresInstruction::LifeChoresInstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LifeChoresInstruction)
{
    ui->setupUi(this);

    this->setWindowTitle("Life chores introduction");
}

LifeChoresInstruction::~LifeChoresInstruction()
{
    delete ui;
}
