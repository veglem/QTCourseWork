//
// Created by vzhur on 29.05.2023.
//

#ifndef QT_WIN_APP_DEV_PROJECT_H
#define QT_WIN_APP_DEV_PROJECT_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class dev_project; }
QT_END_NAMESPACE

class dev_project : public QWidget {
Q_OBJECT

public:
    explicit dev_project(QWidget *parent = nullptr);

    ~dev_project() override;

private:
    Ui::dev_project *ui;
};


#endif //QT_WIN_APP_DEV_PROJECT_H
