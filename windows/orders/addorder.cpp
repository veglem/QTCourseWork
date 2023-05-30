//
// Created by vzhur on 18.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_addOrder.h" resolved

#include "addorder.h"
#include "ui_addOrder.h"


addOrder::addOrder(QWidget *parent) :
        QDialog(parent), ui(new Ui::addOrder) {
    ui->setupUi(this);
}

addOrder::~addOrder() {
    delete ui;
}
