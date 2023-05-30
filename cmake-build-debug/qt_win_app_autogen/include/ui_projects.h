/********************************************************************************
** Form generated from reading UI file 'projects.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTS_H
#define UI_PROJECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projects
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *username;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_btn;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *companies;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_company;

    void setupUi(QWidget *projects)
    {
        if (projects->objectName().isEmpty())
            projects->setObjectName("projects");
        projects->resize(664, 440);
        horizontalLayout = new QHBoxLayout(projects);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(11, -1, 11, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 15, -1, -1);
        label = new QLabel(projects);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        username = new QLabel(projects);
        username->setObjectName("username");

        verticalLayout->addWidget(username);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        exit_btn = new QPushButton(projects);
        exit_btn->setObjectName("exit_btn");

        verticalLayout->addWidget(exit_btn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(projects);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 528, 376));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        companies = new QVBoxLayout();
        companies->setObjectName("companies");

        verticalLayout_2->addLayout(companies);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_company = new QPushButton(projects);
        add_company->setObjectName("add_company");

        horizontalLayout_2->addWidget(add_company);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(projects);

        QMetaObject::connectSlotsByName(projects);
    } // setupUi

    void retranslateUi(QWidget *projects)
    {
        projects->setWindowTitle(QCoreApplication::translate("projects", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("projects", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214:", nullptr));
        username->setText(QCoreApplication::translate("projects", "TextLabel", nullptr));
        exit_btn->setText(QCoreApplication::translate("projects", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        add_company->setText(QCoreApplication::translate("projects", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class projects: public Ui_projects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTS_H
