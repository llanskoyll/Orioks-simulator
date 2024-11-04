/********************************************************************************
** Form generated from reading UI file 'methodist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METHODIST_H
#define UI_METHODIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Methodist
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *feedback_button;
    QPushButton *prepare_button;
    QPushButton *study_button;
    QPushButton *homepage_button;
    QStackedWidget *showing_selector_;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *Methodist)
    {
        if (Methodist->objectName().isEmpty())
            Methodist->setObjectName("Methodist");
        Methodist->resize(703, 571);
        verticalLayout = new QVBoxLayout(Methodist);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        feedback_button = new QPushButton(Methodist);
        feedback_button->setObjectName("feedback_button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(feedback_button->sizePolicy().hasHeightForWidth());
        feedback_button->setSizePolicy(sizePolicy);
        feedback_button->setMinimumSize(QSize(0, 40));
        feedback_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(feedback_button);

        prepare_button = new QPushButton(Methodist);
        prepare_button->setObjectName("prepare_button");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(prepare_button->sizePolicy().hasHeightForWidth());
        prepare_button->setSizePolicy(sizePolicy1);
        prepare_button->setMinimumSize(QSize(0, 40));
        prepare_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(prepare_button);

        study_button = new QPushButton(Methodist);
        study_button->setObjectName("study_button");
        sizePolicy1.setHeightForWidth(study_button->sizePolicy().hasHeightForWidth());
        study_button->setSizePolicy(sizePolicy1);
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

        homepage_button = new QPushButton(Methodist);
        homepage_button->setObjectName("homepage_button");
        sizePolicy1.setHeightForWidth(homepage_button->sizePolicy().hasHeightForWidth());
        homepage_button->setSizePolicy(sizePolicy1);
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

        showing_selector_ = new QStackedWidget(Methodist);
        showing_selector_->setObjectName("showing_selector_");
        page = new QWidget();
        page->setObjectName("page");
        showing_selector_->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        showing_selector_->addWidget(page_2);

        verticalLayout->addWidget(showing_selector_);


        retranslateUi(Methodist);

        QMetaObject::connectSlotsByName(Methodist);
    } // setupUi

    void retranslateUi(QWidget *Methodist)
    {
        Methodist->setWindowTitle(QCoreApplication::translate("Methodist", "Form", nullptr));
        feedback_button->setText(QCoreApplication::translate("Methodist", "\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217 \321\201\320\262\321\217\320\267\321\214", nullptr));
        prepare_button->setText(QCoreApplication::translate("Methodist", "\320\237\320\276\320\264\320\263\320\276\321\202\320\276\320\262\320\272\320\260", nullptr));
        study_button->setText(QCoreApplication::translate("Methodist", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265", nullptr));
        homepage_button->setText(QCoreApplication::translate("Methodist", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Methodist: public Ui_Methodist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METHODIST_H
