#include "abouttheauthorswindow.h"
#include "ui_abouttheauthorswindow.h"

AboutTheAuthorsWindow::AboutTheAuthorsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutTheAuthorsWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("About the authors");
}

AboutTheAuthorsWindow::~AboutTheAuthorsWindow()
{
    delete ui;
}
