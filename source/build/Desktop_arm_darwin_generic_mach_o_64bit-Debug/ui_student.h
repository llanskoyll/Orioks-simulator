/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *practice_button;
    QPushButton *diary_button;
    QPushButton *requests_button;
    QPushButton *homepage_button;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName("Student");
        Student->resize(983, 684);
        verticalLayout = new QVBoxLayout(Student);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(Student);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: transparent;\n"
"};"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        practice_button = new QPushButton(frame);
        practice_button->setObjectName("practice_button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(practice_button->sizePolicy().hasHeightForWidth());
        practice_button->setSizePolicy(sizePolicy);
        practice_button->setMinimumSize(QSize(0, 40));
        practice_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(practice_button);

        diary_button = new QPushButton(frame);
        diary_button->setObjectName("diary_button");
        sizePolicy.setHeightForWidth(diary_button->sizePolicy().hasHeightForWidth());
        diary_button->setSizePolicy(sizePolicy);
        diary_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(diary_button);

        requests_button = new QPushButton(frame);
        requests_button->setObjectName("requests_button");
        sizePolicy.setHeightForWidth(requests_button->sizePolicy().hasHeightForWidth());
        requests_button->setSizePolicy(sizePolicy);
        requests_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #008cba;\n"
"	border: 0 none;\n"
"    color: white;\n"
"	width: 100%;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006687;\n"
"}"));

        horizontalLayout->addWidget(requests_button);

        homepage_button = new QPushButton(frame);
        homepage_button->setObjectName("homepage_button");
        sizePolicy.setHeightForWidth(homepage_button->sizePolicy().hasHeightForWidth());
        homepage_button->setSizePolicy(sizePolicy);
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


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame);

        stackedWidget = new QStackedWidget(Student);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(0, 600));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QWidget *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Form", nullptr));
        practice_button->setText(QCoreApplication::translate("Student", "\320\237\321\200\320\260\320\272\321\202\320\270\320\272\320\260", nullptr));
        diary_button->setText(QCoreApplication::translate("Student", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265", nullptr));
        requests_button->setText(QCoreApplication::translate("Student", "\320\227\320\260\321\217\320\262\320\272\320\270", nullptr));
        homepage_button->setText(QCoreApplication::translate("Student", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
