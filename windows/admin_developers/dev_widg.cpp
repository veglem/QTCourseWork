//
// Created by vzhur on 29.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_dev_widg.h" resolved

#include "dev_widg.h"

#include <utility>
#include "ui_dev_widg.h"
#include "ui_addDev.h"


dev_widg::dev_widg(QWidget *parent, QStringList params, QString t_email) :
        QWidget(parent), ui(new Ui::dev_widg) {
    ui->setupUi(this);
    team_email = std::move(t_email);
    ui->name->setText(params[0]);
    ui->email->setText(params[1]);
    ui->xp_years->setText(params[2]);
    ui->grade->setText(params[3]);
    ui->pos->setText(params[4]);
    is_visible = false;
    ui->widget->hide();
    del_manager = new QNetworkAccessManager();
    position_manager = new QNetworkAccessManager();
    company_manager = new QNetworkAccessManager();
    change_manager = new QNetworkAccessManager();
    connect(ui->toolButton, &QPushButton::clicked, this, &dev_widg::opn_cls_add_info);
    connect(ui->pushButton, &QPushButton::clicked, this, &dev_widg::delete_developer);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &dev_widg::change_developer);
}

dev_widg::~dev_widg() {
    delete ui;
}

void dev_widg::opn_cls_add_info() {
    if(is_visible){
        ui->widget->hide();
        is_visible = false;
    } else{
        ui->widget->show();
        is_visible = true;
    }
}

void dev_widg::delete_developer() {
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/developer?auth=8141937955048696534&user=admin&name=";
    url += ui->name->text();
    request.setUrl(QUrl(url));
    del_manager->deleteResource(request);
    this->close();
    delete this;
}

void dev_widg::change_developer() {
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/position?auth=8141937955048696534&user=admin";
    request.setUrl(QUrl(url));
    position_manager->get(request);
    connect(this->position_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_position(QNetworkReply * )));
}

void dev_widg::add_company(QNetworkReply *reply) {
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    for (auto &&i: result) {
        company.push_back(i.toObject()["email"].toString());
    }
    addDev* dev_chg_win = new addDev(this);
    dev_chg_win->ui->email->setText(ui->email->text());
    dev_chg_win->ui->full_name->setText(ui->name->text());
    dev_chg_win->ui->xp_years->setText(ui->xp_years->text());
    dev_chg_win->ui->grade->setText(ui->grade->text());
    dev_chg_win->ui->position->addItems(position);
    dev_chg_win->ui->team->addItems(company);
    dev_chg_win->exec();
    if(!dev_chg_win->result()){
        return;
    }
    if(dev_chg_win->ui->team->itemText(dev_chg_win->ui->team->currentIndex()) != team_email){
        this->hide();
    }

    QJsonObject body;
    body["full_name"] = dev_chg_win->ui->full_name->text();
    body["email"] = dev_chg_win->ui->email->text();
    body["xp_years"] = dev_chg_win->ui->xp_years->text();
    body["grade"] = dev_chg_win->ui->grade->text();
    body["position"] = dev_chg_win->ui->position->itemText(dev_chg_win->ui->position->currentIndex());
    body["team_email"] = dev_chg_win->ui->team->itemText(dev_chg_win->ui->team->currentIndex());
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/developer?auth=8141937955048696534&user=admin&name=" + ui->name->text();
    ui->name->setText(dev_chg_win->ui->full_name->text());
    ui->email->setText(dev_chg_win->ui->email->text());
    ui->xp_years->setText(dev_chg_win->ui->xp_years->text());
    ui->grade->setText(dev_chg_win->ui->grade->text());
    ui->pos->setText(dev_chg_win->ui->position->itemText(dev_chg_win->ui->position->currentIndex()));
    request.setUrl(QUrl(url));
    change_manager->put(request, QJsonDocument(body).toJson());
}

void dev_widg::add_position(QNetworkReply *reply) {
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    for (auto &&i: result) {
        position.push_back(i.toObject()["pos_name"].toString());
    }
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/dev_team?auth=8141937955048696534&user=admin";
    request.setUrl(QUrl(url));
    company_manager->get(request);
    connect(this->company_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_company(QNetworkReply * )));
}

