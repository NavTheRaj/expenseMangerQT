/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelname;
    QLabel *labelpassword;
    QLineEdit *name;
    QLineEdit *passsword;
    QPushButton *okbtn;
    QPushButton *closebtn;
    QLabel *labelmincome;
    QLineEdit *mincome;
    QLineEdit *email;
    QLabel *labelEmail;
    QLabel *targetlabel;
    QLineEdit *target;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(444, 369);
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/exmgmtlogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("text-align:center;\n"
""));
        labelname = new QLabel(centralWidget);
        labelname->setObjectName(QStringLiteral("labelname"));
        labelname->setGeometry(QRect(50, 40, 67, 17));
        labelname->setStyleSheet(QStringLiteral(" color:black;"));
        labelpassword = new QLabel(centralWidget);
        labelpassword->setObjectName(QStringLiteral("labelpassword"));
        labelpassword->setGeometry(QRect(50, 90, 67, 17));
        labelpassword->setStyleSheet(QStringLiteral(" color:black;"));
        name = new QLineEdit(centralWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(190, 40, 201, 25));
        name->setStyleSheet(QStringLiteral("background-color:white;"));
        passsword = new QLineEdit(centralWidget);
        passsword->setObjectName(QStringLiteral("passsword"));
        passsword->setEnabled(true);
        passsword->setGeometry(QRect(190, 90, 201, 25));
        passsword->setStyleSheet(QStringLiteral("background-color:white;"));
        passsword->setEchoMode(QLineEdit::Password);
        okbtn = new QPushButton(centralWidget);
        okbtn->setObjectName(QStringLiteral("okbtn"));
        okbtn->setGeometry(QRect(300, 300, 89, 25));
        okbtn->setStyleSheet(QLatin1String("color:white;\n"
"background-color:green"));
        closebtn = new QPushButton(centralWidget);
        closebtn->setObjectName(QStringLiteral("closebtn"));
        closebtn->setGeometry(QRect(200, 300, 89, 25));
        closebtn->setStyleSheet(QLatin1String("color:white;\n"
"background-color:red;"));
        labelmincome = new QLabel(centralWidget);
        labelmincome->setObjectName(QStringLiteral("labelmincome"));
        labelmincome->setGeometry(QRect(50, 140, 111, 20));
        labelmincome->setStyleSheet(QStringLiteral(" color:black;"));
        mincome = new QLineEdit(centralWidget);
        mincome->setObjectName(QStringLiteral("mincome"));
        mincome->setEnabled(true);
        mincome->setGeometry(QRect(190, 140, 201, 25));
        mincome->setStyleSheet(QStringLiteral("background-color:white;"));
        mincome->setEchoMode(QLineEdit::Normal);
        email = new QLineEdit(centralWidget);
        email->setObjectName(QStringLiteral("email"));
        email->setEnabled(true);
        email->setGeometry(QRect(190, 190, 201, 25));
        email->setStyleSheet(QStringLiteral("background-color:white;"));
        email->setEchoMode(QLineEdit::Normal);
        labelEmail = new QLabel(centralWidget);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));
        labelEmail->setGeometry(QRect(50, 190, 111, 20));
        labelEmail->setStyleSheet(QStringLiteral(" color:black;"));
        targetlabel = new QLabel(centralWidget);
        targetlabel->setObjectName(QStringLiteral("targetlabel"));
        targetlabel->setGeometry(QRect(50, 240, 111, 20));
        targetlabel->setStyleSheet(QStringLiteral(" color:black;"));
        target = new QLineEdit(centralWidget);
        target->setObjectName(QStringLiteral("target"));
        target->setGeometry(QRect(190, 240, 201, 25));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EXPENSE MANAGER", Q_NULLPTR));
        labelname->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        labelpassword->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        okbtn->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        closebtn->setText(QApplication::translate("MainWindow", "CLOSE", Q_NULLPTR));
        labelmincome->setText(QApplication::translate("MainWindow", "Monthly Income", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        targetlabel->setText(QApplication::translate("MainWindow", "Target Saving", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
