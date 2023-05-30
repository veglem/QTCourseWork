//
// Created by vzhur on 21.05.2023.
//

#ifndef QT_WIN_APP_USER_ELEMENT_H
#define QT_WIN_APP_USER_ELEMENT_H

#include <QWidget>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "../company/projects.h"



QT_BEGIN_NAMESPACE
namespace Ui { class user_element; }
QT_END_NAMESPACE

class user_element : public QWidget {
Q_OBJECT

public:
    explicit user_element(QWidget *parent = nullptr, QString username = "", QString password = "", const QString& login = "", QString us_pass = "");

    ~user_element() override;

private:
    Ui::user_element *ui;

    QString user;
    QString pass;
    QString us_password;

signals:
public slots:
    void open_user();
};



#endif //QT_WIN_APP_USER_ELEMENT_H
