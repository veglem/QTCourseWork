//
// Created by vzhur on 18.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_orders.h" resolved

#include "orders.h"

#include <utility>
#include "ui_orders.h"


orders::orders(QWidget *parent, QString user, QString pass, QString comp_name, QStringList list, bool admin_md) :
        QWidget(parent), ui(new Ui::orders), username(std::move(user)), password(std::move(pass)) {
    ui->setupUi(this);
    admin_mode = admin_md;
    name_ = std::move(comp_name);
    comp_list = std::move(list);
    ui->label->setText(username);

    ui->tabWidget->clear();

    manager = new QNetworkAccessManager();
    add_manager = new QNetworkAccessManager();
    add_company_manager = new QNetworkAccessManager();
    connect(this->manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_order_info(QNetworkReply * )));
    connect(this->ui->back_btn, &QPushButton::clicked, this, &orders::back);
    connect(this->ui->add_btn, &QPushButton::clicked, this, &orders::add_order);
    connect(this->ui->next_btn, &QPushButton::clicked, this, &orders::next_company);
    connect(this->ui->prev_btn, &QPushButton::clicked, this, &orders::prev_company);
    connect(this->add_company_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_new_company(QNetworkReply *)));

    QString url = "http://localhost/api/v1/project?auth=" + password + "&user=" + username + "&name=" + name_;
    QString url2 = "http://localhost/api/v1/company?auth=" + password + "&user=" + username + "&name=" + name_;
    add_request.setUrl(QUrl(url2));
    request.setUrl(QUrl(url));
    add_company_manager->get(add_request);
    manager->get(request);
}

orders::~orders() {
    delete ui;
}

void orders::add_order_info(QNetworkReply *reply) {
    ui->tabWidget->clear();
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    if (result.empty()) {
        addOrder *dialog = new addOrder();
        dialog->exec();
        QJsonObject body;
        if (!dialog->result()) {
            projects *proj_win = new projects(this->parentWidget(), username, password, admin_mode);
            proj_win->show();
            this->close();
            return;
        }
        body["project_name"] = dialog->ui->project_name->text();
        body["description"] = dialog->ui->description->toPlainText();
        body["tech_task"] = dialog->ui->tech_task->toPlainText();
        QString url = "http://localhost/api/v1/project?auth=" + password + "&user=" + username + "&name=" + name_;
        connect(this->add_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_new_order(QNetworkReply * )));
        request.setUrl(QUrl(url));
        request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
        add_manager->post(request, QJsonDocument(body).toJson());
        return;
    }
    for (auto i: result) {
        QStringList params = {i.toObject()["project_name"].toString(),
                              i.toObject()["description"].toString(),
                              i.toObject()["tech_task"].toString()};
        if (i.toObject()["status"].toString() == "f") {
            params.push_back("выполняется");
        } else {
            params.push_back("выполнено");
        }
        params.push_back(i.toObject()["price"].toString() + " руб.");
        params.push_back(i.toObject()["deadline"].toString());
        params.push_back(i.toObject()["start_date"].toString());
        order_widg *tmp_widg = new order_widg(this->ui->tabWidget, params, admin_mode);
        ui->tabWidget->addTab(tmp_widg, params[0]);
//        tmp_widg->show();

    }
    ui->tabWidget->setCurrentIndex(0);
//    ui->project_name->setText(result[0].toObject()["project_name"].toString());
//    ui->description->setText(result[0].toObject()["description"].toString());
//    ui->tech_task->setText(result[0].toObject()["tech_task"].toString());
//    if(result[0].toObject()["status"].toString() == "f"){
//        ui->status->setText("выполняется");
//    } else{
//        ui->status->setText("выполнено");
//    }
//    ui->price->setText(result[0].toObject()["price"].toString() + " руб.");
//    ui->deadline->setText(result[0].toObject()["deadline"].toString());
//    ui->start_date->setText(result[0].toObject()["start_date"].toString());
}

void orders::add_new_order(QNetworkReply *reply) {
    if (reply->error()) {
        return;
    }
    orders *reload;
    reload = new orders(this->parentWidget(), username, password, name_, comp_list, admin_mode);
    reload->show();
    this->close();
}

void orders::back() {
    projects *win;
    win = new projects(this->parentWidget(), username, password, admin_mode);
    win->show();
    this->close();
}

void orders::add_order() {
    addOrder *dialog = new addOrder();
    dialog->exec();
    QJsonObject body;
    if (!dialog->result()) {
        return;
    } else if (dialog->ui->project_name->text().isEmpty() || dialog->ui->description->toPlainText().isEmpty() ||
               dialog->ui->tech_task->toPlainText().isEmpty()) {
        return;
    }
    body["project_name"] = dialog->ui->project_name->text();
    body["description"] = dialog->ui->description->toPlainText();
    body["tech_task"] = dialog->ui->tech_task->toPlainText();
    QString url = "http://localhost/api/v1/project?auth=" + password + "&user=" + username + "&name=" + name_;
    connect(this->add_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_new_order(QNetworkReply * )));
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->post(request, QJsonDocument(body).toJson());
}

void orders::add_new_company(QNetworkReply *reply) {
    if (reply->error()) {
        return;
    }
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    ui->company_name->setText(result[0].toObject()["company_name"].toString());
    ui->description->setText(result[0].toObject()["description"].toString());
    ui->email->setText(result[0].toObject()["email"].toString());
}

void orders::next_company() {
    auto i = std::find(comp_list.begin(), comp_list.end(), name_);
    ++i;
    if(i == comp_list.end()){
        i = comp_list.begin();
    }
    name_ = *i;
    QString url = "http://localhost/api/v1/project?auth=" + password + "&user=" + username + "&name=" + name_;
    QString url2 = "http://localhost/api/v1/company?auth=" + password + "&user=" + username + "&name=" + name_;
    add_request.setUrl(QUrl(url2));
    request.setUrl(QUrl(url));
    add_company_manager->get(add_request);
    manager->get(request);
}

void orders::prev_company() {
    auto i = std::find(comp_list.begin(), comp_list.end(), name_);
    if(i == comp_list.begin()){
        i = comp_list.end();
    }
    --i;
    name_ = *i;
    QString url = "http://localhost/api/v1/project?auth=" + password + "&user=" + username + "&name=" + name_;
    QString url2 = "http://localhost/api/v1/company?auth=" + password + "&user=" + username + "&name=" + name_;
    add_request.setUrl(QUrl(url2));
    request.setUrl(QUrl(url));
    add_company_manager->get(add_request);
    manager->get(request);
}


