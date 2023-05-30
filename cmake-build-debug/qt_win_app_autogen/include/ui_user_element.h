/********************************************************************************
** Form generated from reading UI file 'user_element.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ELEMENT_H
#define UI_USER_ELEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_element
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *user;
    QPushButton *pushButton;

    void setupUi(QWidget *user_element)
    {
        if (user_element->objectName().isEmpty())
            user_element->setObjectName("user_element");
        user_element->resize(225, 51);
        horizontalLayout = new QHBoxLayout(user_element);
        horizontalLayout->setObjectName("horizontalLayout");
        user = new QLabel(user_element);
        user->setObjectName("user");

        horizontalLayout->addWidget(user);

        pushButton = new QPushButton(user_element);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(0, 1);

        retranslateUi(user_element);

        QMetaObject::connectSlotsByName(user_element);
    } // setupUi

    void retranslateUi(QWidget *user_element)
    {
        user_element->setWindowTitle(QCoreApplication::translate("user_element", "user_element", nullptr));
        user->setText(QCoreApplication::translate("user_element", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("user_element", "\320\276\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_element: public Ui_user_element {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ELEMENT_H
