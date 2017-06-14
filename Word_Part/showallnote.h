#ifndef SHOWALLNOTE_H
#define SHOWALLNOTE_H
#include<StudyPlan.h>
#include <QDialog>

namespace Ui {
class ShowAllNote;
}

class ShowAllNote : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAllNote(QWidget *parent = 0);
    ~ShowAllNote();
    static bool cmp(StudyPlan x, StudyPlan y)
    {
        return x.getShown() < y.getShown();
    }

private:
    Ui::ShowAllNote *ui;
};

#endif // SHOWALLNOTE_H
