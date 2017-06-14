#ifndef TOOLTIPC_H
#define TOOLTIPC_H

#include <QDialog>

namespace Ui {
class ToolTipC;
}

class ToolTipC : public QDialog
{
    Q_OBJECT

public:
    explicit ToolTipC(QWidget *parent = 0);
    ~ToolTipC();

private slots:
    void on_pushButton_pressed();

private:
    Ui::ToolTipC *ui;
};

#endif // TOOLTIPC_H
