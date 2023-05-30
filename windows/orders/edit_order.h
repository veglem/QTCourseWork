//
// Created by vzhur on 22.05.2023.
//

#ifndef QT_WIN_APP_EDIT_ORDER_H
#define QT_WIN_APP_EDIT_ORDER_H

#include <QDialog>

#include "order_widg.h"


QT_BEGIN_NAMESPACE
namespace Ui { class edit_order; }
QT_END_NAMESPACE

class edit_order : public QDialog {
    friend class order_widg;
Q_OBJECT

public:
    explicit edit_order(QWidget *parent = nullptr, QStringList params ={});

    ~edit_order() override;

private:
    Ui::edit_order *ui;
};


#endif //QT_WIN_APP_EDIT_ORDER_H
