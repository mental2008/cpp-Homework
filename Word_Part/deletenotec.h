#ifndef DELETENOTEC_H
#define DELETENOTEC_H

#include <QDialog>

namespace Ui {
class DeleteNoteC;
}

class DeleteNoteC : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteNoteC(QWidget *parent = 0);
    ~DeleteNoteC();

private slots:
    void on_pushButtonDelete_pressed();

private:
    Ui::DeleteNoteC *ui;
};

#endif // DELETENOTEC_H
