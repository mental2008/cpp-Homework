#ifndef LIFECHORESINSTRUCTION_H
#define LIFECHORESINSTRUCTION_H

#include <QDialog>

namespace Ui {
class LifeChoresInstruction;
}

class LifeChoresInstruction : public QDialog
{
    Q_OBJECT

public:
    explicit LifeChoresInstruction(QWidget *parent = 0);
    ~LifeChoresInstruction();

private:
    Ui::LifeChoresInstruction *ui;
};

#endif // LIFECHORESINSTRUCTION_H
