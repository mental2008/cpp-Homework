#ifndef CHANGEWORDDIALOG_H
#define CHANGEWORDDIALOG_H

#include <QDialog>
#include <word.h>

namespace Ui {
class ChangeWordDialog;
}

class ChangeWordDialog : public QDialog
{
    Q_OBJECT

public:
    ChangeWordDialog(Word word, QWidget *parent = 0);
    ~ChangeWordDialog();

private slots:
    void on_acceptButton_pressed();

    void on_cancelButton_pressed();

    void on_nounCheck_stateChanged(int arg1);

    void on_verbCheck_stateChanged(int arg1);

    void on_adjectiveCheck_stateChanged(int arg1);

    void on_adverbCheck_stateChanged(int arg1);

signals:
    void emitWord(Word);

private:
    Ui::ChangeWordDialog *ui;
};

#endif // CHANGEWORDDIALOG_H
