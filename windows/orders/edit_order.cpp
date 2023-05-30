//
// Created by vzhur on 22.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_edit_order.h" resolved

#include "edit_order.h"
#include "ui_edit_order.h"


edit_order::edit_order(QWidget *parent, QStringList params) :
        QDialog(parent), ui(new Ui::edit_order) {
    ui->setupUi(this);
    ui->project_name->setText(params[0]);
    ui->description->setText(params[1]);
    ui->tech_task->setText(params[2]);
    ui->status->setText(params[3]);
    ui->price->setText(params[4]);
    int y, m , d;
    y = atoi(params[5].toStdString().substr(0, 4).c_str());
    m = atoi(params[5].toStdString().substr(5,2).c_str());
    d = atoi(params[5].toStdString().substr(8, 2).c_str());
    ui->deadline->setDate(QDate(y, m ,d));
    y = atoi(params[6].toStdString().substr(0, 4).c_str());
    m = atoi(params[6].toStdString().substr(5,2).c_str());
    d = atoi(params[6].toStdString().substr(8, 2).c_str());
    ui->start_date->setDate(QDate(y, m ,d));
}

edit_order::~edit_order() {
    delete ui;
}
