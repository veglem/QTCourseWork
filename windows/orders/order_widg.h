//
// Created by vzhur on 19.05.2023.
//

#ifndef QT_WIN_APP_ORDER_WIDG_H
#define QT_WIN_APP_ORDER_WIDG_H

#include <QWidget>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "edit_order.h"
#include "ui_edit_order.h"

QT_BEGIN_NAMESPACE
namespace Ui { class order_widg; }
QT_END_NAMESPACE

class order_widg : public QWidget {
Q_OBJECT

public:
    explicit order_widg(QWidget *parent = nullptr, QStringList params ={}, bool admin_md = false);

    ~order_widg() override;

private:
    Ui::order_widg *ui;
    bool admin_mode = false;
    QNetworkAccessManager* manager;
signals:
public slots:
    void delete_order();
    void change_order();
};


#endif //QT_WIN_APP_ORDER_WIDG_H
