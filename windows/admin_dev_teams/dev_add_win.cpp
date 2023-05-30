//
// Created by vzhur on 22.05.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_dev_add_win.h" resolved

#include "dev_add_win.h"
#include "ui_dev_add_win.h"


dev_add_win::dev_add_win(QWidget *parent) :
        QDialog(parent), ui(new Ui::dev_add_win) {
    ui->setupUi(this);
}

dev_add_win::~dev_add_win() {
    delete ui;
}
