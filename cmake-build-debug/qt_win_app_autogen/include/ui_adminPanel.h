/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminPanel
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QLabel *label_2;
    QPushButton *users_btn;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *dev_btn;
    QPushButton *pos_btn;

    void setupUi(QWidget *adminPanel)
    {
        if (adminPanel->objectName().isEmpty())
            adminPanel->setObjectName("adminPanel");
        adminPanel->resize(400, 300);
        horizontalLayout = new QHBoxLayout(adminPanel);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(adminPanel);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(adminPanel);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(adminPanel);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        users_btn = new QPushButton(adminPanel);
        users_btn->setObjectName("users_btn");

        formLayout->setWidget(0, QFormLayout::FieldRole, users_btn);

        label_3 = new QLabel(adminPanel);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(adminPanel);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        dev_btn = new QPushButton(adminPanel);
        dev_btn->setObjectName("dev_btn");

        formLayout->setWidget(1, QFormLayout::FieldRole, dev_btn);

        pos_btn = new QPushButton(adminPanel);
        pos_btn->setObjectName("pos_btn");

        formLayout->setWidget(2, QFormLayout::FieldRole, pos_btn);


        horizontalLayout->addLayout(formLayout);

        horizontalLayout->setStretch(1, 1);

        retranslateUi(adminPanel);

        QMetaObject::connectSlotsByName(adminPanel);
    } // setupUi

    void retranslateUi(QWidget *adminPanel)
    {
        adminPanel->setWindowTitle(QCoreApplication::translate("adminPanel", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("adminPanel", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("adminPanel", "\320\275\320\260\320\267\320\260\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("adminPanel", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        users_btn->setText(QCoreApplication::translate("adminPanel", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("adminPanel", "\320\232\320\276\320\274\320\274\320\260\320\275\320\264\321\213 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\276\320\262", nullptr));
        label_4->setText(QCoreApplication::translate("adminPanel", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        dev_btn->setText(QCoreApplication::translate("adminPanel", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pos_btn->setText(QCoreApplication::translate("adminPanel", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminPanel: public Ui_adminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
