/********************************************************************************
** Form generated from reading UI file 'dev_project.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEV_PROJECT_H
#define UI_DEV_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dev_project
{
public:

    void setupUi(QWidget *dev_project)
    {
        if (dev_project->objectName().isEmpty())
            dev_project->setObjectName("dev_project");
        dev_project->resize(400, 300);

        retranslateUi(dev_project);

        QMetaObject::connectSlotsByName(dev_project);
    } // setupUi

    void retranslateUi(QWidget *dev_project)
    {
        dev_project->setWindowTitle(QCoreApplication::translate("dev_project", "dev_project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dev_project: public Ui_dev_project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEV_PROJECT_H
