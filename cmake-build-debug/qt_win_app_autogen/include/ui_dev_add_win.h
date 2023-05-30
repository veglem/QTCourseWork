/********************************************************************************
** Form generated from reading UI file 'dev_add_win.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEV_ADD_WIN_H
#define UI_DEV_ADD_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dev_add_win
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *email;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *dev_add_win)
    {
        if (dev_add_win->objectName().isEmpty())
            dev_add_win->setObjectName("dev_add_win");
        dev_add_win->resize(387, 118);
        verticalLayout = new QVBoxLayout(dev_add_win);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(dev_add_win);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        email = new QLineEdit(dev_add_win);
        email->setObjectName("email");

        horizontalLayout->addWidget(email);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(dev_add_win);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_3 = new QPushButton(dev_add_win);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(dev_add_win);
        QObject::connect(pushButton_2, &QPushButton::clicked, dev_add_win, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_3, &QPushButton::clicked, dev_add_win, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(dev_add_win);
    } // setupUi

    void retranslateUi(QDialog *dev_add_win)
    {
        dev_add_win->setWindowTitle(QCoreApplication::translate("dev_add_win", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214/\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("dev_add_win", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 email", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dev_add_win", "\320\236\320\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("dev_add_win", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dev_add_win: public Ui_dev_add_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEV_ADD_WIN_H
