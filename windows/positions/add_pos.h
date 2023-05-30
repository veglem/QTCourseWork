//
// Created by vzhur on 30.05.2023.
//

#ifndef QT_WIN_APP_ADD_POS_H
#define QT_WIN_APP_ADD_POS_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class add_pos; }
QT_END_NAMESPACE

class add_pos : public QDialog {
Q_OBJECT

friend class positions;
friend class pos_widg;

public:
    explicit add_pos(QWidget *parent = nullptr);

    ~add_pos() override;

private:
    Ui::add_pos *ui;
};


#endif //QT_WIN_APP_ADD_POS_H
