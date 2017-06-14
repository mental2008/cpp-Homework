#ifndef SHOWALLNOTEC_H
#define SHOWALLNOTEC_H
#include<LifeChores.h>
#include <QDialog>

namespace Ui {
class ShowAllNoteC;
}

class ShowAllNoteC : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAllNoteC(QWidget *parent = 0);
    ~ShowAllNoteC();
    static bool cmp(LifeChores x, LifeChores y)
    {
        return x.getShown() < y.getShown();
    }

private:
    Ui::ShowAllNoteC *ui;
};

#endif // SHOWALLNOTEC_H
