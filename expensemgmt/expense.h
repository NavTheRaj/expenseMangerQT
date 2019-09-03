#ifndef EXPENSE_H
#define EXPENSE_H

#include<QSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>
#include <QDialog>
class report;
class dbconnect;
class Smtp;
class MainForm;
namespace Ui {  //template for qt for the form generations
class Expense;
}

class Expense : public QDialog
{
    Q_OBJECT

public:
    explicit Expense(QWidget *parent = 0);
    void setId(int);
//    void setEmail(QString);
    QString getEmail();

    ~Expense();

private slots:

    void on_closebtn_clicked();

    void on_okbtn_clicked();



    void on_pushButton_clicked();

private:
    int id;

    Ui::Expense *ui;
    report *rep;
    dbconnect *db;
    Smtp *smtp;
    MainForm *mf;


};

#endif // EXPENSE_H
