/********************************************************************************
** Form generated from reading UI file 'add_pos.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_POS_H
#define UI_ADD_POS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_pos
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *pos_name;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *add_pos)
    {
        if (add_pos->objectName().isEmpty())
            add_pos->setObjectName("add_pos");
        add_pos->resize(253, 86);
        formLayout = new QFormLayout(add_pos);
        formLayout->setObjectName("formLayout");
        label = new QLabel(add_pos);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        pos_name = new QLineEdit(add_pos);
        pos_name->setObjectName("pos_name");

        formLayout->setWidget(0, QFormLayout::FieldRole, pos_name);

        pushButton = new QPushButton(add_pos);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(add_pos);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_2);


        retranslateUi(add_pos);
        QObject::connect(pushButton, &QPushButton::clicked, add_pos, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, add_pos, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(add_pos);
    } // setupUi

    void retranslateUi(QDialog *add_pos)
    {
        add_pos->setWindowTitle(QCoreApplication::translate("add_pos", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214/\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("add_pos", "\320\237\320\276\320\267\320\270\321\206\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("add_pos", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_pos", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_pos: public Ui_add_pos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_POS_H
