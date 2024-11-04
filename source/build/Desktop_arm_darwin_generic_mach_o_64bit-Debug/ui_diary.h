/********************************************************************************
** Form generated from reading UI file 'diary.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIARY_H
#define UI_DIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tables_stuff/nonclickabletablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_Diary
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search_line;
    QPushButton *search_button;
    NonClickableTableWidget *diary_table;

    void setupUi(QWidget *Diary)
    {
        if (Diary->objectName().isEmpty())
            Diary->setObjectName("Diary");
        Diary->resize(727, 584);
        verticalLayout = new QVBoxLayout(Diary);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        search_line = new QLineEdit(Diary);
        search_line->setObjectName("search_line");

        horizontalLayout->addWidget(search_line);

        search_button = new QPushButton(Diary);
        search_button->setObjectName("search_button");

        horizontalLayout->addWidget(search_button);


        verticalLayout->addLayout(horizontalLayout);

        diary_table = new NonClickableTableWidget(Diary);
        diary_table->setObjectName("diary_table");
        diary_table->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\201\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \320\275\320\260\320\266\320\260\321\202\320\276\320\271 \321\217\321\207\320\265\320\271\320\272\320\270 */\n"
"QTableWidget::item:pressed {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"/* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\201\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \321\217\321\207\320\265\320\271\320\272\320\270 \320\262 \321\204\320\276\320\272\321\203\321\201\320\265 (\321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265) */\n"
"QTableWidget::item:focus {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout->addWidget(diary_table);


        retranslateUi(Diary);
        QObject::connect(search_line, SIGNAL(textEdited(QString)), Diary, SLOT(textEdited()));

        QMetaObject::connectSlotsByName(Diary);
    } // setupUi

    void retranslateUi(QWidget *Diary)
    {
        Diary->setWindowTitle(QCoreApplication::translate("Diary", "Form", nullptr));
        search_line->setPlaceholderText(QCoreApplication::translate("Diary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213...", nullptr));
        search_button->setText(QCoreApplication::translate("Diary", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Diary: public Ui_Diary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARY_H
