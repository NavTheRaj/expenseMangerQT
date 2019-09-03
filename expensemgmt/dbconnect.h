#ifndef DBCONNECT_H
#define DBCONNECT_H
#include<QSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlRecord>
#include <QtSql>
#include <QDebug>
#include <QException>
#include<QFileInfo>
#include <QDialog>




class dbconnect
{
public:

    void connectdb();  //function for connecting to the database
    void close();      //function to close the database

};




#endif // DBCONNECT_H
