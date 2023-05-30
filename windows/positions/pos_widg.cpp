//
// Created by vzhur on 30.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_pos_widg.h" resolved

#include "pos_widg.h"
#include "ui_pos_widg.h"
#include "ui_add_pos.h"


pos_widg::pos_widg(QWidget *parent, const QString& pos_name) :
        QWidget(parent), ui(new Ui::pos_widg) {
    ui->setupUi(this);
    ui->pos_name->setText(pos_name);
    connect(this->ui->del_btn, &QPushButton::clicked, this, &pos_widg::del_pos);
    connect(this->ui->chg_btn, &QPushButton::clicked, this, &pos_widg::update_pos);
}

pos_widg::~pos_widg() {
    delete ui;
}

void pos_widg::del_pos() {
    del_maneger = new QNetworkAccessManager();
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/position?auth=8141937955048696534&user=admin&name=";
    url += ui->pos_name->text();
    request.setUrl(QUrl(url));
    del_maneger->deleteResource(request);
    this->close();
    delete this;
}

void pos_widg::update_pos() {
    add_manager = new QNetworkAccessManager();
    add_pos* add_win = new add_pos(this);
    add_win->ui->pos_name->setText(ui->pos_name->text());
    add_win->exec();
    if(!add_win->result()){
        return;
    }
    QJsonObject body;
    body["pos_name"] = add_win->ui->pos_name->text();

    QNetworkRequest request;
    QString url = "http://localhost/api/v1/position?auth=8141937955048696534&user=admin&name=";
    url += ui->pos_name->text();
    ui->pos_name->setText(add_win->ui->pos_name->text());
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->put(request, QJsonDocument(body).toJson());
}


