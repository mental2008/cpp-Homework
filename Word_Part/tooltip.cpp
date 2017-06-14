#include "tooltip.h"
#include "ui_tooltip.h"

ToolTip::ToolTip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ToolTip)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/new/prefix1/Resource/studyplan.png"));
    this->setWindowTitle("Tip");
}

ToolTip::~ToolTip()
{
    delete ui;
}

void ToolTip::on_pushButton_pressed()
{
    accept();
}
