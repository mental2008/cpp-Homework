#include "studyplaninstruction.h"
#include "ui_studyplaninstruction.h"

StudyPlanInstruction::StudyPlanInstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudyPlanInstruction)
{
    ui->setupUi(this);

    this->setWindowTitle("Study plan introduction");
}

StudyPlanInstruction::~StudyPlanInstruction()
{
    delete ui;
}
