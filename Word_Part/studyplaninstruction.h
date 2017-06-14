#ifndef STUDYPLANINSTRUCTION_H
#define STUDYPLANINSTRUCTION_H

#include <QDialog>

namespace Ui {
class StudyPlanInstruction;
}

class StudyPlanInstruction : public QDialog
{
    Q_OBJECT

public:
    explicit StudyPlanInstruction(QWidget *parent = 0);
    ~StudyPlanInstruction();

private:
    Ui::StudyPlanInstruction *ui;
};

#endif // STUDYPLANINSTRUCTION_H
