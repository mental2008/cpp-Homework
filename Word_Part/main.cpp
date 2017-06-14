#include "wordwindow.h"
#include <QApplication>
#include "loginwindow.h"
#include "ctime"
#include "windows.h"
#include <iostream>
#include <QLabel>
#include "note.h"
#include <fstream>
#include "addworddialog.h"
#include <QMessageBox>
#include "studyplanwindow.h"
#include "studytextpicture.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LoginWindow *loginWindow = new LoginWindow;
    loginWindow->show();

    return app.exec();
}
