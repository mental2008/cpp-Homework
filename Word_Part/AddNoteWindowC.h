#ifndef ADDNOTEWINDOWC_H
#define ADDNOTEWINDOWC_H

#include <QMainWindow>

namespace Ui {
class AddNoteWindowC;
}

class AddNoteWindowC : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddNoteWindowC(QWidget *parent = 0);
    ~AddNoteWindowC();

private slots:
    void on_ButtonAdd_pressed();

private:
    Ui::AddNoteWindowC *ui;
};

#endif // ADDNOTEWINDOWC_H
