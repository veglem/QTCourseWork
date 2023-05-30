/********************************************************************************
** Form generated from reading UI file 'team_widj.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAM_WIDJ_H
#define UI_TEAM_WIDJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_team_widj
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *team_email;
    QSpacerItem *horizontalSpacer;
    QPushButton *open_btn;
    QPushButton *change_btn;
    QPushButton *del_btn;

    void setupUi(QWidget *team_widj)
    {
        if (team_widj->objectName().isEmpty())
            team_widj->setObjectName("team_widj");
        team_widj->resize(346, 51);
        team_widj->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(team_widj);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        team_email = new QLabel(team_widj);
        team_email->setObjectName("team_email");

        horizontalLayout->addWidget(team_email);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        open_btn = new QPushButton(team_widj);
        open_btn->setObjectName("open_btn");

        horizontalLayout->addWidget(open_btn);

        change_btn = new QPushButton(team_widj);
        change_btn->setObjectName("change_btn");

        horizontalLayout->addWidget(change_btn);

        del_btn = new QPushButton(team_widj);
        del_btn->setObjectName("del_btn");

        horizontalLayout->addWidget(del_btn);

        horizontalLayout->setStretch(0, 1);

        retranslateUi(team_widj);

        QMetaObject::connectSlotsByName(team_widj);
    } // setupUi

    void retranslateUi(QWidget *team_widj)
    {
        team_widj->setWindowTitle(QCoreApplication::translate("team_widj", "team_widj", nullptr));
        team_email->setText(QCoreApplication::translate("team_widj", "TextLabel", nullptr));
        open_btn->setText(QCoreApplication::translate("team_widj", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        change_btn->setText(QCoreApplication::translate("team_widj", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        del_btn->setText(QCoreApplication::translate("team_widj", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class team_widj: public Ui_team_widj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAM_WIDJ_H
