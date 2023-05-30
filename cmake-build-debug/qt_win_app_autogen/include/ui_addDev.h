/********************************************************************************
** Form generated from reading UI file 'adddev.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDEV_H
#define UI_ADDDEV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addDev
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *full_name;
    QLabel *label_2;
    QLineEdit *email;
    QLabel *label_3;
    QLineEdit *xp_years;
    QLabel *label_4;
    QLineEdit *grade;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *position;
    QComboBox *team;

    void setupUi(QDialog *addDev)
    {
        if (addDev->objectName().isEmpty())
            addDev->setObjectName("addDev");
        addDev->resize(303, 261);
        formLayout = new QFormLayout(addDev);
        formLayout->setObjectName("formLayout");
        label = new QLabel(addDev);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        full_name = new QLineEdit(addDev);
        full_name->setObjectName("full_name");

        formLayout->setWidget(0, QFormLayout::FieldRole, full_name);

        label_2 = new QLabel(addDev);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        email = new QLineEdit(addDev);
        email->setObjectName("email");

        formLayout->setWidget(1, QFormLayout::FieldRole, email);

        label_3 = new QLabel(addDev);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        xp_years = new QLineEdit(addDev);
        xp_years->setObjectName("xp_years");

        formLayout->setWidget(2, QFormLayout::FieldRole, xp_years);

        label_4 = new QLabel(addDev);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        grade = new QLineEdit(addDev);
        grade->setObjectName("grade");

        formLayout->setWidget(3, QFormLayout::FieldRole, grade);

        label_5 = new QLabel(addDev);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(addDev);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        pushButton = new QPushButton(addDev);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(addDev);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_2);

        position = new QComboBox(addDev);
        position->setObjectName("position");

        formLayout->setWidget(4, QFormLayout::FieldRole, position);

        team = new QComboBox(addDev);
        team->setObjectName("team");

        formLayout->setWidget(5, QFormLayout::FieldRole, team);


        retranslateUi(addDev);
        QObject::connect(pushButton, &QPushButton::clicked, addDev, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, addDev, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addDev);
    } // setupUi

    void retranslateUi(QDialog *addDev)
    {
        addDev->setWindowTitle(QCoreApplication::translate("addDev", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214/\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("addDev", "\320\244\320\230\320\236", nullptr));
        label_2->setText(QCoreApplication::translate("addDev", "email", nullptr));
        label_3->setText(QCoreApplication::translate("addDev", "\320\236\320\277\321\213\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("addDev", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("addDev", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("addDev", "\320\232\320\276\320\274\320\274\320\260\320\275\320\264\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("addDev", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addDev", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addDev: public Ui_addDev {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDEV_H
