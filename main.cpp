#include <QApplication>
#include <QPushButton>

#include "windows/login/login.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
//    QWidget* widget = new QWidget;
    Login* login = new Login();
    login->show();


    return QApplication::exec();
}
