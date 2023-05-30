//
// Created by vzhur on 30.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_add_pos.h" resolved

#include "add_pos.h"
#include "ui_add_pos.h"


add_pos::add_pos(QWidget *parent) :
        QDialog(parent), ui(new Ui::add_pos) {
    ui->setupUi(this);
}

add_pos::~add_pos() {
    delete ui;
}
