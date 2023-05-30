/********************************************************************************
** Form generated from reading UI file 'company.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_H
#define UI_COMPANY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_company
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *email;
    QLabel *label_2;
    QLabel *description;
    QLabel *label_3;
    QLabel *name;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *del_btn;
    QPushButton *change_btn;

    void setupUi(QWidget *company)
    {
        if (company->objectName().isEmpty())
            company->setObjectName("company");
        company->resize(417, 132);
        formLayout = new QFormLayout(company);
        formLayout->setObjectName("formLayout");
        label = new QLabel(company);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        email = new QLabel(company);
        email->setObjectName("email");

        formLayout->setWidget(0, QFormLayout::FieldRole, email);

        label_2 = new QLabel(company);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        description = new QLabel(company);
        description->setObjectName("description");

        formLayout->setWidget(1, QFormLayout::FieldRole, description);

        label_3 = new QLabel(company);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        name = new QLabel(company);
        name->setObjectName("name");

        formLayout->setWidget(2, QFormLayout::FieldRole, name);

        pushButton = new QPushButton(company);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        del_btn = new QPushButton(company);
        del_btn->setObjectName("del_btn");
        del_btn->setEnabled(true);

        horizontalLayout->addWidget(del_btn);

        change_btn = new QPushButton(company);
        change_btn->setObjectName("change_btn");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-text-editor")));
        change_btn->setIcon(icon);

        horizontalLayout->addWidget(change_btn);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(company);

        QMetaObject::connectSlotsByName(company);
    } // setupUi

    void retranslateUi(QWidget *company)
    {
        company->setWindowTitle(QCoreApplication::translate("company", "company", nullptr));
        label->setText(QCoreApplication::translate("company", "email", nullptr));
        email->setText(QCoreApplication::translate("company", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("company", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        description->setText(QCoreApplication::translate("company", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("company", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        name->setText(QCoreApplication::translate("company", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("company", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        del_btn->setText(QCoreApplication::translate("company", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        change_btn->setText(QCoreApplication::translate("company", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class company: public Ui_company {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_H
