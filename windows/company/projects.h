//
// Created by vzhur on 18.05.2023.
//

#ifndef QT_WIN_APP_PROJECTS_H
#define QT_WIN_APP_PROJECTS_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "company.h"
#include "addcompany.h"
#include "../login/login.h"
#include "../admin_users/user_element.h"
#include "../admin_users/users.h"

QT_BEGIN_NAMESPACE
namespace Ui { class projects; }
QT_END_NAMESPACE

class projects : public QWidget {
Q_OBJECT

public:
    friend class user_element;
    explicit projects(QWidget *parent = nullptr, QString  user = "", QString  pass = "", bool admin_mode = false);

    ~projects() override;

private:
    Ui::projects *ui;

    QNetworkAccessManager* manager;
    QNetworkRequest request;

    QNetworkAccessManager* add_manager;

    QString username;
    QString password;
    QStringList Companies;

    bool admin_mode = false;
signals:
public slots:
    void fill_scroll_area(QNetworkReply* reply);
    void open_add_win();
    void add_new_company(QNetworkReply* reply);
    void unregister();

};


#endif //QT_WIN_APP_PROJECTS_H
