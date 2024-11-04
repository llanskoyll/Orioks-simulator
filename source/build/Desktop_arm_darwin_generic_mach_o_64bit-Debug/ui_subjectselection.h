/********************************************************************************
** Form generated from reading UI file 'subjectselection.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTSELECTION_H
#define UI_SUBJECTSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tables_stuff/nonclickabletablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SubjectSelection
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    NonClickableTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SubjectSelection)
    {
        if (SubjectSelection->objectName().isEmpty())
            SubjectSelection->setObjectName("SubjectSelection");
        SubjectSelection->resize(571, 455);
        verticalLayout = new QVBoxLayout(SubjectSelection);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 90, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(SubjectSelection);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(8);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tableWidget = new NonClickableTableWidget(SubjectSelection);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    border: none; /* Remove border around the table */\n"
"}\n"
"\n"
"QTableWidget QHeaderView::section\n"
"{\n"
"    background-color: #ebf4f9; /* Light blue background in column headers */\n"
"    border: none; /* Remove border in column headers */\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"    background-color: #ebf4f9;   \n"
"    border-bottom: 1px solid white; /* Black horizontal borders between cells */\n"
"    text-align: center;\n"
"}\n"
"\n"
"QTableWidget::item:selected\n"
"{\n"
"    background-color: rgba(0, 0, 0, 50); /* Lighter background when a cell is selected */\n"
"}\n"
"\n"
"QTableWidget::item:first\n"
"{\n"
"    border-left: none; /* Remove left border in the first cell of each row */\n"
"}\n"
"\n"
"QTableWidget::item:last\n"
"{\n"
"    border-right: none; /* Remove right border in the last cell of each row */\n"
"}\n"
""));

        verticalLayout->addWidget(tableWidget);

        verticalSpacer = new QSpacerItem(20, 90, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SubjectSelection);

        QMetaObject::connectSlotsByName(SubjectSelection);
    } // setupUi

    void retranslateUi(QWidget *SubjectSelection)
    {
        SubjectSelection->setWindowTitle(QCoreApplication::translate("SubjectSelection", "Form", nullptr));
        label->setText(QCoreApplication::translate("SubjectSelection", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubjectSelection: public Ui_SubjectSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTSELECTION_H
