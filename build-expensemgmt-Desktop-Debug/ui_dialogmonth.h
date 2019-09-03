/********************************************************************************
** Form generated from reading UI file 'dialogmonth.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMONTH_H
#define UI_DIALOGMONTH_H

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

class Ui_dialogMonth
{
public:
    QLabel *labelpassword;
    QLabel *labelname;
    QLineEdit *name;
    QLineEdit *passsword;
    QPushButton *closebtn;
    QPushButton *okbtn;
    QLabel *dbstatus;

    void setupUi(QDialog *dialogMonth)
    {
        if (dialogMonth->objectName().isEmpty())
            dialogMonth->setObjectName(QStringLiteral("dialogMonth"));
        dialogMonth->resize(406, 183);
        labelpassword = new QLabel(dialogMonth);
        labelpassword->setObjectName(QStringLiteral("labelpassword"));
        labelpassword->setGeometry(QRect(20, 70, 67, 17));
        labelname = new QLabel(dialogMonth);
        labelname->setObjectName(QStringLiteral("labelname"));
        labelname->setGeometry(QRect(20, 20, 67, 17));
        name = new QLineEdit(dialogMonth);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(160, 20, 201, 25));
        passsword = new QLineEdit(dialogMonth);
        passsword->setObjectName(QStringLiteral("passsword"));
        passsword->setEnabled(true);
        passsword->setGeometry(QRect(160, 70, 201, 25));
        passsword->setEchoMode(QLineEdit::Password);
        closebtn = new QPushButton(dialogMonth);
        closebtn->setObjectName(QStringLiteral("closebtn"));
        closebtn->setGeometry(QRect(170, 130, 89, 25));
        closebtn->setStyleSheet(QLatin1String("color:white;\n"
"background-color:red;"));
        okbtn = new QPushButton(dialogMonth);
        okbtn->setObjectName(QStringLiteral("okbtn"));
        okbtn->setGeometry(QRect(270, 130, 89, 25));
        okbtn->setStyleSheet(QLatin1String("color:white;\n"
"background-color:green"));
        dbstatus = new QLabel(dialogMonth);
        dbstatus->setObjectName(QStringLiteral("dbstatus"));
        dbstatus->setGeometry(QRect(10, 160, 191, 17));

        retranslateUi(dialogMonth);

        QMetaObject::connectSlotsByName(dialogMonth);
    } // setupUi

    void retranslateUi(QDialog *dialogMonth)
    {
        dialogMonth->setWindowTitle(QApplication::translate("dialogMonth", "MONTHLY ESTIMATION", Q_NULLPTR));
        labelpassword->setText(QApplication::translate("dialogMonth", "Password", Q_NULLPTR));
        labelname->setText(QApplication::translate("dialogMonth", "Name", Q_NULLPTR));
        closebtn->setText(QApplication::translate("dialogMonth", "CLOSE", Q_NULLPTR));
        okbtn->setText(QApplication::translate("dialogMonth", "OK", Q_NULLPTR));
        dbstatus->setText(QApplication::translate("dialogMonth", "[+]Status", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogMonth: public Ui_dialogMonth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMONTH_H
