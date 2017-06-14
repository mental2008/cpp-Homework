#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <string>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_PasswordDisplayButton_pressed();

    void on_PasswordDisplayButton_released();

    void on_PasswordInput_textChanged(const QString &arg1);

    void on_LoginButton_clicked();


    void on_actionAbout_the_program_triggered();

    void on_actionAbout_the_authors_triggered();

    void on_actionUser_Instructions_triggered();

private:
    Ui::LoginWindow *ui;
    std::string nowPassword;
    std::string truePassword;
};

#endif // LOGINWINDOW_H
