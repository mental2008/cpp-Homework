#ifndef ABOUTTHEAUTHORSWINDOW_H
#define ABOUTTHEAUTHORSWINDOW_H

#include <QDialog>

namespace Ui {
class AboutTheAuthorsWindow;
}

class AboutTheAuthorsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AboutTheAuthorsWindow(QWidget *parent = 0);
    ~AboutTheAuthorsWindow();

private:
    Ui::AboutTheAuthorsWindow *ui;
};

#endif // ABOUTTHEAUTHORSWINDOW_H
