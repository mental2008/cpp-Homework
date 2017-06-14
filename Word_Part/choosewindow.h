#ifndef CHOOSEWINDOW_H
#define CHOOSEWINDOW_H

#include <QMainWindow>

namespace Ui {
class ChooseWindow;
}

class ChooseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChooseWindow(QWidget *parent = 0);
    ~ChooseWindow();

private slots:
    void on_actionKnowledge_triggered();

    void on_actionLife_chores_triggered();

    void on_actionStudy_plan_triggered();

    void on_actionWord_list_triggered();

    void on_WordListButton_pressed();

    void on_KnowledgeButton_pressed();

    void on_LifeChoresButton_pressed();

    void on_StudyPlanButton_pressed();

private:
    Ui::ChooseWindow *ui;
};

#endif // CHOOSEWINDOW_H
