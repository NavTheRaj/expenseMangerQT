/********************************************************************************
** Form generated from reading UI file 'updatepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPANEL_H
#define UI_UPDATEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_updatePanel
{
public:
    QTableView *mainInfo;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QLineEdit *password;
    QFrame *frame;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *mincome;
    QLabel *label_6;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *name;
    QLabel *label_3;

    void setupUi(QDialog *updatePanel)
    {
        if (updatePanel->objectName().isEmpty())
            updatePanel->setObjectName(QStringLiteral("updatePanel"));
        updatePanel->resize(531, 443);
        mainInfo = new QTableView(updatePanel);
        mainInfo->setObjectName(QStringLiteral("mainInfo"));
        mainInfo->setGeometry(QRect(100, 120, 331, 61));
        pushButton_4 = new QPushButton(updatePanel);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(28, 410, 101, 25));
        pushButton_4->setStyleSheet(QLatin1String("background-color:rgb(173, 127, 168);\n"
"color:white;\n"
""));
        pushButton = new QPushButton(updatePanel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 410, 89, 25));
        pushButton->setStyleSheet(QLatin1String("color:white;\n"
"background-color:red;"));
        password = new QLineEdit(updatePanel);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(200, 300, 231, 25));
        frame = new QFrame(updatePanel);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 531, 80));
        frame->setStyleSheet(QStringLiteral("background-color:skyblue;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 30, 141, 17));
        label->setStyleSheet(QLatin1String("color:white;\n"
"font: 14pt \"Ubuntu\";"));
        label_4 = new QLabel(updatePanel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 250, 67, 17));
        label_5 = new QLabel(updatePanel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 300, 67, 17));
        mincome = new QLineEdit(updatePanel);
        mincome->setObjectName(QStringLiteral("mincome"));
        mincome->setGeometry(QRect(200, 360, 231, 25));
        label_6 = new QLabel(updatePanel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 360, 101, 17));
        label_2 = new QLabel(updatePanel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 90, 71, 17));
        pushButton_2 = new QPushButton(updatePanel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 410, 89, 25));
        pushButton_2->setStyleSheet(QLatin1String("background-color:rgb(245, 121, 0);\n"
"color:white;"));
        pushButton_3 = new QPushButton(updatePanel);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 410, 89, 25));
        pushButton_3->setStyleSheet(QLatin1String("background-color:green;\n"
"color:white;\n"
""));
        name = new QLineEdit(updatePanel);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(200, 250, 231, 25));
        label_3 = new QLabel(updatePanel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 210, 131, 17));

        retranslateUi(updatePanel);

        QMetaObject::connectSlotsByName(updatePanel);
    } // setupUi

    void retranslateUi(QDialog *updatePanel)
    {
        updatePanel->setWindowTitle(QApplication::translate("updatePanel", "Dialog", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("updatePanel", "Load MyData", Q_NULLPTR));
        pushButton->setText(QApplication::translate("updatePanel", "Close", Q_NULLPTR));
        label->setText(QApplication::translate("updatePanel", "UPDATE PANEL", Q_NULLPTR));
        label_4->setText(QApplication::translate("updatePanel", "Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("updatePanel", "Password", Q_NULLPTR));
        label_6->setText(QApplication::translate("updatePanel", "Mothly Income", Q_NULLPTR));
        label_2->setText(QApplication::translate("updatePanel", "Your Data", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("updatePanel", "Go back", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("updatePanel", "Update", Q_NULLPTR));
        label_3->setText(QApplication::translate("updatePanel", "Change Your Data", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updatePanel: public Ui_updatePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPANEL_H
