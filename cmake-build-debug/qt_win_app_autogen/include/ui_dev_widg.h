/********************************************************************************
** Form generated from reading UI file 'dev_widg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEV_WIDG_H
#define UI_DEV_WIDG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dev_widg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *email;
    QLabel *label_3;
    QLabel *xp_years;
    QLabel *label_5;
    QLabel *grade;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *pos;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;

    void setupUi(QWidget *dev_widg)
    {
        if (dev_widg->objectName().isEmpty())
            dev_widg->setObjectName("dev_widg");
        dev_widg->resize(385, 217);
        verticalLayout = new QVBoxLayout(dev_widg);
        verticalLayout->setObjectName("verticalLayout");
        name = new QLabel(dev_widg);
        name->setObjectName("name");

        verticalLayout->addWidget(name);

        widget = new QWidget(dev_widg);
        widget->setObjectName("widget");
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        email = new QLabel(widget);
        email->setObjectName("email");

        formLayout->setWidget(0, QFormLayout::FieldRole, email);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        xp_years = new QLabel(widget);
        xp_years->setObjectName("xp_years");

        formLayout->setWidget(1, QFormLayout::FieldRole, xp_years);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        grade = new QLabel(widget);
        grade->setObjectName("grade");

        formLayout->setWidget(2, QFormLayout::FieldRole, grade);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        pos = new QLabel(widget);
        pos->setObjectName("pos");

        formLayout->setWidget(3, QFormLayout::FieldRole, pos);


        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton = new QToolButton(dev_widg);
        toolButton->setObjectName("toolButton");

        horizontalLayout->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(dev_widg);

        QMetaObject::connectSlotsByName(dev_widg);
    } // setupUi

    void retranslateUi(QWidget *dev_widg)
    {
        dev_widg->setWindowTitle(QCoreApplication::translate("dev_widg", "dev_widg", nullptr));
        name->setText(QCoreApplication::translate("dev_widg", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("dev_widg", "email", nullptr));
        email->setText(QCoreApplication::translate("dev_widg", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("dev_widg", "\320\236\320\277\321\213\321\202", nullptr));
        xp_years->setText(QCoreApplication::translate("dev_widg", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("dev_widg", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        grade->setText(QCoreApplication::translate("dev_widg", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("dev_widg", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dev_widg", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("dev_widg", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", nullptr));
        pos->setText(QCoreApplication::translate("dev_widg", "TextLabel", nullptr));
        toolButton->setText(QCoreApplication::translate("dev_widg", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dev_widg: public Ui_dev_widg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEV_WIDG_H
