#ifndef EDITNOTEC_H
#define EDITNOTEC_H

#include <QDialog>

namespace Ui {
class EditNoteC;
}

class EditNoteC : public QDialog
{
    Q_OBJECT

public:
    explicit EditNoteC(QWidget *parent = 0);
    ~EditNoteC();

private slots:
    void on_pushButtonEdit_pressed();



    void on_pushButtonSave_pressed();

private:
    Ui::EditNoteC *ui;
};

#endif // EDITNOTEC_H
