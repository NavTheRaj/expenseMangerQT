/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *labelpassword;
    QLabel *labelname;
    QLineEdit *name;
    QLineEdit *password;
    QPushButton *closebtn;
    QPushButton *okbtn;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(406, 183);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/exmgmtlogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setWindowIcon(icon);
        login->setStyleSheet(QStringLiteral(" color:black;"));
        labelpassword = new QLabel(login);
        labelpassword->setObjectName(QStringLiteral("labelpassword"));
        labelpassword->setGeometry(QRect(20, 70, 67, 17));
        labelpassword->setStyleSheet(QStringLiteral(""));
        labelname = new QLabel(login);
        labelname->setObjectName(QStringLiteral("labelname"));
        labelname->setGeometry(QRect(20, 20, 67, 17));
        labelname->setStyleSheet(QStringLiteral(""));
        name = new QLineEdit(login);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(160, 20, 201, 25));
        name->setStyleSheet(QStringLiteral("background-color:white;"));
        password = new QLineEdit(login);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(true);
        password->setGeometry(QRect(160, 70, 201, 25));
        password->setStyleSheet(QStringLiteral("background-color:white;"));
        password->setEchoMode(QLineEdit::Password);
        closebtn = new QPushButton(login);
        closebtn->setObjectName(QStringLiteral("closebtn"));
        closebtn->setGeometry(QRect(170, 130, 89, 25));
        closebtn->setStyleSheet(QLatin1String("color:white;\n"
"background-color:red;"));
        okbtn = new QPushButton(login);
        okbtn->setObjectName(QStringLiteral("okbtn"));
        okbtn->setGeometry(QRect(270, 130, 89, 25));
        okbtn->setStyleSheet(QLatin1String("color:white;\n"
"background-color:green"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "EXPENSE MANAGER", Q_NULLPTR));
        labelpassword->setText(QApplication::translate("login", "Password", Q_NULLPTR));
        labelname->setText(QApplication::translate("login", "Name", Q_NULLPTR));
        closebtn->setText(QApplication::translate("login", "CLOSE", Q_NULLPTR));
        okbtn->setText(QApplication::translate("login", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
