//
// Created by vzhur on 18.05.2023.
//

#ifndef QT_WIN_APP_ADMINPANEL_H
#define QT_WIN_APP_ADMINPANEL_H

#include <QWidget>
#include "../admin_users/users.h"
#include "../login/login.h"
#include "../admin_dev_teams/dev_teams.h"
#include "../positions/positions.h"



QT_BEGIN_NAMESPACE
namespace Ui { class adminPanel; }
QT_END_NAMESPACE

class adminPanel : public QWidget {
Q_OBJECT

public:
    explicit adminPanel(QWidget *parent = nullptr, QString username = "", QString password = "");

    ~adminPanel() override;


private:
    Ui::adminPanel *ui;

    QString user;
    QString pass;

signals:
public slots:
    void open_users();
    void back_btn();
    void open_dev_team();
    void open_pos();
};


#endif //QT_WIN_APP_ADMINPANEL_H
