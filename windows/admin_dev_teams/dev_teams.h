//
// Created by vzhur on 22.05.2023.
//

#ifndef QT_WIN_APP_DEV_TEAMS_H
#define QT_WIN_APP_DEV_TEAMS_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "team_widj.h"
#include "dev_add_win.h"
#include "../admin_users/users.h"
#include "../adminPanel/adminpanel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class dev_teams; }
QT_END_NAMESPACE

class dev_teams : public QWidget {
Q_OBJECT

public:
    explicit dev_teams(QWidget *parent = nullptr);

    ~dev_teams() override;

private:
    Ui::dev_teams *ui;
    QNetworkAccessManager* manager;
    QNetworkAccessManager* add_manager;
signals:
public slots:
    void fill_scroll_area(QNetworkReply* reply);
    void add_team();
    void back();
};


#endif //QT_WIN_APP_DEV_TEAMS_H
