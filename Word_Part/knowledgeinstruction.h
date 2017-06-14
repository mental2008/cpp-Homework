#ifndef KNOWLEDGEINSTRUCTION_H
#define KNOWLEDGEINSTRUCTION_H

#include <QDialog>

namespace Ui {
class KnowledgeInstruction;
}

class KnowledgeInstruction : public QDialog
{
    Q_OBJECT

public:
    explicit KnowledgeInstruction(QWidget *parent = 0);
    ~KnowledgeInstruction();

private:
    Ui::KnowledgeInstruction *ui;
};

#endif // KNOWLEDGEINSTRUCTION_H
