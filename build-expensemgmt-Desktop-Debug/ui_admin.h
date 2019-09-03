/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QTableView *mainInfo;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *dailyInfo;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QStringLiteral("admin"));
        admin->resize(575, 506);
        admin->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/exmgmtlogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin->setWindowIcon(icon);
        mainInfo = new QTableView(admin);
        mainInfo->setObjectName(QStringLiteral("mainInfo"));
        mainInfo->setGeometry(QRect(30, 30, 521, 71));
        mainInfo->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 470, 89, 25));
        pushButton->setStyleSheet(QLatin1String("color:white;\n"
"background-color:green;"));
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 470, 89, 25));
        pushButton_2->setStyleSheet(QLatin1String("color:white;\n"
"background-color:red;"));
        dailyInfo = new QTableView(admin);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(120, 140, 351, 321));
        dailyInfo->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 110, 111, 17));
        label_2->setStyleSheet(QLatin1String("background-color:black;\n"
"color:white;"));
        label_3 = new QLabel(admin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 10, 111, 17));
        label_3->setStyleSheet(QLatin1String("background-color:black;\n"
"color: rgb(123, 174, 60);\n"
"color:white;"));
        pushButton_3 = new QPushButton(admin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 470, 111, 25));
        pushButton_3->setStyleSheet(QLatin1String("background-color:rgb(245, 121, 0);\n"
"color:white;"));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Admin Panel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("admin", "Load table", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("admin", "Close", Q_NULLPTR));
        label_2->setText(QApplication::translate("admin", "EXPENSE TABLE", Q_NULLPTR));
        label_3->setText(QApplication::translate("admin", "GENERAL INFO", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("admin", "Update MyData", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
