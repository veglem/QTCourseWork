/********************************************************************************
** Form generated from reading UI file 'pos_widg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POS_WIDG_H
#define UI_POS_WIDG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pos_widg
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *pos_name;
    QSpacerItem *horizontalSpacer;
    QPushButton *chg_btn;
    QPushButton *del_btn;

    void setupUi(QWidget *pos_widg)
    {
        if (pos_widg->objectName().isEmpty())
            pos_widg->setObjectName("pos_widg");
        pos_widg->resize(306, 51);
        horizontalLayout = new QHBoxLayout(pos_widg);
        horizontalLayout->setObjectName("horizontalLayout");
        pos_name = new QLabel(pos_widg);
        pos_name->setObjectName("pos_name");

        horizontalLayout->addWidget(pos_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chg_btn = new QPushButton(pos_widg);
        chg_btn->setObjectName("chg_btn");

        horizontalLayout->addWidget(chg_btn);

        del_btn = new QPushButton(pos_widg);
        del_btn->setObjectName("del_btn");

        horizontalLayout->addWidget(del_btn);


        retranslateUi(pos_widg);

        QMetaObject::connectSlotsByName(pos_widg);
    } // setupUi

    void retranslateUi(QWidget *pos_widg)
    {
        pos_widg->setWindowTitle(QCoreApplication::translate("pos_widg", "pos_widg", nullptr));
        pos_name->setText(QCoreApplication::translate("pos_widg", "TextLabel", nullptr));
        chg_btn->setText(QCoreApplication::translate("pos_widg", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        del_btn->setText(QCoreApplication::translate("pos_widg", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pos_widg: public Ui_pos_widg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POS_WIDG_H
