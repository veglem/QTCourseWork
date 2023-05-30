//
// Created by vzhur on 18.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_addCompany.h" resolved

#include "addcompany.h"
#include "ui_addCompany.h"


addCompany::addCompany(QWidget *parent) :
        QDialog(parent), ui(new Ui::addCompany) {
    ui->setupUi(this);
}

addCompany::~addCompany() {
    delete ui;
}
