/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *clsbtn;
    QPushButton *updatebtn;
    QLineEdit *name;
    QLineEdit *password;
    QLineEdit *mincome;
    QTableView *myView;
    QLineEdit *emailupdate;
    QLabel *email;
    QLineEdit *target;
    QLabel *targetlabel;

    void setupUi(QDialog *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QStringLiteral("edit"));
        edit->resize(936, 407);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/exmgmtlogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit->setWindowIcon(icon);
        edit->setStyleSheet(QLatin1String(" \n"
"color:black;"));
        pushButton = new QPushButton(edit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 170, 89, 25));
        pushButton->setStyleSheet(QStringLiteral("background-color:rgb(245, 121, 0);"));
        label = new QLabel(edit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 67, 17));
        label_2 = new QLabel(edit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 67, 17));
        label_3 = new QLabel(edit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 160, 121, 17));
        clsbtn = new QPushButton(edit);
        clsbtn->setObjectName(QStringLiteral("clsbtn"));
        clsbtn->setGeometry(QRect(350, 330, 89, 25));
        clsbtn->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));
        updatebtn = new QPushButton(edit);
        updatebtn->setObjectName(QStringLiteral("updatebtn"));
        updatebtn->setGeometry(QRect(240, 330, 89, 25));
        updatebtn->setStyleSheet(QStringLiteral("background-color: rgb(123, 174, 60);"));
        name = new QLineEdit(edit);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(200, 40, 241, 25));
        name->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        password = new QLineEdit(edit);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(200, 100, 241, 25));
        password->setStyleSheet(QStringLiteral("background-color: white;"));
        mincome = new QLineEdit(edit);
        mincome->setObjectName(QStringLiteral("mincome"));
        mincome->setGeometry(QRect(200, 160, 241, 25));
        mincome->setStyleSheet(QStringLiteral("background-color: white;"));
        myView = new QTableView(edit);
        myView->setObjectName(QStringLiteral("myView"));
        myView->setGeometry(QRect(470, 40, 451, 101));
        emailupdate = new QLineEdit(edit);
        emailupdate->setObjectName(QStringLiteral("emailupdate"));
        emailupdate->setGeometry(QRect(200, 220, 241, 25));
        emailupdate->setStyleSheet(QStringLiteral("background-color: white;"));
        email = new QLabel(edit);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(30, 220, 121, 17));
        target = new QLineEdit(edit);
        target->setObjectName(QStringLiteral("target"));
        target->setGeometry(QRect(200, 280, 241, 25));
        target->setStyleSheet(QStringLiteral("background-color: white;"));
        targetlabel = new QLabel(edit);
        targetlabel->setObjectName(QStringLiteral("targetlabel"));
        targetlabel->setGeometry(QRect(30, 280, 121, 17));

        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QDialog *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "Update Data", Q_NULLPTR));
        pushButton->setText(QApplication::translate("edit", "Load Data", Q_NULLPTR));
        label->setText(QApplication::translate("edit", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("edit", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("edit", "Monthly Income", Q_NULLPTR));
        clsbtn->setText(QApplication::translate("edit", "Close", Q_NULLPTR));
        updatebtn->setText(QApplication::translate("edit", "Update", Q_NULLPTR));
        email->setText(QApplication::translate("edit", "Email", Q_NULLPTR));
        targetlabel->setText(QApplication::translate("edit", "Target Saving", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
