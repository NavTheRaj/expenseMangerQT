#ifndef MAINFORM_H
#define MAINFORM_H


#include <QDialog>
#include<QSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>
#include "mainwindow.h"

namespace Ui {  //template for qt for the form generations
class MainForm;
}

class MainForm : public QDialog
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = 0);
    ~MainForm();

private slots:
    void on_loginbtn_clicked(); //

    void on_signupbtn_clicked();

private:
    Ui::MainForm *ui;
    login *lg; //navigate to login form
//    Expense *exp;
    MainWindow *main; //navigate to signup form
};

#endif // MAINFORM_H
