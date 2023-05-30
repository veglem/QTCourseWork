//
// Created by vzhur on 17.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Login.h" resolved

#include "login.h"
#include "ui_Login.h"


Login::Login(QWidget *parent) :
        QWidget(parent), ui(new Ui::Login) {
    ui->setupUi(this);
    manager = new QNetworkAccessManager();

    status = new QStatusBar(this);
    this->layout()->addWidget(status);


    connect(this->manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(redirect_user(QNetworkReply *)));

    connect(ui->sign_in, &QPushButton::clicked, this, &Login::sign_in);
    connect(ui->sign_up, &QPushButton::clicked, this, &Login::sign_up);
}

Login::~Login() {
    delete status;
    delete ui;
}

void Login::sign_up() {
    user = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    std::hash<std::string> hash_func;
    QString url = "http://localhost/api/v1/register?auth=" + QString::fromStdString(std::to_string(hash_func(password.toStdString()))) + "&user=" + ui->lineEdit_username->text();
    request.setUrl(QUrl(url));
    QByteArray a;
    manager->post(request, a);
}

void Login::sign_in() {
    user = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    std::hash<std::string> hash_func;
    QString url = "http://localhost/api/v1/login?auth=" + QString::fromStdString(std::to_string(hash_func(password.toStdString()))) + "&user=" + ui->lineEdit_username->text();
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::KnownHeaders::ContentTypeHeader, "application/json");
    manager->get(request);

}

void Login::redirect_user(QNetworkReply *reply) {
    QJsonDocument res (QJsonDocument::fromJson(reply->readAll()));
    QJsonObject result = res.object();
    if (result["status"] == "ok" && user != "admin"){
        std::hash<std::string> hash_func;
        projects* proj_win = new projects (this->parentWidget(), user, QString::fromStdString(std::to_string(hash_func(password.toStdString()))));
        proj_win->show();
        this->close();
    } else if(result["status"] == "ok" && user == "admin"){
        std::hash<std::string> hash_func;
        adminPanel* admin_win = new adminPanel (this->parentWidget(), user, QString::fromStdString(std::to_string(hash_func(password.toStdString()))));
        admin_win->show();
        this->close();
    } else{
        status->showMessage("Не верный логин или пароль", 5000);
        return;
    }
}
