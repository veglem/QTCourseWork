/********************************************************************************
** Form generated from reading UI file 'addcompany.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPANY_H
#define UI_ADDCOMPANY_H

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

class Ui_addCompany
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *name;
    QLabel *label_2;
    QTextEdit *description;
    QLineEdit *email;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *addCompany)
    {
        if (addCompany->objectName().isEmpty())
            addCompany->setObjectName("addCompany");
        addCompany->resize(317, 231);
        verticalLayout = new QVBoxLayout(addCompany);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 11);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(addCompany);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        name = new QLineEdit(addCompany);
        name->setObjectName("name");

        formLayout->setWidget(2, QFormLayout::FieldRole, name);

        label_2 = new QLabel(addCompany);
        label_2->setObjectName("label_2");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        description = new QTextEdit(addCompany);
        description->setObjectName("description");

        formLayout->setWidget(4, QFormLayout::FieldRole, description);

        email = new QLineEdit(addCompany);
        email->setObjectName("email");

        formLayout->setWidget(3, QFormLayout::FieldRole, email);

        label = new QLabel(addCompany);
        label->setObjectName("label");

        formLayout->setWidget(3, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(addCompany);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(addCompany);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(addCompany);
        QObject::connect(pushButton_2, &QPushButton::clicked, addCompany, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton, &QPushButton::clicked, addCompany, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addCompany);
    } // setupUi

    void retranslateUi(QDialog *addCompany)
    {
        addCompany->setWindowTitle(QCoreApplication::translate("addCompany", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214/\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("addCompany", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("addCompany", "\320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("addCompany", "email", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addCompany", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("addCompany", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCompany: public Ui_addCompany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPANY_H
