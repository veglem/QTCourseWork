/********************************************************************************
** Form generated from reading UI file 'users.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERS_H
#define UI_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_users
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QPushButton *back_btn;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *searc_field;
    QPushButton *search_btn;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *users_2;

    void setupUi(QWidget *users)
    {
        if (users->objectName().isEmpty())
            users->setObjectName("users");
        users->resize(400, 300);
        horizontalLayout = new QHBoxLayout(users);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(users);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        back_btn = new QPushButton(users);
        back_btn->setObjectName("back_btn");

        verticalLayout->addWidget(back_btn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        searc_field = new QLineEdit(users);
        searc_field->setObjectName("searc_field");

        horizontalLayout_4->addWidget(searc_field);

        search_btn = new QPushButton(users);
        search_btn->setObjectName("search_btn");

        horizontalLayout_4->addWidget(search_btn);


        verticalLayout_2->addLayout(horizontalLayout_4);

        scrollArea = new QScrollArea(users);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 249, 236));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        users_2 = new QVBoxLayout();
        users_2->setObjectName("users_2");

        verticalLayout_3->addLayout(users_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(users);

        QMetaObject::connectSlotsByName(users);
    } // setupUi

    void retranslateUi(QWidget *users)
    {
        users->setWindowTitle(QCoreApplication::translate("users", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("users", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260 \320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        back_btn->setText(QCoreApplication::translate("users", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        search_btn->setText(QCoreApplication::translate("users", "\320\277\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class users: public Ui_users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_H
