#ifndef ADDNOTEWINDOW_H
#define ADDNOTEWINDOW_H

#include <QMainWindow>

namespace Ui {
class AddNoteWindow;
}

class AddNoteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddNoteWindow(QWidget *parent = 0);
    ~AddNoteWindow();

private slots:
    void on_ButtonAdd_pressed();

private:
    Ui::AddNoteWindow *ui;
};

#endif // ADDNOTEWINDOW_H
