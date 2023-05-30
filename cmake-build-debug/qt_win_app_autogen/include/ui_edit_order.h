/********************************************************************************
** Form generated from reading UI file 'edit_order.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_ORDER_H
#define UI_EDIT_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_order
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *project_name;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_14;
    QPushButton *accept_btn;
    QPushButton *cansel_btn;
    QTextEdit *description;
    QTextEdit *tech_task;
    QCheckBox *status;
    QLineEdit *price;
    QDateEdit *deadline;
    QDateEdit *start_date;

    void setupUi(QDialog *edit_order)
    {
        if (edit_order->objectName().isEmpty())
            edit_order->setObjectName("edit_order");
        edit_order->resize(352, 353);
        verticalLayout = new QVBoxLayout(edit_order);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(edit_order);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 311, 404));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(scrollAreaWidgetContents_2);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        project_name = new QLineEdit(scrollAreaWidgetContents_2);
        project_name->setObjectName("project_name");

        formLayout->setWidget(0, QFormLayout::FieldRole, project_name);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName("label_8");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName("label_13");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_13);

        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName("label_12");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_12);

        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName("label_14");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_14);

        accept_btn = new QPushButton(scrollAreaWidgetContents_2);
        accept_btn->setObjectName("accept_btn");

        formLayout->setWidget(7, QFormLayout::LabelRole, accept_btn);

        cansel_btn = new QPushButton(scrollAreaWidgetContents_2);
        cansel_btn->setObjectName("cansel_btn");

        formLayout->setWidget(7, QFormLayout::FieldRole, cansel_btn);

        description = new QTextEdit(scrollAreaWidgetContents_2);
        description->setObjectName("description");
        description->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);

        formLayout->setWidget(1, QFormLayout::FieldRole, description);

        tech_task = new QTextEdit(scrollAreaWidgetContents_2);
        tech_task->setObjectName("tech_task");
        tech_task->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);

        formLayout->setWidget(2, QFormLayout::FieldRole, tech_task);

        status = new QCheckBox(scrollAreaWidgetContents_2);
        status->setObjectName("status");

        formLayout->setWidget(3, QFormLayout::FieldRole, status);

        price = new QLineEdit(scrollAreaWidgetContents_2);
        price->setObjectName("price");

        formLayout->setWidget(4, QFormLayout::FieldRole, price);

        deadline = new QDateEdit(scrollAreaWidgetContents_2);
        deadline->setObjectName("deadline");

        formLayout->setWidget(5, QFormLayout::FieldRole, deadline);

        start_date = new QDateEdit(scrollAreaWidgetContents_2);
        start_date->setObjectName("start_date");

        formLayout->setWidget(6, QFormLayout::FieldRole, start_date);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(edit_order);
        QObject::connect(accept_btn, &QPushButton::clicked, edit_order, qOverload<>(&QDialog::accept));
        QObject::connect(cansel_btn, &QPushButton::clicked, edit_order, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(edit_order);
    } // setupUi

    void retranslateUi(QDialog *edit_order)
    {
        edit_order->setWindowTitle(QCoreApplication::translate("edit_order", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214/\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("edit_order", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("edit_order", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("edit_order", "\320\242\320\265\321\205. \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("edit_order", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        label_13->setText(QCoreApplication::translate("edit_order", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        label_12->setText(QCoreApplication::translate("edit_order", "\320\224\320\265\320\264\320\273\320\260\320\271\320\275", nullptr));
        label_14->setText(QCoreApplication::translate("edit_order", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        accept_btn->setText(QCoreApplication::translate("edit_order", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        cansel_btn->setText(QCoreApplication::translate("edit_order", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class edit_order: public Ui_edit_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_ORDER_H
