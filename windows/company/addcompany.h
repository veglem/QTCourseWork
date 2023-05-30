//
// Created by vzhur on 18.05.2023.
//

#ifndef QT_WIN_APP_ADDCOMPANY_H
#define QT_WIN_APP_ADDCOMPANY_H

#include <QDialog>
#include "projects.h"
#include "company.h"


QT_BEGIN_NAMESPACE
namespace Ui { class addCompany; }
QT_END_NAMESPACE

class addCompany : public QDialog {
    friend class projects;
    friend class company;
Q_OBJECT

public:
    explicit addCompany(QWidget *parent = nullptr);

    ~addCompany() override;

private:
    Ui::addCompany *ui;

};


#endif //QT_WIN_APP_ADDCOMPANY_H
