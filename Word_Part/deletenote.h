#ifndef DELETENOTE_H
#define DELETENOTE_H

#include <QDialog>

namespace Ui {
class DeleteNote;
}

class DeleteNote : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteNote(QWidget *parent = 0);
    ~DeleteNote();

private slots:
    void on_pushButtonDelete_pressed();

private:
    Ui::DeleteNote *ui;
};

#endif // DELETENOTE_H
