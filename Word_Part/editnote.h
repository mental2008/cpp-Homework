#ifndef EDITNOTE_H
#define EDITNOTE_H

#include <QDialog>

namespace Ui {
class EditNote;
}

class EditNote : public QDialog
{
    Q_OBJECT

public:
    explicit EditNote(QWidget *parent = 0);
    ~EditNote();

private slots:
    void on_pushButtonEdit_pressed();



    void on_pushButtonSave_pressed();

private:
    Ui::EditNote *ui;
};

#endif // EDITNOTE_H
