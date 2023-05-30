//
// Created by vzhur on 29.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_addDev.h" resolved

#include "adddev.h"
#include "ui_addDev.h"


addDev::addDev(QWidget *parent) :
        QDialog(parent), ui(new Ui::addDev) {
    ui->setupUi(this);
}

addDev::~addDev() {
    delete ui;
}
