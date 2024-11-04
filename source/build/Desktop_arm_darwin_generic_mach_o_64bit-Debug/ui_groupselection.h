/********************************************************************************
** Form generated from reading UI file 'groupselection.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSELECTION_H
#define UI_GROUPSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tables_stuff/nonclickabletablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_GroupSelection
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *back_to_subjects;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    NonClickableTableWidget *groups_table;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *GroupSelection)
    {
        if (GroupSelection->objectName().isEmpty())
            GroupSelection->setObjectName("GroupSelection");
        GroupSelection->resize(760, 524);
        verticalLayout_2 = new QVBoxLayout(GroupSelection);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        back_to_subjects = new QPushButton(GroupSelection);
        back_to_subjects->setObjectName("back_to_subjects");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(back_to_subjects->sizePolicy().hasHeightForWidth());
        back_to_subjects->setSizePolicy(sizePolicy);
        back_to_subjects->setMinimumSize(QSize(20, 20));
        back_to_subjects->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(8);
        back_to_subjects->setFont(font);
        back_to_subjects->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #3498db;\n"
"    border: 0 none;\n"
"    color: white;\n"
"    width: 100%;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid gray;\n"
"}"));

        horizontalLayout_2->addWidget(back_to_subjects);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groups_table = new NonClickableTableWidget(GroupSelection);
        groups_table->setObjectName("groups_table");
        QFont font1;
        font1.setPointSize(9);
        groups_table->setFont(font1);
        groups_table->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        horizontalLayout->addWidget(groups_table);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(GroupSelection);

        QMetaObject::connectSlotsByName(GroupSelection);
    } // setupUi

    void retranslateUi(QWidget *GroupSelection)
    {
        GroupSelection->setWindowTitle(QCoreApplication::translate("GroupSelection", "Form", nullptr));
        back_to_subjects->setText(QCoreApplication::translate("GroupSelection", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupSelection: public Ui_GroupSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSELECTION_H
