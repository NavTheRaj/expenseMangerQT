/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QPushButton *signupbtn;
    QPushButton *loginbtn;
    QWidget *formWidget;
    QFormLayout *formLayout;

    void setupUi(QDialog *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->setEnabled(true);
        MainForm->resize(559, 605);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainForm->setWindowIcon(icon);
        MainForm->setStyleSheet(QStringLiteral(""));
        signupbtn = new QPushButton(MainForm);
        signupbtn->setObjectName(QStringLiteral("signupbtn"));
        signupbtn->setGeometry(QRect(120, 550, 131, 41));
        QFont font;
        font.setFamily(QStringLiteral("Pagul"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        signupbtn->setFont(font);
        signupbtn->setStyleSheet(QLatin1String("color:white;\n"
" \n"
"background-color:#e70025;\n"
"font: 16pt \"Pagul\";"));
        loginbtn = new QPushButton(MainForm);
        loginbtn->setObjectName(QStringLiteral("loginbtn"));
        loginbtn->setGeometry(QRect(310, 550, 131, 41));
        loginbtn->setStyleSheet(QLatin1String("color:white;\n"
"background-color:#e70025;\n"
"font: 16pt \"Pagul\";"));
        formWidget = new QWidget(MainForm);
        formWidget->setObjectName(QStringLiteral("formWidget"));
        formWidget->setGeometry(QRect(-51, -40, 611, 581));
        formWidget->setStyleSheet(QLatin1String("background-image: url(:/resources/img/exmgmtlogo.png);\n"
"background-position:center;\n"
"background-color: #5f95c5;\n"
""));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QDialog *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "EXPENSE MANAGER", Q_NULLPTR));
        signupbtn->setText(QApplication::translate("MainForm", "Sign Up", Q_NULLPTR));
        loginbtn->setText(QApplication::translate("MainForm", "Log In", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
