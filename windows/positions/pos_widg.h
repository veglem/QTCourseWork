//
// Created by vzhur on 30.05.2023.
//

#ifndef QT_WIN_APP_POS_WIDG_H
#define QT_WIN_APP_POS_WIDG_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "add_pos.h"


QT_BEGIN_NAMESPACE
namespace Ui { class pos_widg; }
QT_END_NAMESPACE

class pos_widg : public QWidget {
Q_OBJECT

public:
    explicit pos_widg(QWidget *parent = nullptr, const QString& pos_name = "");

    ~pos_widg() override;

private:
    Ui::pos_widg *ui;
    QNetworkAccessManager* del_maneger;
    QNetworkAccessManager* add_manager;
signals:
public slots:
    void del_pos();
    void update_pos();
};


#endif //QT_WIN_APP_POS_WIDG_H
