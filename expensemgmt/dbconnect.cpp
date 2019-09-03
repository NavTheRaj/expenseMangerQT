 #include "dbconnect.h"



void dbconnect::connectdb(){

        try {//exception handling
            QSqlDatabase db; //object of database
            db=QSqlDatabase::addDatabase("QSQLITE"); //adding the driver of sqlite database
            qDebug()  <<  QSqlDatabase::drivers(); //consol;e output
            db.setDatabaseName("/home/nirvan/Documents/c++db/mydb.db"); //path of sqlite database mydb.db

            db.open();//open database

         } catch (const char* msg) {
           throw msg ;
         }
    }

void dbconnect::close(){
    try {
        QSqlDatabase db; //obejct

        db.close(); //closing the db connection

     } catch (const char* msg) {
       throw msg ;
     }
}



