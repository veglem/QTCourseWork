//
// Created by vzhur on 22.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_dev_teams.h" resolved

#include "dev_teams.h"
#include "ui_dev_teams.h"
#include "ui_dev_add_win.h"


dev_teams::dev_teams(QWidget *parent) :
        QWidget(parent), ui(new Ui::dev_teams) {
    ui->setupUi(this);

    manager = new QNetworkAccessManager();
    connect(this->manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(fill_scroll_area(QNetworkReply * )));
    connect(this->ui->add_btn, &QPushButton::clicked, this, &dev_teams::add_team);
    connect(ui->back_btn, &QPushButton::clicked, this, &dev_teams::back);
    QString url = "http://localhost/api/v1/dev_team?auth=8141937955048696534&user=admin";
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    manager->get(request);
}

dev_teams::~dev_teams() {
    delete ui;
}

void dev_teams::fill_scroll_area(QNetworkReply *reply) {
    users::clearLayout(ui->scrollAreaWidgetContents->layout());
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    for (auto &&i: result) {
        //ui->scrollArea->setWidget(new company(this, i.toObject()["email"].toString(), i.toObject()["description"].toString(), i.toObject()["company_name"].toString()));
        team_widj *temp = new team_widj(this, i.toObject()["email"].toString());

//        auto it = Companies.begin();

        ui->scrollAreaWidgetContents->layout()->addWidget(temp);
//        connect(temp->ui., &QPushButton::clicked, temp, &company::get_project);
    }


}

void dev_teams::add_team() {
    add_manager = new QNetworkAccessManager();
    dev_add_win* add_win = new dev_add_win(this);
    add_win->exec();
    if(!add_win->result()){
        return;
    } else if(add_win->ui->email->text() == ""){
        return;
    }
    QJsonObject body;
    body["email"] = add_win->ui->email->text();
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/dev_team?auth=8141937955048696534&user=admin";
//    connect(this->manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_new_company(QNetworkReply * )));
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->post(request, QJsonDocument(body).toJson());

    team_widj* newWidj = new team_widj(this, add_win->ui->email->text());
    ui->scrollAreaWidgetContents->layout()->addWidget(newWidj);
}

void dev_teams::back() {
    adminPanel* back_win = new adminPanel(this->parentWidget(), "admin", "8141937955048696534");
    back_win->show();
    this->close();
}
