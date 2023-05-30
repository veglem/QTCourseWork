//
// Created by vzhur on 29.05.2023.
//

#ifndef QT_WIN_APP_DEV_WIDG_H
#define QT_WIN_APP_DEV_WIDG_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "adddev.h"

QT_BEGIN_NAMESPACE
namespace Ui { class dev_widg; }
QT_END_NAMESPACE

class dev_widg : public QWidget {
Q_OBJECT

public:
    explicit dev_widg(QWidget *parent = nullptr, QStringList params = {}, QString team_email = "" );

    ~dev_widg() override;

private:
    Ui::dev_widg *ui;
    bool is_visible;
    QString team_email;
    QNetworkAccessManager* del_manager;
    QNetworkAccessManager* position_manager;
    QNetworkAccessManager* company_manager;
    QNetworkAccessManager* change_manager;
    QStringList position;
    QStringList company;
signals:
public slots:
    void opn_cls_add_info();
    void delete_developer();
    void change_developer();
    void add_position(QNetworkReply *reply);
    void add_company(QNetworkReply *reply);



};


#endif //QT_WIN_APP_DEV_WIDG_H
