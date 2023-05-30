//
// Created by vzhur on 22.05.2023.
//

#ifndef QT_WIN_APP_TEAM_WIDJ_H
#define QT_WIN_APP_TEAM_WIDJ_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "dev_teams.h"
#include "dev_add_win.h"
#include "../admin_developers/developer.h"



QT_BEGIN_NAMESPACE
namespace Ui { class team_widj; }
QT_END_NAMESPACE

class team_widj : public QWidget {
    friend class dev_teams;
Q_OBJECT

public:
    explicit team_widj(QWidget *parent = nullptr, QString email = "");

    ~team_widj() override;

private:
    Ui::team_widj *ui;
    QString email;
    QNetworkAccessManager* add_manager;
    QNetworkAccessManager* del_manager;

signals:
public slots:
    void change();
    void delete_res();
    void open_team();
};


#endif //QT_WIN_APP_TEAM_WIDJ_H
