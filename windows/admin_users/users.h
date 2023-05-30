//
// Created by vzhur on 21.05.2023.
//

#ifndef QT_WIN_APP_USERS_H
#define QT_WIN_APP_USERS_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "user_element.h"
#include "../adminPanel/adminpanel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class users; }
QT_END_NAMESPACE

class users : public QWidget {
Q_OBJECT

public:
    explicit users(QWidget *parent = nullptr, QString username = "", QString password = "");
    static void clearLayout(QLayout *layout);
    ~users() override;

private:
    Ui::users *ui;

    QString user;
    QString pass;

    QNetworkAccessManager* manager;
    QNetworkRequest request;



signals:
public slots:
    void fill_users(QNetworkReply* reply);
    void search();
    void back_btn();
};


#endif //QT_WIN_APP_USERS_H
