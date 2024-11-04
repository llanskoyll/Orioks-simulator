/********************************************************************************
** Form generated from reading UI file 'debtors.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBTORS_H
#define UI_DEBTORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_debtors
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *debtors_table;

    void setupUi(QWidget *debtors)
    {
        if (debtors->objectName().isEmpty())
            debtors->setObjectName("debtors");
        debtors->resize(620, 547);
        verticalLayout = new QVBoxLayout(debtors);
        verticalLayout->setObjectName("verticalLayout");
        debtors_table = new QTableWidget(debtors);
        debtors_table->setObjectName("debtors_table");
        debtors_table->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    border: none; /* Remove border around the table */\n"
"}\n"
"\n"
"QTableWidget QHeaderView::section\n"
"{\n"
"    background-color: #f2dedf; /* Light blue background in column headers */\n"
"    border: none; /* Remove border in column headers */\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"    background-color: #f2dedf;   \n"
"    border-bottom: 1px solid white; /* Black horizontal borders between cells */\n"
"    text-align: center;\n"
"}"));

        verticalLayout->addWidget(debtors_table);


        retranslateUi(debtors);

        QMetaObject::connectSlotsByName(debtors);
    } // setupUi

    void retranslateUi(QWidget *debtors)
    {
        debtors->setWindowTitle(QCoreApplication::translate("debtors", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debtors: public Ui_debtors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBTORS_H
