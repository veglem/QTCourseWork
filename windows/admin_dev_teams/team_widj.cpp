//
// Created by vzhur on 22.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_team_widj.h" resolved

#include "team_widj.h"
#include "ui_team_widj.h"
#include "ui_dev_add_win.h"


team_widj::team_widj(QWidget *parent, QString email_) :
        QWidget(parent), ui(new Ui::team_widj), email(std::move(email_)) {
    ui->setupUi(this);
    ui->team_email->setText(email);
    connect(this->ui->change_btn, &QPushButton::clicked, this, &team_widj::change);
    connect(this->ui->del_btn, &QPushButton::clicked, this, &team_widj::delete_res);
    connect(this->ui->open_btn, &QPushButton::clicked, this, &team_widj::open_team);

}

team_widj::~team_widj() {
    delete ui;
}

void team_widj::change() {
    add_manager = new QNetworkAccessManager();
    dev_add_win *chang_win = new dev_add_win(this);
    chang_win->ui->email->setText(this->ui->team_email->text());
    chang_win->exec();
    if (!chang_win->result()) {
        return;
    } else if (chang_win->ui->email->text() == "") {
        return;
    }
    QJsonObject body;
    body["email"] = chang_win->ui->email->text();
    QNetworkRequest request;
    QString url =
            "http://localhost/api/v1/dev_team?auth=8141937955048696534&user=admin&name=" + this->ui->team_email->text();
//    connect(this->manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_new_company(QNetworkReply * )));
    request.setUrl(QUrl(url));
    this->ui->team_email->setText(chang_win->ui->email->text());
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->put(request, QJsonDocument(body).toJson());
}

void team_widj::delete_res() {
    del_manager = new QNetworkAccessManager();
    QNetworkRequest request;
    QString url =
            "http://localhost/api/v1/dev_team?auth=8141937955048696534&user=admin&name=" + this->ui->team_email->text();
    request.setUrl(QUrl(url));
    del_manager->deleteResource(request);
    this->hide();
}

void team_widj::open_team() {
    developer* dev_widg = new developer(this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget(), ui->team_email->text());
    dev_widg->show();
    this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->close();
}
