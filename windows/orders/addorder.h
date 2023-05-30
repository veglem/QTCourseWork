//
// Created by vzhur on 18.05.2023.
//

#ifndef QT_WIN_APP_ADDORDER_H
#define QT_WIN_APP_ADDORDER_H

#include <QDialog>

#include "orders.h"


QT_BEGIN_NAMESPACE
namespace Ui { class addOrder; }
QT_END_NAMESPACE

class addOrder : public QDialog {
    friend class orders;

Q_OBJECT

public:
    explicit addOrder(QWidget *parent = nullptr);

    ~addOrder() override;

private:
    Ui::addOrder *ui;
};


#endif //QT_WIN_APP_ADDORDER_H
