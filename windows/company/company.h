//
// Created by vzhur on 18.05.2023.
//

#ifndef QT_WIN_APP_COMPANY_H
#define QT_WIN_APP_COMPANY_H

#include <QWidget>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include "projects.h"
#include "../orders/orders.h"
#include "addcompany.h"



QT_BEGIN_NAMESPACE
namespace Ui { class company; }
QT_END_NAMESPACE

class company : public QWidget {
    friend class projects;
Q_OBJECT

public:
    explicit company(QWidget *parent = nullptr, const QString& email = "", const QString& description = "", const QString& name = "", QString  user = "", QString  pass = "", QStringList list = {}, bool admin_md = false);

    ~company() override;

private:
    Ui::company *ui;

    QString username;
    QString password;
    QStringList comp_list;
    QNetworkAccessManager* add_manager;

    bool admin_mode = false;

signals:
public slots:
    void get_project();
    void edit_company();
    void delete_company();
};


#endif //QT_WIN_APP_COMPANY_H
