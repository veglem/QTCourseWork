//
// Created by vzhur on 18.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_company.h" resolved

#include "company.h"

#include <utility>
#include "ui_company.h"
#include "ui_addCompany.h"


company::company(QWidget *parent, const QString& email, const QString& description, const QString& name, QString  user, QString  pass, QStringList list, bool admin_md) :
        QWidget(parent), ui(new Ui::company), username(std::move(user)), password(std::move(pass)) {
    ui->setupUi(this);
    ui->email->setText(email);
    ui->description->setText(description);
    ui->name->setText(name);
    comp_list = std::move(list);
    add_manager = new QNetworkAccessManager();
    admin_mode = admin_md;
    if(!admin_mode){
        ui->del_btn->hide();
    }
    connect(this->ui->change_btn, &QPushButton::clicked, this, &company::edit_company);
    connect(this->ui->del_btn, &QPushButton::clicked, this, &company::delete_company);

}

company::~company() {
    delete ui;
}

void company::get_project() {
    orders* order;
    order = new orders(this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget(), username, password, ui->name->text(), comp_list, admin_mode);
    order->show();
    this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->close();
}

void company::edit_company() {
    addCompany* edit_win = new addCompany();
    edit_win->ui->name->setText(this->ui->name->text());
    edit_win->ui->email->setText(this->ui->email->text());
    edit_win->ui->description->setText(this->ui->description->text());
    edit_win->exec();
    QJsonObject body;
    if (!edit_win->result()) {
        return;
    } else if (edit_win->ui->email->text().isEmpty() || edit_win->ui->description->toPlainText().isEmpty() ||
            edit_win->ui->name->text().isEmpty()) {
        return;
    }
    body["email"] = edit_win->ui->email->text();
    body["description"] = edit_win->ui->description->toPlainText();
    body["company_name"] = edit_win->ui->name->text();

    QString url = "http://localhost/api/v1/company?auth=" + password + "&user=" + username + "&name=" + this->ui->name->text();
    this->ui->name->setText(edit_win->ui->name->text());
    this->ui->description->setText(edit_win->ui->description->toPlainText());
    this->ui->email->setText(edit_win->ui->email->text());
//    connect(this->add_manager, SIGNAL(finished(QNetworkReply * )), this->parentWidget()->parentWidget()->parentWidget()->parentWidget(), SLOT(add_new_company(QNetworkReply * )));
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->put(request, QJsonDocument(body).toJson());
}

void company::delete_company() {
    QString url = "http://localhost/api/v1/company?auth=" + password + "&user=" + username + "&name=" + this->ui->name->text();
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->deleteResource(request);
    this->close();
}
