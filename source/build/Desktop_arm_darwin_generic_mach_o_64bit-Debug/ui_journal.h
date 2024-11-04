/********************************************************************************
** Form generated from reading UI file 'journal.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOURNAL_H
#define UI_JOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tables_stuff/journaltablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_Journal
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *current_subject;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    JournalTableWidget *journal;
    QPushButton *go_back;

    void setupUi(QWidget *Journal)
    {
        if (Journal->objectName().isEmpty())
            Journal->setObjectName("Journal");
        Journal->resize(704, 557);
        verticalLayout = new QVBoxLayout(Journal);
        verticalLayout->setObjectName("verticalLayout");
        current_subject = new QLabel(Journal);
        current_subject->setObjectName("current_subject");
        current_subject->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(current_subject);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        save = new QPushButton(Journal);
        save->setObjectName("save");
        save->setMinimumSize(QSize(0, 30));
        save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(save);

        pushButton = new QPushButton(Journal);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        journal = new JournalTableWidget(Journal);
        journal->setObjectName("journal");
        journal->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        verticalLayout->addWidget(journal);

        go_back = new QPushButton(Journal);
        go_back->setObjectName("go_back");
        go_back->setMinimumSize(QSize(0, 30));
        go_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(go_back);


        retranslateUi(Journal);

        QMetaObject::connectSlotsByName(Journal);
    } // setupUi

    void retranslateUi(QWidget *Journal)
    {
        Journal->setWindowTitle(QCoreApplication::translate("Journal", "Form", nullptr));
        current_subject->setText(QCoreApplication::translate("Journal", "TextLabel", nullptr));
        save->setText(QCoreApplication::translate("Journal", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Journal", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        go_back->setText(QCoreApplication::translate("Journal", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Journal: public Ui_Journal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNAL_H
