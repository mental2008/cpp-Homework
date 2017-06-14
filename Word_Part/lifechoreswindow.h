#ifndef LIFECHORESWINDOW_H
#define LIFECHORESWINDOW_H
#include<QCloseEvent>
#include <QMainWindow>
#include<QListWidgetItem>
namespace Ui {
class LifeChoresWindow;
}

class LifeChoresWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LifeChoresWindow(QWidget *parent = 0);
    ~LifeChoresWindow();
    void closeEvent(QCloseEvent *event);
private slots:
    void on_AddNote_clicked();

    void on_Refresh_pressed();








    void on_ListOfNote_itemDoubleClicked(QListWidgetItem *item);


    void on_DeleteNote_pressed();

    void on_EditNote_pressed();

    void on_ListAllNote_pressed();

private:
    Ui::LifeChoresWindow *ui;

signals:
    void sendData(QString);
};

#endif // LIFECHORESWINDOW_H
