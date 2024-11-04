/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *gia_button;
    QPushButton *study_button;
    QPushButton *projects_button;
    QPushButton *homepage_button;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *showing_selector_;
    QWidget *page_7;
    QWidget *page_8;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Teacher)
    {
        if (Teacher->objectName().isEmpty())
            Teacher->setObjectName("Teacher");
        Teacher->resize(724, 541);
        Teacher->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: white;\n"
"}"));
        verticalLayout = new QVBoxLayout(Teacher);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        gia_button = new QPushButton(Teacher);
        gia_button->setObjectName("gia_button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gia_button->sizePolicy().hasHeightForWidth());
        gia_button->setSizePolicy(sizePolicy);
        gia_button->setMinimumSize(QSize(0, 40));
        gia_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(gia_button);

        study_button = new QPushButton(Teacher);
        study_button->setObjectName("study_button");
        sizePolicy.setHeightForWidth(study_button->sizePolicy().hasHeightForWidth());
        study_button->setSizePolicy(sizePolicy);
        study_button->setMinimumSize(QSize(0, 40));
        study_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(study_button);

        projects_button = new QPushButton(Teacher);
        projects_button->setObjectName("projects_button");
        sizePolicy.setHeightForWidth(projects_button->sizePolicy().hasHeightForWidth());
        projects_button->setSizePolicy(sizePolicy);
        projects_button->setMinimumSize(QSize(0, 40));
        projects_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(projects_button);

        homepage_button = new QPushButton(Teacher);
        homepage_button->setObjectName("homepage_button");
        sizePolicy.setHeightForWidth(homepage_button->sizePolicy().hasHeightForWidth());
        homepage_button->setSizePolicy(sizePolicy);
        homepage_button->setMinimumSize(QSize(0, 40));
        homepage_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(homepage_button);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        showing_selector_ = new QStackedWidget(Teacher);
        showing_selector_->setObjectName("showing_selector_");
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        showing_selector_->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        showing_selector_->addWidget(page_8);

        horizontalLayout_2->addWidget(showing_selector_);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(Teacher);

        showing_selector_->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Teacher);
    } // setupUi

    void retranslateUi(QWidget *Teacher)
    {
        Teacher->setWindowTitle(QCoreApplication::translate("Teacher", "Form", nullptr));
        gia_button->setText(QCoreApplication::translate("Teacher", "\320\223\320\230\320\220", nullptr));
        study_button->setText(QCoreApplication::translate("Teacher", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265", nullptr));
        projects_button->setText(QCoreApplication::translate("Teacher", "\320\237\321\200\320\276\320\265\320\272\321\202\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260", nullptr));
        homepage_button->setText(QCoreApplication::translate("Teacher", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher: public Ui_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
