/********************************************************************************
** Form generated from reading UI file 'addorder.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORDER_H
#define UI_ADDORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addOrder
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *project_name;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *description;
    QTextEdit *tech_task;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addOrder)
    {
        if (addOrder->objectName().isEmpty())
            addOrder->setObjectName("addOrder");
        addOrder->resize(369, 251);
        verticalLayout = new QVBoxLayout(addOrder);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(addOrder);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        project_name = new QLineEdit(addOrder);
        project_name->setObjectName("project_name");

        formLayout->setWidget(0, QFormLayout::FieldRole, project_name);

        label_2 = new QLabel(addOrder);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(addOrder);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        description = new QTextEdit(addOrder);
        description->setObjectName("description");

        formLayout->setWidget(1, QFormLayout::FieldRole, description);

        tech_task = new QTextEdit(addOrder);
        tech_task->setObjectName("tech_task");

        formLayout->setWidget(2, QFormLayout::FieldRole, tech_task);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(addOrder);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(addOrder);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(addOrder);
        QObject::connect(pushButton, &QPushButton::clicked, addOrder, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, addOrder, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addOrder);
    } // setupUi

    void retranslateUi(QDialog *addOrder)
    {
        addOrder->setWindowTitle(QCoreApplication::translate("addOrder", "addOrder", nullptr));
        label->setText(QCoreApplication::translate("addOrder", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("addOrder", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("addOrder", "\320\242\320\265\321\205. \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("addOrder", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addOrder", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addOrder: public Ui_addOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORDER_H
