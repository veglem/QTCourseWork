/********************************************************************************
** Form generated from reading UI file 'developer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVELOPER_H
#define UI_DEVELOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_developer
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *open_dev_proj;
    QPushButton *open_devs;
    QSpacerItem *verticalSpacer_2;
    QPushButton *back_btn;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *team_email;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *btn_spacer;
    QPushButton *add_btn;

    void setupUi(QWidget *developer)
    {
        if (developer->objectName().isEmpty())
            developer->setObjectName("developer");
        developer->resize(556, 335);
        horizontalLayout = new QHBoxLayout(developer);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(developer);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        open_dev_proj = new QPushButton(widget);
        open_dev_proj->setObjectName("open_dev_proj");

        verticalLayout_2->addWidget(open_dev_proj);

        open_devs = new QPushButton(widget);
        open_devs->setObjectName("open_devs");

        verticalLayout_2->addWidget(open_devs);

        verticalSpacer_2 = new QSpacerItem(20, 180, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        back_btn = new QPushButton(widget);
        back_btn->setObjectName("back_btn");

        verticalLayout_2->addWidget(back_btn);


        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        toolButton = new QToolButton(developer);
        toolButton->setObjectName("toolButton");
        toolButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));
        toolButton->setPopupMode(QToolButton::DelayedPopup);

        verticalLayout->addWidget(toolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        team_email = new QLabel(developer);
        team_email->setObjectName("team_email");

        verticalLayout_3->addWidget(team_email);

        scrollArea_2 = new QScrollArea(developer);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 367, 244));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(btn_spacer);

        add_btn = new QPushButton(developer);
        add_btn->setObjectName("add_btn");

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(developer);

        QMetaObject::connectSlotsByName(developer);
    } // setupUi

    void retranslateUi(QWidget *developer)
    {
        developer->setWindowTitle(QCoreApplication::translate("developer", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\260", nullptr));
        open_dev_proj->setText(QCoreApplication::translate("developer", "\320\237\321\200\320\276\320\265\320\272\321\202\321\213", nullptr));
        open_devs->setText(QCoreApplication::translate("developer", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        back_btn->setText(QCoreApplication::translate("developer", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        toolButton->setText(QCoreApplication::translate("developer", "=", nullptr));
        team_email->setText(QCoreApplication::translate("developer", "TextLabel", nullptr));
        add_btn->setText(QCoreApplication::translate("developer", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class developer: public Ui_developer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPER_H
