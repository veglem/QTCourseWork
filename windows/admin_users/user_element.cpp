//
// Created by vzhur on 21.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_user_element.h" resolved

#include "user_element.h"
#include "ui_user_element.h"


user_element::user_element(QWidget *parent, QString username, QString password, const QString& login, QString us_pass) :
        QWidget(parent), ui(new Ui::user_element), user(std::move(username)), pass(std::move(password)), us_password(std::move(us_pass)) {
    ui->setupUi(this);
    ui->user->setText(login);
    connect(this->ui->pushButton, &QPushButton::clicked, this, &user_element::open_user);
}

user_element::~user_element() {
    delete ui;
}

void user_element::open_user() {
    projects* proj_adm_win = new projects(this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget(), ui->user->text(), us_password, true);
    proj_adm_win->show();
    this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->close();
}
