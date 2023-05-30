//
// Created by vzhur on 29.05.2023.
//

#ifndef QT_WIN_APP_ADDDEV_H
#define QT_WIN_APP_ADDDEV_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class addDev; }
QT_END_NAMESPACE

class addDev : public QDialog {
Q_OBJECT

friend class dev_widg;
friend class developer;

public:
    explicit addDev(QWidget *parent = nullptr);

    ~addDev() override;

private:
    Ui::addDev *ui;
};


#endif //QT_WIN_APP_ADDDEV_H
