/********************************************************************************
** Form generated from reading UI file 'order_widg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_WIDG_H
#define UI_ORDER_WIDG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order_widg
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *project_name;
    QLabel *label_4;
    QLabel *description;
    QLabel *label_6;
    QLabel *tech_task;
    QLabel *label_8;
    QLabel *status;
    QLabel *label_13;
    QLabel *price;
    QLabel *label_12;
    QLabel *deadline;
    QLabel *label_14;
    QLabel *start_date;
    QPushButton *change_btn;
    QPushButton *del_btn;

    void setupUi(QWidget *order_widg)
    {
        if (order_widg->objectName().isEmpty())
            order_widg->setObjectName("order_widg");
        order_widg->resize(217, 224);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(order_widg->sizePolicy().hasHeightForWidth());
        order_widg->setSizePolicy(sizePolicy);
        order_widg->setMinimumSize(QSize(0, 224));
        order_widg->setBaseSize(QSize(0, 224));
        verticalLayout = new QVBoxLayout(order_widg);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        scrollArea = new QScrollArea(order_widg);
        scrollArea->setObjectName("scrollArea");
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 196, 240));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(scrollAreaWidgetContents_2);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        project_name = new QLabel(scrollAreaWidgetContents_2);
        project_name->setObjectName("project_name");

        formLayout->setWidget(0, QFormLayout::FieldRole, project_name);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        description = new QLabel(scrollAreaWidgetContents_2);
        description->setObjectName("description");
        sizePolicy1.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy1);
        description->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, description);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        tech_task = new QLabel(scrollAreaWidgetContents_2);
        tech_task->setObjectName("tech_task");
        sizePolicy1.setHeightForWidth(tech_task->sizePolicy().hasHeightForWidth());
        tech_task->setSizePolicy(sizePolicy1);
        tech_task->setMouseTracking(false);
        tech_task->setAcceptDrops(false);
        tech_task->setLineWidth(1);
        tech_task->setMidLineWidth(0);
        tech_task->setTextFormat(Qt::PlainText);
        tech_task->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tech_task->setWordWrap(true);
        tech_task->setIndent(-1);
        tech_task->setOpenExternalLinks(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, tech_task);

        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName("label_8");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        status = new QLabel(scrollAreaWidgetContents_2);
        status->setObjectName("status");

        formLayout->setWidget(3, QFormLayout::FieldRole, status);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName("label_13");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_13);

        price = new QLabel(scrollAreaWidgetContents_2);
        price->setObjectName("price");

        formLayout->setWidget(4, QFormLayout::FieldRole, price);

        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName("label_12");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_12);

        deadline = new QLabel(scrollAreaWidgetContents_2);
        deadline->setObjectName("deadline");

        formLayout->setWidget(5, QFormLayout::FieldRole, deadline);

        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName("label_14");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_14);

        start_date = new QLabel(scrollAreaWidgetContents_2);
        start_date->setObjectName("start_date");

        formLayout->setWidget(6, QFormLayout::FieldRole, start_date);

        change_btn = new QPushButton(scrollAreaWidgetContents_2);
        change_btn->setObjectName("change_btn");

        formLayout->setWidget(7, QFormLayout::LabelRole, change_btn);

        del_btn = new QPushButton(scrollAreaWidgetContents_2);
        del_btn->setObjectName("del_btn");

        formLayout->setWidget(7, QFormLayout::FieldRole, del_btn);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(order_widg);

        QMetaObject::connectSlotsByName(order_widg);
    } // setupUi

    void retranslateUi(QWidget *order_widg)
    {
        order_widg->setWindowTitle(QCoreApplication::translate("order_widg", "order_widg", nullptr));
        label_2->setText(QCoreApplication::translate("order_widg", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        project_name->setText(QCoreApplication::translate("order_widg", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("order_widg", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        description->setText(QCoreApplication::translate("order_widg", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("order_widg", "\320\242\320\265\321\205. \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        tech_task->setText(QCoreApplication::translate("order_widg", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("order_widg", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        status->setText(QCoreApplication::translate("order_widg", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("order_widg", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        price->setText(QCoreApplication::translate("order_widg", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("order_widg", "\320\224\320\265\320\264\320\273\320\260\320\271\320\275", nullptr));
        deadline->setText(QCoreApplication::translate("order_widg", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("order_widg", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        start_date->setText(QCoreApplication::translate("order_widg", "TextLabel", nullptr));
        change_btn->setText(QCoreApplication::translate("order_widg", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        del_btn->setText(QCoreApplication::translate("order_widg", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_widg: public Ui_order_widg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_WIDG_H
