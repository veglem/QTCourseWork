//
// Created by vzhur on 30.05.2023.
//

#ifndef QT_WIN_APP_POSITIONS_H
#define QT_WIN_APP_POSITIONS_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "../adminPanel/adminpanel.h"
#include "../admin_users/users.h"
#include "pos_widg.h"
#include "add_pos.h"


QT_BEGIN_NAMESPACE
namespace Ui { class positions; }
QT_END_NAMESPACE

class positions : public QWidget {
Q_OBJECT

public:
    explicit positions(QWidget *parent = nullptr);

    ~positions() override;

private:
    Ui::positions *ui;
    QNetworkAccessManager* fill_manager;
    QNetworkAccessManager* add_manager;
signals:
public slots:
    void back();
    void pos_click();
    void fill_developers(QNetworkReply* reply);
    void add_position();
};


#endif //QT_WIN_APP_POSITIONS_H
