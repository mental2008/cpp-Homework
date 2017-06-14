#include "knowledgeinstruction.h"
#include "ui_knowledgeinstruction.h"

KnowledgeInstruction::KnowledgeInstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KnowledgeInstruction)
{
    ui->setupUi(this);

    this->setWindowTitle("Knowledge introduction");
}

KnowledgeInstruction::~KnowledgeInstruction()
{
    delete ui;
}
