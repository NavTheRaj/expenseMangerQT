#ifndef LOGIN_H
#define LOGIN_H
#include<QSql> //header for database
#include<QSqlDatabase> //header for database
#include<QMessageBox> //header for pop up box
#include <QtSql>//header for database connection
#include <QDebug> //header for debug console message
#include<QSqlRecord> //header for database record reading
#include<QFileInfo> //header for file operation information
#include <QDialog> //header for forms
#include "expense.h"  //header for importing class expense.h
class MainForm; //forward declaration of class mainform to navigate back



namespace Ui {  //template for qt for the form generations
class login;
}

class login : public QDialog    //inheriting the property of Qdialog for form generation
{
    Q_OBJECT  //this class has gui elements and needs to be run through the 'moc' (meta object compiler)

public:
    explicit login(QWidget *parent = 0); //explicit retreiving of QWidget from the parent class
    static int uid; //unique tracking id of users (static memeber variable)
    ~login();  //destructor of login class
     friend QString printName();// freind function


private slots:  //slots for the user actions


    void on_okbtn_clicked(); //action when ok button is clicked

    void on_closebtn_clicked(); //action when the close button is clicked

private:
    Ui::login *ui; //native class's object pointer for user interface
    Expense *exp;  //expense form object pointer declaration
    dbconnect *db; //dbconnect object pointer declaration
    MainForm *mf; //object pointer definition for navigation
    QString name,password;

};

#endif // LOGIN_H
