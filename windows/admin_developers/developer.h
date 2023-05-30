//
// Created by vzhur on 22.05.2023.
//

#ifndef QT_WIN_APP_DEVELOPER_H
#define QT_WIN_APP_DEVELOPER_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "dev_widg.h"
#include "../admin_users/users.h"
#include "../admin_dev_teams/dev_teams.h"
#include "adddev.h"
#include "../orders/order_widg.h"


QT_BEGIN_NAMESPACE
namespace Ui { class developer; }
QT_END_NAMESPACE

class developer : public QWidget {
Q_OBJECT

public:
    explicit developer(QWidget *parent = nullptr, const QString& email = "");

    ~developer() override;

private:
    Ui::developer *ui;
    bool visible;

    QNetworkAccessManager* dev_open_manager;
    QNetworkAccessManager* add_manager;
    QNetworkAccessManager* pos_manager;
    QNetworkAccessManager* proj_open_manager;
//    QNetworkAccessManager* dev_open_manager;

signals:
public slots:
    void contxt_menu_chg_state();
    void open_developers();
    void fill_developers(QNetworkReply* reply);
    void back();
    void add_dev(QNetworkReply * reply);
    void add_position();
    void open_projects();
    void fill_projects(QNetworkReply* reply);

};


#endif //QT_WIN_APP_DEVELOPER_H
