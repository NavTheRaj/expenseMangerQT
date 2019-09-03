#include "login.h"
#include "dbconnect.h"
#include "ui_login.h"
#include "report.h"
#include "mainform.h"


login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this); //set up the user interface of the class login


}

//QString login:: printName()
//{
//    //accessing private data from non-member function

//    return name;
//}

login::~login()
{
    delete ui; //destructing the class after its object is killed
}

void login::on_okbtn_clicked() //action when the okay button is clicked in the form
{

    //Reading the data from form to store it into variables
    //declaring two variables for storing the UI values in them
    name=ui->name->text(); //stroing the ui values to the declared variables
    password=ui->password->text();

    report *rep=new report(this); //sending the value of name for reporting
    rep->setName(name);

    db->connectdb(); //db connection


         int count=0;
         int u_id;

         //database connection to verify the user data from the database
         QSqlQuery qry ; //object of sql query in order to execute the database operation
         qry.prepare("SELECT * FROM reg_user WHERE name='"+name+"' AND password='"+password+"' ");

      if(qry.exec()){
          while(qry.next())
          {
          count++;  //to count the row
          }

//if the counter is unique then the data is verified
          if(count==1){
//             if the data is correct then execute the code below

//to retrieve the user id from database for navigating to different forms
             QSqlQuery qry1;
             qry1.exec("SELECT id FROM reg_user WHERE name='"+name+"' AND password='"+password+"'");
              int userid = qry1.record().indexOf("id"); //reading the index of user id from the database
              while (qry1.next())
              {
                 QString uid = qry1.value(userid).toString(); //stroing the user id in string
                 qDebug() << uid;
                 u_id=uid.toInt(); //changing the string id into integer form
              }
//after getting the id navigate it to the expense form
                       this->close();
                       exp=new Expense (this);
                       exp->setId(u_id);
                       exp->show();
          }
//if the name and password is duplicate then send the message
          if(count>1){
              QMessageBox::information(this,"Duplicate","Username and password duplicate!");
          }
//if there is no record in database then send error message
          if(count<1){
              QMessageBox::information(this,"Incorrect","Username and password are not correct!");
          }

}

      //in case database is not connected
    else{
        QMessageBox::information(this,"DB ERROR","Database connection error!");
    }
}



void login::on_closebtn_clicked()
{
    this->close();
    mf=new MainForm(this); // creating the object and defining its memeory address in the memory block
    mf->show(); //navigating back to the main page
}
