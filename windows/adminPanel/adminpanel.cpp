//
// Created by vzhur on 18.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_adminPanel.h" resolved

#include "adminpanel.h"
#include "ui_adminPanel.h"


adminPanel::adminPanel(QWidget *parent, QString username, QString password) :
        QWidget(parent), ui(new Ui::adminPanel), user(std::move(username)), pass(std::move(password)) {
    ui->setupUi(this);
    connect(this->ui->users_btn, &QPushButton::clicked, this, &adminPanel::open_users);
    connect(this->ui->pushButton, &QPushButton::clicked, this, &adminPanel::back_btn);
    connect(this->ui->dev_btn, &QPushButton::clicked, this, &adminPanel::open_dev_team);
    connect(this->ui->pos_btn, &QPushButton::clicked, this, &adminPanel::open_pos);
}

adminPanel::~adminPanel() {
    delete ui;
}

void adminPanel::open_users() {
    users* user_win = new users(this->parentWidget(), user, pass);
    user_win->show();
    this->close();
}

void adminPanel::back_btn() {
    Login* log_win = new Login(this->parentWidget());
    log_win->show();
    this->close();
}

void adminPanel::open_dev_team() {
    dev_teams* team_win = new dev_teams(this->parentWidget());
    team_win->show();
    this->close();
}

void adminPanel::open_pos() {
    positions* pos_win = new positions(this->parentWidget());
    pos_win->show();
    this->close();
}
