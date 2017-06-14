#ifndef USERINSTRUCTIONS_H
#define USERINSTRUCTIONS_H

#include <QDialog>

namespace Ui {
class UserInstructions;
}

class UserInstructions : public QDialog
{
    Q_OBJECT

public:
    explicit UserInstructions(QWidget *parent = 0);
    ~UserInstructions();

private:
    Ui::UserInstructions *ui;
};

#endif // USERINSTRUCTIONS_H
