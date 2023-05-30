//
// Created by vzhur on 18.05.2023.
//

#ifndef QT_WIN_APP_ORDERS_H
#define QT_WIN_APP_ORDERS_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "addorder.h"
#include "../company/projects.h"
#include "ui_addOrder.h"
#include "order_widg.h"



QT_BEGIN_NAMESPACE
namespace Ui { class orders; }
QT_END_NAMESPACE

class orders : public QWidget {
Q_OBJECT

public:
    explicit orders(QWidget *parent = nullptr, QString   user = "", QString   pass = "", QString comp_name = "", QStringList comp_list = {}, bool admin_md = false);

    ~orders() override;

private:
    Ui::orders *ui;

    QNetworkAccessManager* manager;
    QNetworkAccessManager* add_manager;
    QNetworkAccessManager* add_company_manager;

    QNetworkRequest request;
    QNetworkRequest add_request;

    QString username;
    QString password;
    QString name_;
    QStringList comp_list;

    bool admin_mode = false;

signals:
public slots:
    void add_order();
    void add_order_info(QNetworkReply* reply);
    void add_new_order(QNetworkReply *reply);
    void add_new_company(QNetworkReply *reply);
    void next_company();
    void prev_company();
    void back();

};


#endif //QT_WIN_APP_ORDERS_H
