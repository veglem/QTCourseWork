//
// Created by vzhur on 19.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_order_widg.h" resolved

#include "order_widg.h"
#include "ui_order_widg.h"
#include "ui_edit_order.h"


order_widg::order_widg(QWidget *parent, QStringList params, bool admin_md) :
        QWidget(parent), ui(new Ui::order_widg) {
    ui->setupUi(this);
    admin_mode = admin_md;
    if(!admin_mode){
        ui->del_btn->hide();
        ui->change_btn->hide();
    }
    manager = new QNetworkAccessManager();
    connect(ui->del_btn, &QPushButton::clicked, this, &order_widg::delete_order);
    connect(ui->change_btn, &QPushButton::clicked, this, &order_widg::change_order);

    ui->project_name->setText(params[0]);
    ui->description->setText(params[1]);
    ui->tech_task->setText(params[2]);
    ui->status->setText(params[3]);
    ui->price->setText(params[4]);
    ui->deadline->setText(params[5]);
    ui->start_date->setText(params[6]);
}

order_widg::~order_widg() {
    delete ui;
}

void order_widg::delete_order() {

    QNetworkRequest req;
    QString url = "http://localhost/api/v1/project?auth=8141937955048696534&user=admin&name=" + ui->project_name->text();
    req.setUrl(QUrl(url));
    manager->deleteResource(req);
    this->hide();
    delete this;

}

void order_widg::change_order() {
    QStringList paramets;
    paramets.push_back(ui->project_name->text());
    paramets.push_back(ui->description->text());
    paramets.push_back(ui->tech_task->text());
    paramets.push_back(ui->status->text());

    paramets.push_back(QString::fromStdString(ui->price->text().toStdString().substr(0, ui->price->text().toStdString().size() - 8)));

    paramets.push_back(ui->deadline->text());
    paramets.push_back(ui->start_date->text());
    edit_order* edit_win = new edit_order(this, paramets);
    edit_win->exec();
    if(!edit_win->result()){
        return;
    }else if(edit_win->ui->project_name->text() == "" ||
            edit_win->ui->description->toPlainText() == "" ||
            edit_win->ui->tech_task->toPlainText() == "" ||
            edit_win->ui->price->text() == ""){
        return;
    }
    QJsonObject body;
    body["project_name"] = edit_win->ui->project_name->text();
    body["description"] = edit_win->ui->description->toPlainText();
    body["tech_task"] = edit_win->ui->tech_task->toPlainText();
    if(edit_win->ui->status->checkState() != Qt::Unchecked){
        body["status"] = "true";
    } else{
        body["status"] = "false";
    }
    body["price"] = edit_win->ui->price->text();
    body["deadline"] = QString::fromStdString(std::to_string(edit_win->ui->deadline->date().year())) + "-" +
            QString::fromStdString(std::to_string(edit_win->ui->deadline->date().month())) + "-" +
            QString::fromStdString(std::to_string(edit_win->ui->deadline->date().day()));
    body["start_date"] = QString::fromStdString(std::to_string(edit_win->ui->start_date->date().year())) + "-" +
                         QString::fromStdString(std::to_string(edit_win->ui->start_date->date().month())) + "-" +
                         QString::fromStdString(std::to_string(edit_win->ui->start_date->date().day()));

    QString url = "http://localhost/api/v1/project?auth=8141937955048696534&user=admin&name=" + this->ui->project_name->text();
    this->ui->project_name->setText(edit_win->ui->project_name->text());
    this->ui->description->setText(edit_win->ui->description->toPlainText());
    this->ui->tech_task->setText(edit_win->ui->tech_task->toPlainText());
    this->ui->status->setText(body["status"].toString());
    this->ui->price->setText(body["price"].toString() + " руб.");
    this->ui->deadline->setText(body["deadline"].toString());
    this->ui->start_date->setText(body["start_date"].toString());
//    connect(this->add_manager, SIGNAL(finished(QNetworkReply * )), this->parentWidget()->parentWidget()->parentWidget()->parentWidget(), SLOT(add_new_company(QNetworkReply * )));
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    manager->put(request, QJsonDocument(body).toJson());
}
