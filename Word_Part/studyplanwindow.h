#ifndef STUDYPLANWINDOW_H
#define STUDYPLANWINDOW_H
#include<QCloseEvent>
#include <QMainWindow>
#include<QListWidgetItem>
namespace Ui {
class StudyPlanWindow;
}

class StudyPlanWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudyPlanWindow(QWidget *parent = 0);
    ~StudyPlanWindow();
    void closeEvent(QCloseEvent *event);
private slots:
    void on_AddNote_clicked();

    void on_Refresh_pressed();








    void on_ListOfNote_itemDoubleClicked(QListWidgetItem *item);


    void on_DeleteNote_pressed();

    void on_EditNote_pressed();

    void on_ListAllNote_pressed();

private:
    Ui::StudyPlanWindow *ui;

signals:
    void sendData(QString);
};

#endif // STUDYPLANWINDOW_H
