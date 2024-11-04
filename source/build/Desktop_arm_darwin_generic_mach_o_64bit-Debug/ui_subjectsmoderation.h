/********************************************************************************
** Form generated from reading UI file 'subjectsmoderation.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTSMODERATION_H
#define UI_SUBJECTSMODERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectsModeration
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *subject_name;
    QLabel *label_4;
    QComboBox *structural_box;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *group_box;
    QLabel *label;
    QComboBox *teacher_box;
    QPushButton *search_button;
    QTableWidget *subjects_table;

    void setupUi(QWidget *SubjectsModeration)
    {
        if (SubjectsModeration->objectName().isEmpty())
            SubjectsModeration->setObjectName("SubjectsModeration");
        SubjectsModeration->resize(733, 527);
        verticalLayout_4 = new QVBoxLayout(SubjectsModeration);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(SubjectsModeration);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(label_3);

        subject_name = new QLineEdit(SubjectsModeration);
        subject_name->setObjectName("subject_name");

        verticalLayout->addWidget(subject_name);

        label_4 = new QLabel(SubjectsModeration);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_4);

        structural_box = new QComboBox(SubjectsModeration);
        structural_box->addItem(QString());
        structural_box->setObjectName("structural_box");
        structural_box->setMinimumSize(QSize(0, 20));

        verticalLayout->addWidget(structural_box);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(SubjectsModeration);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_2);

        group_box = new QComboBox(SubjectsModeration);
        group_box->addItem(QString());
        group_box->setObjectName("group_box");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(group_box->sizePolicy().hasHeightForWidth());
        group_box->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(group_box);

        label = new QLabel(SubjectsModeration);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        teacher_box = new QComboBox(SubjectsModeration);
        teacher_box->addItem(QString());
        teacher_box->setObjectName("teacher_box");
        teacher_box->setMinimumSize(QSize(0, 20));

        verticalLayout_2->addWidget(teacher_box);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        search_button = new QPushButton(SubjectsModeration);
        search_button->setObjectName("search_button");
        search_button->setMinimumSize(QSize(0, 24));
        search_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #3498db;\n"
"    border: 0 none;\n"
"    color: white;\n"
"    width: 100%;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid gray;\n"
"}"));

        verticalLayout_3->addWidget(search_button);


        verticalLayout_4->addLayout(verticalLayout_3);

        subjects_table = new QTableWidget(SubjectsModeration);
        subjects_table->setObjectName("subjects_table");
        subjects_table->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        verticalLayout_4->addWidget(subjects_table);


        retranslateUi(SubjectsModeration);

        QMetaObject::connectSlotsByName(SubjectsModeration);
    } // setupUi

    void retranslateUi(QWidget *SubjectsModeration)
    {
        SubjectsModeration->setWindowTitle(QCoreApplication::translate("SubjectsModeration", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("SubjectsModeration", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        subject_name->setText(QString());
        subject_name->setPlaceholderText(QCoreApplication::translate("SubjectsModeration", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\263\321\200\321\203\320\277\320\277\321\213:", nullptr));
        label_4->setText(QCoreApplication::translate("SubjectsModeration", "\320\230\320\275\321\201\321\202\320\270\321\202\321\203\321\202:", nullptr));
        structural_box->setItemText(0, QCoreApplication::translate("SubjectsModeration", "\320\222\321\201\320\265", nullptr));

        label_2->setText(QCoreApplication::translate("SubjectsModeration", "\320\223\321\200\321\203\320\277\320\277\320\260:", nullptr));
        group_box->setItemText(0, QCoreApplication::translate("SubjectsModeration", "\320\222\321\201\320\265", nullptr));

        label->setText(QCoreApplication::translate("SubjectsModeration", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214:", nullptr));
        teacher_box->setItemText(0, QCoreApplication::translate("SubjectsModeration", "\320\222\321\201\320\265", nullptr));

        search_button->setText(QCoreApplication::translate("SubjectsModeration", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubjectsModeration: public Ui_SubjectsModeration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTSMODERATION_H
