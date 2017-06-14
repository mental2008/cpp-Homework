#ifndef MESSAGEWINDOW_H
#define MESSAGEWINDOW_H

#include <QDialog>

namespace Ui {
class MessageWindow;
}

class MessageWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MessageWindow(QDialog *parent = 0);
    ~MessageWindow();

private:
    Ui::MessageWindow *ui;

private slots:
    void receiveData(QString data);
};

#endif // MESSAGEWINDOW_H
