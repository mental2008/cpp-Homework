#ifndef WORDLISTINSTRUCTION_H
#define WORDLISTINSTRUCTION_H

#include <QDialog>

namespace Ui {
class WordListInstruction;
}

class WordListInstruction : public QDialog
{
    Q_OBJECT

public:
    explicit WordListInstruction(QWidget *parent = 0);
    ~WordListInstruction();

private:
    Ui::WordListInstruction *ui;
};

#endif // WORDLISTINSTRUCTION_H
