#pragma once
#ifndef REPORT_H
#define REPORT_H
//#ifndef QT_NO_PRINTER
#include <QDialog>
#include "dbconnect.h"
#include <QtCharts/QPieSlice>
#include <QChart>
#include <QChartView>
QT_CHARTS_USE_NAMESPACE

class MainForm;
class admin;
class login;


namespace Ui {  //template for qt for the form generations
class report;
}

class report : public QDialog
{
    Q_OBJECT

public:
    explicit report(QWidget *parent = 0);
    void setId(int);
    void setName(QString);
    QString getName();
    QString getDate();
    report( const report &); //copy constructor

    friend class login; //  friend function

    ~report();

private slots:
    void on_closebtn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_getPdf_clicked();

    int printPdf();

    double getTarget();



private:
    int id;
    QString u_id ;
    Ui::report *ui;
    dbconnect *db;
    admin *ad;
    MainForm *mf;
    login *lg;
    int *ptr;
//pie chart variables
    QPieSeries *series;
    QPieSlice *slice0;
    QPieSlice *slice1;
    QChart *chart;
    QChartView *chartView;
    QString Username,user;

    double roe;
    double ros;
    double es;
    double ee;
    int final;
    double average;
     QString result;
     QString avg;
     QString esave,eexp,ratexp,ratesave;

     int eexpint;
     int esaveint;

};

#endif // REPORT_H
