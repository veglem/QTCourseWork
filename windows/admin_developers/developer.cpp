//
// Created by vzhur on 22.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_developer.h" resolved

#include "developer.h"
#include "ui_developer.h"
#include "ui_addDev.h"


developer::developer(QWidget *parent, const QString& email) :
        QWidget(parent), ui(new Ui::developer) {
    ui->setupUi(this);
    visible = false;
    connect(this->ui->toolButton, &QPushButton::clicked, this, &developer::contxt_menu_chg_state);
    ui->widget->hide();
    ui->add_btn->hide();

    dev_open_manager = new QNetworkAccessManager();
    ui->team_email->setText(email);
    connect(ui->open_devs, &QPushButton::clicked, this, &developer::open_developers);
    connect(ui->open_dev_proj, &QPushButton::clicked, this, &developer::open_projects);
    connect(ui->back_btn, &QPushButton::clicked, this, &developer::back);
    open_projects();
}

developer::~developer() {
    delete ui;
}

void developer::contxt_menu_chg_state() {
    if(visible){
        this->ui->widget->hide();
        visible = false;
    }else{
        this->ui->widget->show();
        visible = true;
    }
}

void developer::open_developers() {
    ui->add_btn->show();
    users::clearLayout(ui->scrollAreaWidgetContents_2->layout());
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/developer?auth=8141937955048696534&user=admin";
    request.setUrl(QUrl(url));
    dev_open_manager->get(request);
    connect(this->dev_open_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(fill_developers(QNetworkReply * )));
    connect(this->ui->add_btn, &QPushButton::clicked, this, &developer::add_position);
}

void developer::fill_developers(QNetworkReply *reply) {
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    for (auto &&i: result) {
        QStringList params;
        params.push_back(i.toObject()["full_name"].toString());
        params.push_back(i.toObject()["email"].toString());
        params.push_back(i.toObject()["xp_years"].toString());
        params.push_back(i.toObject()["garde"].toString());
        params.push_back(i.toObject()["pos_name"].toString());
        if(i.toObject()["team_email"].toString() != ui->team_email->text()){
            continue;
        }
        dev_widg *temp = new dev_widg(this, params, ui->team_email->text());
        ui->scrollAreaWidgetContents_2->layout()->addWidget(temp);
    }
}

void developer::back() {
    dev_teams* panel = new dev_teams(this->parentWidget());
    panel->show();
    this->close();
}

void developer::add_dev(QNetworkReply * reply) {
    add_manager = new QNetworkAccessManager();
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    QStringList position;
    for (auto &&i: result) {
        position.push_back(i.toObject()["pos_name"].toString());
    }
    addDev* dev_chg_win = new addDev(this);
    dev_chg_win->ui->team->hide();
    dev_chg_win->ui->label_6->hide();
    dev_chg_win->ui->position->addItems(position);
    dev_chg_win->exec();
    if(!dev_chg_win->result()){
        return;
    }
    if(dev_chg_win->ui->full_name->text().isEmpty() || dev_chg_win->ui->email->text().isEmpty() || dev_chg_win->ui->grade->text().isEmpty()){
        this->hide();
    }
    for(auto i : dev_chg_win->ui->xp_years->text()) {
        if (!i.isDigit()) {
            return;

        }
    }

    QJsonObject body;
    body["full_name"] = dev_chg_win->ui->full_name->text();
    body["email"] = dev_chg_win->ui->email->text();
    body["xp_years"] = dev_chg_win->ui->xp_years->text();
    body["grade"] = dev_chg_win->ui->grade->text();
    body["position"] = dev_chg_win->ui->position->itemText(dev_chg_win->ui->position->currentIndex());
    body["team_email"] = ui->team_email->text();
    QStringList params;
    params.push_back(dev_chg_win->ui->full_name->text());
    params.push_back(dev_chg_win->ui->email->text());
    params.push_back(dev_chg_win->ui->xp_years->text());
    params.push_back(dev_chg_win->ui->grade->text());
    params.push_back(dev_chg_win->ui->position->itemText(dev_chg_win->ui->position->currentIndex()));

    dev_widg *temp = new dev_widg(this, params, ui->team_email->text());
    ui->scrollAreaWidgetContents_2->layout()->addWidget(temp);
    QNetworkRequest request;
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    QString url = "http://localhost/api/v1/developer?auth=8141937955048696534&user=admin";
    request.setUrl(QUrl(url));
    add_manager->post(request, QJsonDocument(body).toJson());
}

void developer::add_position() {
    pos_manager = new QNetworkAccessManager();
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/position?auth=8141937955048696534&user=admin";
    request.setUrl(QUrl(url));
    pos_manager->get(request);
    connect(this->pos_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_dev(QNetworkReply * )));
}

void developer::fill_projects(QNetworkReply *reply) {
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    for (auto &&i: result) {
        QStringList params;
        params.push_back(i.toObject()["project_name"].toString());
        params.push_back(i.toObject()["description"].toString());
        params.push_back(i.toObject()["tech_task"].toString());
        if(i.toObject()["status"].toString() == "f"){
            params.push_back("выполняется");
        } else{
            params.push_back("выполнено");
        }
        params.push_back(i.toObject()["price"].toString());
        params.push_back(i.toObject()["deadline"].toString());
        params.push_back(i.toObject()["start_date"].toString());
        order_widg *temp = new order_widg(this, params, false);
        ui->scrollAreaWidgetContents_2->layout()->addWidget(temp);
    }
}

void developer::open_projects() {
    proj_open_manager = new QNetworkAccessManager();
    ui->add_btn->hide();
    users::clearLayout(ui->scrollAreaWidgetContents_2->layout());
    QNetworkRequest request;
    QString url = "http://localhost/api/v1/dev/company?auth=8141937955048696534&user=admin&name=";
    url += ui->team_email->text();
    request.setUrl(QUrl(url));
    proj_open_manager->get(request);
    connect(this->proj_open_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(fill_projects(QNetworkReply * )));
}
