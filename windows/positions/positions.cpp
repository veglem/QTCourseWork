//
// Created by vzhur on 30.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_positions.h" resolved

#include "positions.h"
#include "ui_positions.h"
#include "ui_add_pos.h"


positions::positions(QWidget *parent) :
        QWidget(parent), ui(new Ui::positions) {
    ui->setupUi(this);
    pos_click();
    connect(this->ui->back_btn, &QPushButton::clicked, this, &positions::back);
    connect(this->ui->add_btn, &QPushButton::clicked, this, &positions::add_position);
}


positions::~positions() {
    delete ui;
}

void positions::back() {
    adminPanel* adm_win = new adminPanel(this->parentWidget());
    adm_win->show();
    this->close();
}

void positions::pos_click() {
    fill_manager = new QNetworkAccessManager();
    users::clearLayout(ui->scrollAreaWidgetContents->layout());
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/position?auth=8141937955048696534&user=admin";
    request.setUrl(QUrl(url));
    fill_manager->get(request);
    connect(this->fill_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(fill_developers(QNetworkReply * )));
}

void positions::fill_developers(QNetworkReply *reply) {
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    for (auto &&i: result) {
        pos_widg *temp = new pos_widg(this, i.toObject()["pos_name"].toString());
        ui->scrollAreaWidgetContents->layout()->addWidget(temp);
    }
}

void positions::add_position() {
    add_manager = new QNetworkAccessManager();
    add_pos* add_win = new add_pos(this);
    add_win->exec();

    if(!add_win->result()){
        return;
    }
    QJsonObject body;
    body["pos_name"] = add_win->ui->pos_name->text();
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/position?auth=8141937955048696534&user=admin";
    request.setUrl(QUrl(url));
    pos_widg *temp = new pos_widg(this, add_win->ui->pos_name->text());
    ui->scrollAreaWidgetContents->layout()->addWidget(temp);
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->post(request, QJsonDocument(body).toJson());
}
