/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QLabel *label_2;
    QLabel *mincome;
    QLabel *roe;
    QLabel *label_3;
    QLabel *ros;
    QLabel *label_4;
    QPushButton *closebtn;
    QLabel *es;
    QLabel *label_5;
    QLabel *ee;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *pieView;
    QPushButton *getPdf;
    QWidget *safe;
    QVBoxLayout *verticalLayout;
    QWidget *warn;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName(QStringLiteral("report"));
        report->resize(570, 695);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/exmgmtlogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        report->setWindowIcon(icon);
        label_2 = new QLabel(report);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(62, 330, 121, 17));
        mincome = new QLabel(report);
        mincome->setObjectName(QStringLiteral("mincome"));
        mincome->setGeometry(QRect(252, 330, 281, 17));
        mincome->setStyleSheet(QStringLiteral("background-color:white;"));
        roe = new QLabel(report);
        roe->setObjectName(QStringLiteral("roe"));
        roe->setGeometry(QRect(252, 390, 281, 17));
        roe->setStyleSheet(QStringLiteral("background-color:white;"));
        label_3 = new QLabel(report);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(62, 390, 121, 17));
        ros = new QLabel(report);
        ros->setObjectName(QStringLiteral("ros"));
        ros->setGeometry(QRect(252, 450, 281, 17));
        ros->setStyleSheet(QStringLiteral("background-color:white;"));
        label_4 = new QLabel(report);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 450, 121, 17));
        closebtn = new QPushButton(report);
        closebtn->setObjectName(QStringLiteral("closebtn"));
        closebtn->setGeometry(QRect(442, 640, 89, 25));
        closebtn->setStyleSheet(QLatin1String("background-color:red;\n"
"color:white;"));
        es = new QLabel(report);
        es->setObjectName(QStringLiteral("es"));
        es->setGeometry(QRect(252, 510, 281, 17));
        es->setStyleSheet(QStringLiteral("background-color:white;"));
        label_5 = new QLabel(report);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 510, 121, 17));
        ee = new QLabel(report);
        ee->setObjectName(QStringLiteral("ee"));
        ee->setGeometry(QRect(252, 570, 281, 17));
        ee->setStyleSheet(QStringLiteral("background-color:white;"));
        label_6 = new QLabel(report);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 570, 141, 20));
        pushButton = new QPushButton(report);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(292, 640, 141, 25));
        pushButton->setStyleSheet(QLatin1String("background-color:rgb(206, 92, 0);\n"
"color:white;"));
        pushButton_2 = new QPushButton(report);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 640, 101, 25));
        pushButton_2->setStyleSheet(QLatin1String(" \n"
" color:white;\n"
"background-color: rgb(114, 159, 207);"));
        verticalLayoutWidget = new QWidget(report);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 30, 481, 261));
        pieView = new QVBoxLayout(verticalLayoutWidget);
        pieView->setObjectName(QStringLiteral("pieView"));
        pieView->setContentsMargins(0, 0, 0, 0);
        getPdf = new QPushButton(report);
        getPdf->setObjectName(QStringLiteral("getPdf"));
        getPdf->setGeometry(QRect(80, 640, 89, 25));
        getPdf->setStyleSheet(QLatin1String("background-color: rgb(115, 210, 22);\n"
"color: rgb(238, 238, 236);\n"
"display:hidden;"));
        safe = new QWidget(report);
        safe->setObjectName(QStringLiteral("safe"));
        safe->setGeometry(QRect(540, 510, 16, 16));
        safe->setStyleSheet(QStringLiteral("background-image: url(:/resources/img/checked.png);"));
        verticalLayout = new QVBoxLayout(safe);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        warn = new QWidget(report);
        warn->setObjectName(QStringLiteral("warn"));
        warn->setGeometry(QRect(540, 510, 16, 16));
        warn->setStyleSheet(QStringLiteral("background-image: url(:/resources/img/warning.png)"));
        verticalLayout_2 = new QVBoxLayout(warn);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QDialog *report)
    {
        report->setWindowTitle(QApplication::translate("report", "EXPENSE MANAGER", Q_NULLPTR));
        label_2->setText(QApplication::translate("report", "Monthly Saving", Q_NULLPTR));
        mincome->setText(QString());
        roe->setText(QString());
        label_3->setText(QApplication::translate("report", "Rate of Expense", Q_NULLPTR));
        ros->setText(QString());
        label_4->setText(QApplication::translate("report", "Rate of Saving", Q_NULLPTR));
        closebtn->setText(QApplication::translate("report", "Close", Q_NULLPTR));
        es->setText(QString());
        label_5->setText(QApplication::translate("report", "Estimated Saving", Q_NULLPTR));
        ee->setText(QString());
        label_6->setText(QApplication::translate("report", "Estimated Expense", Q_NULLPTR));
        pushButton->setText(QApplication::translate("report", "Generate Report", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("report", "My Panel", Q_NULLPTR));
        getPdf->setText(QApplication::translate("report", "PDF", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
