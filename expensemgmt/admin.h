#pragma once
#ifndef ADMIN_H
#define ADMIN_H

#include<QDialog>
#include<QSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>
#include <QDialog>
#include <QFileInfo>
class dbconnect;
class MainForm;
#include "edit.h"



namespace Ui {  //template for qt for the form generations
class admin;

}

class admin :public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = 0);
    void setId(int);

    ~admin();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    int id;
    QString uid;
    Ui::admin *ui;
    MainForm *mf;

    dbconnect *db;
    edit *ed;
};




#endif // ADMIN_H
