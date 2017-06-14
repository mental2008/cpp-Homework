#include "tooltipc.h"
#include "ui_tooltipc.h"

ToolTipC::ToolTipC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ToolTipC)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/lifechores.png"));

    this->setWindowTitle("Tip");
}

ToolTipC::~ToolTipC()
{
    delete ui;
}

void ToolTipC::on_pushButton_pressed()
{
    accept();
}
