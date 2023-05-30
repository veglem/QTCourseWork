//
// Created by vzhur on 29.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_dev_project.h" resolved

#include "dev_project.h"
#include "ui_dev_project.h"


dev_project::dev_project(QWidget *parent) :
        QWidget(parent), ui(new Ui::dev_project) {
    ui->setupUi(this);
}

dev_project::~dev_project() {
    delete ui;
}
