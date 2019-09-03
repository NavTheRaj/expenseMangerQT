#pragma once
#ifndef UPDATE_H
#define UPDATE_H

#include <QDialog>

#include<QSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>
#include <QDialog>
#include <QFileInfo>
#include "dbconnect.h"
class admin;

namespace Ui {  //template for qt for the form generations
class update;

}

class update : public QDialog
{
    Q_OBJECT

public:
    explicit update(QWidget *parent = 0);

    void setId(int);

    ~update();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();



private:
    int id;
    QString uid;
    Ui::update *ui;
    admin *ad;
    dbconnect *db;


};

#endif // UPDATE_H


