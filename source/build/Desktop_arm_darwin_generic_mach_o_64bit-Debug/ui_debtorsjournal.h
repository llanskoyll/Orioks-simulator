/********************************************************************************
** Form generated from reading UI file 'debtorsjournal.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBTORSJOURNAL_H
#define UI_DEBTORSJOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebtorsJournal
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *save_button;
    QSpacerItem *horizontalSpacer;
    QTableWidget *journal;
    QPushButton *go_back_button;

    void setupUi(QWidget *DebtorsJournal)
    {
        if (DebtorsJournal->objectName().isEmpty())
            DebtorsJournal->setObjectName("DebtorsJournal");
        DebtorsJournal->resize(674, 467);
        verticalLayout = new QVBoxLayout(DebtorsJournal);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        save_button = new QPushButton(DebtorsJournal);
        save_button->setObjectName("save_button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(save_button->sizePolicy().hasHeightForWidth());
        save_button->setSizePolicy(sizePolicy);
        save_button->setMinimumSize(QSize(0, 30));
        save_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #3498db;\n"
"    border: 0 none;\n"
"    color: white;\n"
"    width: 100%;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid gray;\n"
"}"));

        horizontalLayout->addWidget(save_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        journal = new QTableWidget(DebtorsJournal);
        journal->setObjectName("journal");
        journal->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        verticalLayout->addWidget(journal);

        go_back_button = new QPushButton(DebtorsJournal);
        go_back_button->setObjectName("go_back_button");
        go_back_button->setMinimumSize(QSize(0, 30));
        go_back_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: none repeat scroll 0 0 #3498db;\n"
"    border: 0 none;\n"
"    color: white;\n"
"    width: 100%;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid gray;\n"
"}"));

        verticalLayout->addWidget(go_back_button);


        retranslateUi(DebtorsJournal);

        QMetaObject::connectSlotsByName(DebtorsJournal);
    } // setupUi

    void retranslateUi(QWidget *DebtorsJournal)
    {
        DebtorsJournal->setWindowTitle(QCoreApplication::translate("DebtorsJournal", "Form", nullptr));
        save_button->setText(QCoreApplication::translate("DebtorsJournal", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        go_back_button->setText(QCoreApplication::translate("DebtorsJournal", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebtorsJournal: public Ui_DebtorsJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBTORSJOURNAL_H
