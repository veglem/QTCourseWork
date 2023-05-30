//
// Created by vzhur on 17.05.2023.
//

#ifndef QT_WIN_APP_LOGIN_H
#define QT_WIN_APP_LOGIN_H

#include <QWidget>
#include <QStatusBar>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "string"

#include "../company/projects.h"
#include "../adminPanel/adminpanel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget {
Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);

    ~Login() override;

private:
    Ui::Login *ui;
    QNetworkAccessManager* manager;
    QNetworkRequest request;
    QString user;
    QString password;
    QStatusBar* status;

signals:
public slots:
    void sign_in();
    void sign_up();

    void redirect_user(QNetworkReply *reply);

};


#endif //QT_WIN_APP_LOGIN_H
