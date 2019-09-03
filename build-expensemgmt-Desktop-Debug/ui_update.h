/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

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

class Ui_update
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QTableView *mainInfo;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *name;
    QLineEdit *password;
    QLineEdit *mincome;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *update)
    {
        if (update->objectName().isEmpty())
            update->setObjectName(QStringLiteral("update"));
        update->resize(524, 552);
        frame = new QFrame(update);
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
        label_2 = new QLabel(update);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 90, 71, 17));
        mainInfo = new QTableView(update);
        mainInfo->setObjectName(QStringLiteral("mainInfo"));
        mainInfo->setGeometry(QRect(100, 120, 331, 61));
        label_3 = new QLabel(update);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 210, 131, 17));
        label_4 = new QLabel(update);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 250, 67, 17));
        label_5 = new QLabel(update);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 300, 67, 17));
        label_6 = new QLabel(update);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 360, 101, 17));
        name = new QLineEdit(update);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(200, 250, 231, 25));
        password = new QLineEdit(update);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(200, 300, 231, 25));
        mincome = new QLineEdit(update);
        mincome->setObjectName(QStringLiteral("mincome"));
        mincome->setGeometry(QRect(200, 360, 231, 25));
        pushButton = new QPushButton(update);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 410, 89, 25));
        pushButton->setStyleSheet(QLatin1String("color:white;\n"
"background-color:red;"));
        pushButton_2 = new QPushButton(update);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 410, 89, 25));
        pushButton_2->setStyleSheet(QLatin1String("background-color:rgb(245, 121, 0);\n"
"color:white;"));
        pushButton_3 = new QPushButton(update);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 410, 89, 25));
        pushButton_3->setStyleSheet(QLatin1String("background-color:green;\n"
"color:white;\n"
""));
        pushButton_4 = new QPushButton(update);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(28, 410, 101, 25));
        pushButton_4->setStyleSheet(QLatin1String("background-color:rgb(173, 127, 168);\n"
"color:white;\n"
""));

        retranslateUi(update);

        QMetaObject::connectSlotsByName(update);
    } // setupUi

    void retranslateUi(QDialog *update)
    {
        update->setWindowTitle(QApplication::translate("update", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("update", "UPDATE PANEL", Q_NULLPTR));
        label_2->setText(QApplication::translate("update", "Your Data", Q_NULLPTR));
        label_3->setText(QApplication::translate("update", "Change Your Data", Q_NULLPTR));
        label_4->setText(QApplication::translate("update", "Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("update", "Password", Q_NULLPTR));
        label_6->setText(QApplication::translate("update", "Mothly Income", Q_NULLPTR));
        pushButton->setText(QApplication::translate("update", "Close", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("update", "Go back", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("update", "Update", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("update", "Load MyData", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class update: public Ui_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
