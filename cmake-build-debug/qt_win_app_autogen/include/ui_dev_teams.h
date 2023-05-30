/********************************************************************************
** Form generated from reading UI file 'dev_teams.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEV_TEAMS_H
#define UI_DEV_TEAMS_H

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

class Ui_dev_teams
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QPushButton *back_btn;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_btn;

    void setupUi(QWidget *dev_teams)
    {
        if (dev_teams->objectName().isEmpty())
            dev_teams->setObjectName("dev_teams");
        dev_teams->resize(645, 413);
        horizontalLayout = new QHBoxLayout(dev_teams);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(dev_teams);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        back_btn = new QPushButton(dev_teams);
        back_btn->setObjectName("back_btn");

        verticalLayout->addWidget(back_btn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(dev_teams);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 494, 349));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_btn = new QPushButton(dev_teams);
        add_btn->setObjectName("add_btn");

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(dev_teams);

        QMetaObject::connectSlotsByName(dev_teams);
    } // setupUi

    void retranslateUi(QWidget *dev_teams)
    {
        dev_teams->setWindowTitle(QCoreApplication::translate("dev_teams", "\320\232\320\276\320\274\320\274\320\260\320\275\320\264\321\213 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\276\320\262", nullptr));
        label_2->setText(QCoreApplication::translate("dev_teams", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        back_btn->setText(QCoreApplication::translate("dev_teams", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        add_btn->setText(QCoreApplication::translate("dev_teams", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dev_teams: public Ui_dev_teams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEV_TEAMS_H
