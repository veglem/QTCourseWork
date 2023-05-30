//
// Created by vzhur on 18.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_projects.h" resolved

#include "projects.h"

#include <utility>
#include "ui_projects.h"
#include "ui_company.h"
#include "ui_addCompany.h"


projects::projects(QWidget *parent, QString user, QString pass, bool admin_md) :
        QWidget(parent), ui(new Ui::projects), username(std::move(user)), password(std::move(pass)) {
    ui->setupUi(this);
    ui->username->setText(username);
    manager = new QNetworkAccessManager();
    add_manager = new QNetworkAccessManager();
    admin_mode = admin_md;

    if(admin_mode){
        ui->label->setText("Панель администратора");
    }

    connect(this->ui->add_company, &QPushButton::clicked, this, &projects::open_add_win);

    connect(this->ui->exit_btn, &QPushButton::clicked, this, &projects::unregister);

    connect(this->manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(fill_scroll_area(QNetworkReply * )));

    QString url = "http://localhost/api/v1/company?auth=" + password + "&user=" + username;
    request.setUrl(QUrl(url));
    manager->get(request);

}

projects::~projects() {
    delete ui;
}

void projects::fill_scroll_area(QNetworkReply *reply) {
//    qDebug() << reply->readAll();
    QJsonDocument res(QJsonDocument::fromJson(reply->readAll()));
    QJsonArray result = res.array();
    for(auto &&i : result){
        Companies.push_back(i.toObject()["company_name"].toString());
    }
    for (auto &&i: result) {
        //ui->scrollArea->setWidget(new company(this, i.toObject()["email"].toString(), i.toObject()["description"].toString(), i.toObject()["company_name"].toString()));
        company *temp = new company(this, i.toObject()["email"].toString(), i.toObject()["description"].toString(),
                                    i.toObject()["company_name"].toString(), username, password, Companies, admin_mode);

//        auto it = Companies.begin();

        ui->companies->addWidget(temp);
        connect(temp->ui->pushButton, &QPushButton::clicked, temp, &company::get_project);
    }
}

void projects::open_add_win() {
    addCompany *dialog;
    dialog = new addCompany();
    dialog->exec();
    QJsonObject body;
    if (!dialog->result()) {
        return;
    } else if (dialog->ui->email->text().isEmpty() || dialog->ui->description->toPlainText().isEmpty() ||
               dialog->ui->name->text().isEmpty()) {
        return;
    }
    body["email"] = dialog->ui->email->text();
    body["description"] = dialog->ui->description->toPlainText();
    body["company_name"] = dialog->ui->name->text();
    QString url = "http://localhost/api/v1/company?auth=" + password + "&user=" + username;
    connect(this->add_manager, SIGNAL(finished(QNetworkReply * )), this, SLOT(add_new_company(QNetworkReply * )));
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    add_manager->post(request, QJsonDocument(body).toJson());
}

void projects::add_new_company(QNetworkReply *reply) {
    if (reply->error()) {
        return;
    }
    QString url = "http://localhost/api/v1/company?auth=" + password + "&user=" + username;
    request.setUrl(QUrl(url));
    manager->get(request);
}

void projects::unregister() {
    if(admin_mode){
        users* user_adm_win = new users(this->parentWidget(), "admin", "8141937955048696534");
        user_adm_win->show();
        this->close();
        return;
    }
    Login *log_win;
    log_win = new Login(this->parentWidget());
    log_win->show();
    this->close();
}


