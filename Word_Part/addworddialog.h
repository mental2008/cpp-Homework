#ifndef ADDWORDDIALOG_H
#define ADDWORDDIALOG_H

#include <QDialog>
#include "word.h"

namespace Ui {
class AddWordDialog;
}

class AddWordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddWordDialog(QWidget *parent = 0);
    ~AddWordDialog();

private slots:

    void on_nounCheck_stateChanged(int arg1);

    void on_verbCheck_stateChanged(int arg1);

    void on_adjectiveCheck_stateChanged(int arg1);

    void on_adverbCheck_stateChanged(int arg1);

    void on_acceptButton_pressed();

    void on_cancelButton_pressed();

signals:
    void emitWord(Word);


private:
    Ui::AddWordDialog *ui;
};

#endif // ADDWORDDIALOG_H
