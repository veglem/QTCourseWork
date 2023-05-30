//
// Created by vzhur on 21.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_users.h" resolved

#include "users.h"
#include "ui_users.h"


users::users(QWidget *parent, QString username, QString password) :
        QWidget(parent), ui(new Ui::users), user(std::move(username)), pass(std::move(password)) {
    ui->setupUi(this);
    manager = new QNetworkAccessManager();
    connect(this->ui->search_btn, &QPushButton::clicked, this, &users::search);
    connect(this->manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(fill_users(QNetworkReply * )));
    connect(this->ui->back_btn, &QPushButton::clicked, this, &users::back_btn);
    QString url = "http://localhost/api/v1/users?auth=" + pass + "&user=" + user + "&name=";

    request.setUrl(QUrl(url));
    manager->get(request);

}

users::~users() {
    delete ui;
}

void users::fill_users(QNetworkReply *reply) {

    users::clearLayout(ui->users_2);
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();

    for (auto &&i: result) {
        if(i.toObject()["login"].toString() == "admin"){
            continue;
        }
        //ui->scrollArea->setWidget(new company(this, i.toObject()["email"].toString(), i.toObject()["description"].toString(), i.toObject()["company_name"].toString()));
        user_element *temp = new user_element(this, user, pass, i.toObject()["login"].toString(), i.toObject()["password"].toString());

//        auto it = Companies.begin();

        ui->users_2->addWidget(temp);
//        connect(temp->ui->pushButton, &QPushButton::clicked, temp, &company::get_project);
    }
}

void users::search() {
    QString url = "http://localhost/api/v1/users?auth=" + pass + "&user=" + user + "&name=" + ui->searc_field->text();
    request.setUrl(QUrl(url));
    manager->get(request);
}

void users::back_btn() {
    adminPanel* admin_win = new adminPanel(this->parentWidget(), user, pass);
    admin_win->show();
    this->close();
}

void users::clearLayout(QLayout *layout) {
    if (layout == NULL)
        return;
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}