/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame_3;
    QLabel *label_5;
    QFrame *frame;
    QPushButton *authorise_button;
    QLineEdit *login_edit;
    QLineEdit *password_edit;
    QLabel *log_err_msg;
    QLabel *label;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName("LoginForm");
        LoginForm->resize(1203, 764);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginForm->sizePolicy().hasHeightForWidth());
        LoginForm->setSizePolicy(sizePolicy);
        LoginForm->setAutoFillBackground(false);
        LoginForm->setStyleSheet(QString::fromUtf8("background-color: #2c3e50;\n"
""));
        horizontalLayout = new QHBoxLayout(LoginForm);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_3 = new QFrame(LoginForm);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setMinimumSize(QSize(500, 400));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: transparent;\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 60, 451, 231));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(10000, 10000));
        label_5->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #ecf0f1;"));
        label_5->setFrameShape(QFrame::Box);
        frame = new QFrame(frame_3);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 80, 418, 201));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: transparent;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        authorise_button = new QPushButton(frame);
        authorise_button->setObjectName("authorise_button");
        authorise_button->setGeometry(QRect(140, 150, 141, 41));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(authorise_button->sizePolicy().hasHeightForWidth());
        authorise_button->setSizePolicy(sizePolicy3);
        authorise_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        login_edit = new QLineEdit(frame);
        login_edit->setObjectName("login_edit");
        login_edit->setGeometry(QRect(21, 51, 376, 40));
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(120);
        sizePolicy4.setHeightForWidth(login_edit->sizePolicy().hasHeightForWidth());
        login_edit->setSizePolicy(sizePolicy4);
        login_edit->setMinimumSize(QSize(0, 40));
        login_edit->setMaximumSize(QSize(16777215, 16777215));
        login_edit->setStyleSheet(QString::fromUtf8("background: none repeat scroll 0 0 #f5f9fa;\n"
"    border-radius: 5px;\n"
"    margin: 0 auto;\n"
"    width: 300px;\n"
"border: 1px solid rgba(128, 128, 128, 0.5);\n"
"\n"
""));
        password_edit = new QLineEdit(frame);
        password_edit->setObjectName("password_edit");
        password_edit->setGeometry(QRect(21, 98, 376, 40));
        sizePolicy4.setHeightForWidth(password_edit->sizePolicy().hasHeightForWidth());
        password_edit->setSizePolicy(sizePolicy4);
        password_edit->setMinimumSize(QSize(0, 40));
        password_edit->setStyleSheet(QString::fromUtf8("background: none repeat scroll 0 0 #f5f9fa;\n"
"    border-radius: 5px;\n"
"    margin: 0 auto;\n"
"    width: 300px;\n"
"border: 1px solid rgba(128, 128, 128, 0.5);"));
        password_edit->setEchoMode(QLineEdit::Password);
        log_err_msg = new QLabel(frame);
        log_err_msg->setObjectName("log_err_msg");
        log_err_msg->setGeometry(QRect(120, 20, 221, 21));
        log_err_msg->setStyleSheet(QString::fromUtf8("color: red;"));
        label = new QLabel(frame_3);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 30, 81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8("logomiet.png")));

        horizontalLayout->addWidget(frame_3);


        retranslateUi(LoginForm);
        QObject::connect(login_edit, SIGNAL(textEdited(QString)), LoginForm, SLOT(startAnotherAttempt()));

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        label_5->setText(QString());
        authorise_button->setText(QCoreApplication::translate("LoginForm", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        login_edit->setInputMask(QString());
        login_edit->setText(QString());
        login_edit->setPlaceholderText(QCoreApplication::translate("LoginForm", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        password_edit->setInputMask(QString());
        password_edit->setText(QString());
        password_edit->setPlaceholderText(QCoreApplication::translate("LoginForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        log_err_msg->setText(QCoreApplication::translate("LoginForm", "\320\235\320\265\320\262\320\265\321\200\320\275\321\213\320\271 \320\273\320\276\320\263\320\270\320\275 \320\270\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214!", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
