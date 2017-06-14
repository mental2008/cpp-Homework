#ifndef MESSAGEWINDOWC_H
#define MESSAGEWINDOWC_H

#include <QDialog>

namespace Ui {
class MessageWindowC;
}

class MessageWindowC : public QDialog
{
    Q_OBJECT

public:
    explicit MessageWindowC(QDialog *parent = 0);
    ~MessageWindowC();

private:
    Ui::MessageWindowC *ui;

private slots:
    void receiveData(QString data);
};

#endif // MESSAGEWINDOWC_H
