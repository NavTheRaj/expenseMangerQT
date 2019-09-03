//Registration hedaer files


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSql>  //sql database header
#include<QSqlDatabase> //sql driver header
#include<QMessageBox> //pop up box header
#include <QtSql> //sql database header
#include <QDebug> //concole message
#include<QFileInfo> //fileoperation
#include <QDialog> //framework header

#include "login.h" //login class property
class expense; //forward declaration of expense class //avoid circular dependency
class MainForm;//forward declaration of mainform class

namespace Ui { //Used to group your auto-generated windows in
               //one name-space. It helps to differentiate between the ui class
class MainWindow;
}

class MainWindow:public QMainWindow
{
    Q_OBJECT  //this class has gui elements and needs to be run through the 'moc' (meta object compiler)

public:
    explicit MainWindow(QWidget *parent = 0); // to avoid implicit type conversion
    ~MainWindow(); //destructor define


private slots: //button action

    void on_okbtn_clicked();

    void on_closebtn_clicked();

private:
    Ui::MainWindow *ui;
    Expense *exp;
    login *lg; //;login pointer object
    dbconnect *db;
    Smtp *smtp;
    MainForm *mf;



};

#endif // MAINWINDOW_H
