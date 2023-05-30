/********************************************************************************
** Form generated from reading UI file 'orders.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERS_H
#define UI_ORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orders
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *back_btn;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *email;
    QLabel *label_5;
    QLabel *description;
    QLabel *label_6;
    QLabel *company_name;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *prev_btn;
    QPushButton *next_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_btn;

    void setupUi(QWidget *orders)
    {
        if (orders->objectName().isEmpty())
            orders->setObjectName("orders");
        orders->resize(602, 403);
        horizontalLayout = new QHBoxLayout(orders);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(orders);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        back_btn = new QPushButton(orders);
        back_btn->setObjectName("back_btn");

        verticalLayout_2->addWidget(back_btn);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(orders);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        email = new QLabel(orders);
        email->setObjectName("email");

        formLayout->setWidget(2, QFormLayout::FieldRole, email);

        label_5 = new QLabel(orders);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        description = new QLabel(orders);
        description->setObjectName("description");
        description->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, description);

        label_6 = new QLabel(orders);
        label_6->setObjectName("label_6");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        company_name = new QLabel(orders);
        company_name->setObjectName("company_name");

        formLayout->setWidget(0, QFormLayout::FieldRole, company_name);


        verticalLayout->addLayout(formLayout);

        tabWidget = new QTabWidget(orders);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        prev_btn = new QPushButton(orders);
        prev_btn->setObjectName("prev_btn");

        horizontalLayout_2->addWidget(prev_btn);

        next_btn = new QPushButton(orders);
        next_btn->setObjectName("next_btn");

        horizontalLayout_2->addWidget(next_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_btn = new QPushButton(orders);
        add_btn->setObjectName("add_btn");

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(orders);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(orders);
    } // setupUi

    void retranslateUi(QWidget *orders)
    {
        orders->setWindowTitle(QCoreApplication::translate("orders", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        label->setText(QCoreApplication::translate("orders", "TextLabel", nullptr));
        back_btn->setText(QCoreApplication::translate("orders", "\320\275\320\260\320\267\320\260\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("orders", "Email", nullptr));
        email->setText(QCoreApplication::translate("orders", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("orders", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        description->setText(QCoreApplication::translate("orders", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("orders", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        company_name->setText(QCoreApplication::translate("orders", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("orders", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("orders", "Tab 2", nullptr));
        prev_btn->setText(QCoreApplication::translate("orders", "<", nullptr));
        next_btn->setText(QCoreApplication::translate("orders", ">", nullptr));
        add_btn->setText(QCoreApplication::translate("orders", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orders: public Ui_orders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERS_H
