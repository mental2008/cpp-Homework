#ifndef TOOLTIP_H
#define TOOLTIP_H

#include <QDialog>

namespace Ui {
class ToolTip;
}

class ToolTip : public QDialog
{
    Q_OBJECT

public:
    explicit ToolTip(QWidget *parent = 0);
    ~ToolTip();

private slots:
    void on_pushButton_pressed();

private:
    Ui::ToolTip *ui;
};

#endif // TOOLTIP_H
