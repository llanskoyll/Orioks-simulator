/********************************************************************************
** Form generated from reading UI file 'studentpractice.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPRACTICE_H
#define UI_STUDENTPRACTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentPractice
{
public:

    void setupUi(QWidget *StudentPractice)
    {
        if (StudentPractice->objectName().isEmpty())
            StudentPractice->setObjectName("StudentPractice");
        StudentPractice->resize(400, 300);

        retranslateUi(StudentPractice);

        QMetaObject::connectSlotsByName(StudentPractice);
    } // setupUi

    void retranslateUi(QWidget *StudentPractice)
    {
        StudentPractice->setWindowTitle(QCoreApplication::translate("StudentPractice", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentPractice: public Ui_StudentPractice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPRACTICE_H
