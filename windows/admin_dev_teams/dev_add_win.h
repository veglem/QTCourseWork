//
// Created by vzhur on 22.05.2023.
//

#ifndef QT_WIN_APP_DEV_ADD_WIN_H
#define QT_WIN_APP_DEV_ADD_WIN_H

#include <QDialog>

#include "dev_teams.h"
#include "team_widj.h"


QT_BEGIN_NAMESPACE
namespace Ui { class dev_add_win; }
QT_END_NAMESPACE

class dev_add_win : public QDialog {
    friend class dev_teams;
    friend class team_widj;
Q_OBJECT

public:
    explicit dev_add_win(QWidget *parent = nullptr);

    ~dev_add_win() override;

private:
    Ui::dev_add_win *ui;
};


#endif //QT_WIN_APP_DEV_ADD_WIN_H
