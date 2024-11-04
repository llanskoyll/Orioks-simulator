/********************************************************************************
** Form generated from reading UI file 'teachersmoderation.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSMODERATION_H
#define UI_TEACHERSMODERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeachersModeration
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *subject_line;
    QPushButton *search_button;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *current_teacher;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QComboBox *new_teacher_box;
    QPushButton *save_button;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TeachersModeration)
    {
        if (TeachersModeration->objectName().isEmpty())
            TeachersModeration->setObjectName("TeachersModeration");
        TeachersModeration->resize(906, 538);
        horizontalLayout_4 = new QHBoxLayout(TeachersModeration);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_4 = new QLabel(TeachersModeration);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 80));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ebf4f9;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(TeachersModeration);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        subject_line = new QLineEdit(TeachersModeration);
        subject_line->setObjectName("subject_line");

        horizontalLayout->addWidget(subject_line);


        verticalLayout_3->addLayout(horizontalLayout);

        search_button = new QPushButton(TeachersModeration);
        search_button->setObjectName("search_button");
        search_button->setMinimumSize(QSize(0, 30));
        search_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0  #3498db;\n"
"    border: 0 none;\n"
"    color: white;\n"
"    width: 100%;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid gray;\n"
"}"));

        verticalLayout_3->addWidget(search_button);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(TeachersModeration);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        current_teacher = new QLineEdit(TeachersModeration);
        current_teacher->setObjectName("current_teacher");

        verticalLayout->addWidget(current_teacher);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(TeachersModeration);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        new_teacher_box = new QComboBox(TeachersModeration);
        new_teacher_box->setObjectName("new_teacher_box");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(new_teacher_box->sizePolicy().hasHeightForWidth());
        new_teacher_box->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(new_teacher_box);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        save_button = new QPushButton(TeachersModeration);
        save_button->setObjectName("save_button");
        save_button->setMinimumSize(QSize(0, 30));
        save_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0  #44944A;\n"
"    border: 0 none;\n"
"    color: white;\n"
"    width: 100%;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid gray;\n"
"}"));

        verticalLayout_3->addWidget(save_button);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(TeachersModeration);

        QMetaObject::connectSlotsByName(TeachersModeration);
    } // setupUi

    void retranslateUi(QWidget *TeachersModeration)
    {
        TeachersModeration->setWindowTitle(QCoreApplication::translate("TeachersModeration", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("TeachersModeration", "\320\222 \320\264\320\260\320\275\320\275\320\276\320\274 \321\200\320\260\320\267\320\264\320\265\320\273\320\265 \320\262\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\275\320\260\320\267\320\275\320\260\321\207\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217.", nullptr));
        label->setText(QCoreApplication::translate("TeachersModeration", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213:", nullptr));
        subject_line->setPlaceholderText(QCoreApplication::translate("TeachersModeration", "\320\221\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        search_button->setText(QCoreApplication::translate("TeachersModeration", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("TeachersModeration", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214:", nullptr));
        current_teacher->setPlaceholderText(QString());
        label_3->setText(QCoreApplication::translate("TeachersModeration", "\320\235\320\276\320\262\321\213\320\271 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214:", nullptr));
        save_button->setText(QCoreApplication::translate("TeachersModeration", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeachersModeration: public Ui_TeachersModeration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSMODERATION_H
