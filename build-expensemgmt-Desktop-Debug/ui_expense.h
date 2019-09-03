/********************************************************************************
** Form generated from reading UI file 'expense.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSE_H
#define UI_EXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Expense
{
public:
    QLabel *label_2;
    QLabel *header;
    QCalendarWidget *date;
    QLabel *label_4;
    QLineEdit *dailyexpense;
    QLineEdit *exgain;
    QPushButton *okbtn;
    QPushButton *closebtn;
    QPushButton *pushButton;

    void setupUi(QDialog *Expense)
    {
        if (Expense->objectName().isEmpty())
            Expense->setObjectName(QStringLiteral("Expense"));
        Expense->resize(496, 386);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/exmgmtlogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Expense->setWindowIcon(icon);
        Expense->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(Expense);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 290, 111, 21));
        label_2->setStyleSheet(QStringLiteral(""));
        header = new QLabel(Expense);
        header->setObjectName(QStringLiteral("header"));
        header->setGeometry(QRect(200, 10, 91, 17));
        header->setStyleSheet(QLatin1String("background-color:rgb(52, 101, 164);\n"
"color:white;"));
        date = new QCalendarWidget(Expense);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(20, 40, 451, 171));
        label_4 = new QLabel(Expense);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 240, 131, 21));
        label_4->setStyleSheet(QStringLiteral(""));
        dailyexpense = new QLineEdit(Expense);
        dailyexpense->setObjectName(QStringLiteral("dailyexpense"));
        dailyexpense->setGeometry(QRect(150, 240, 321, 25));
        dailyexpense->setStyleSheet(QStringLiteral("background-color:white;"));
        exgain = new QLineEdit(Expense);
        exgain->setObjectName(QStringLiteral("exgain"));
        exgain->setGeometry(QRect(150, 290, 321, 25));
        exgain->setStyleSheet(QStringLiteral("background-color:white;"));
        okbtn = new QPushButton(Expense);
        okbtn->setObjectName(QStringLiteral("okbtn"));
        okbtn->setGeometry(QRect(380, 340, 89, 25));
        okbtn->setStyleSheet(QLatin1String("background-color:green;\n"
"color:white;"));
        closebtn = new QPushButton(Expense);
        closebtn->setObjectName(QStringLiteral("closebtn"));
        closebtn->setGeometry(QRect(180, 340, 89, 25));
        closebtn->setStyleSheet(QLatin1String("background-color:red;\n"
"color:white;"));
        pushButton = new QPushButton(Expense);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 340, 89, 25));
        pushButton->setStyleSheet(QStringLiteral("background-color:  rgb(211, 215, 207)"));

        retranslateUi(Expense);

        QMetaObject::connectSlotsByName(Expense);
    } // setupUi

    void retranslateUi(QDialog *Expense)
    {
        Expense->setWindowTitle(QApplication::translate("Expense", "EXPENSE MANAGER", Q_NULLPTR));
        label_2->setText(QApplication::translate("Expense", "Extra Gain", Q_NULLPTR));
        header->setText(QApplication::translate("Expense", "Choose Date", Q_NULLPTR));
        label_4->setText(QApplication::translate("Expense", " Today's Expenses", Q_NULLPTR));
        okbtn->setText(QApplication::translate("Expense", "OK", Q_NULLPTR));
        closebtn->setText(QApplication::translate("Expense", "CLOSE", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Expense", "My Panel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Expense: public Ui_Expense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSE_H
