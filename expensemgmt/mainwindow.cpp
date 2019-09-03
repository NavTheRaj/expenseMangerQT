#include "mainwindow.h" //header
#include "ui_mainwindow.h" //ui property
#include<exception> //exception handling
#include "dbconnect.h" //dbconnect cllass
#include "smtp.h" //smtp protocol
#include <QDesktopWidget> //form
#include "mainform.h" //Main panel header


MainWindow::MainWindow(QWidget *parent) : //inheriting the parent QWidget
    QMainWindow(parent),
    ui(new Ui::MainWindow) //user interface
{
    ui->setupUi(this); //initial setting up
    QRect scr = QApplication::desktop()->screenGeometry(); //setting the form in the center
    move( scr.center() - rect().center() );

}

MainWindow::~MainWindow()
{
    delete ui; //destructor(kills the object after operation)
}


void MainWindow::on_okbtn_clicked()
{
    QString name,password,mincome,email,target; //declaring the variables

    name=ui->name->text();  //storing the ui variables
    password=ui->passsword->text();
    mincome=ui->mincome->text();
    email=ui->email->text();
    target=ui->target->text();

//    Expense *exp=new Expense(this);
//    exp->setEmail(email);


//verifying the user input values
    if(name!=NULL && password!=NULL && mincome!=NULL && email!=NULL && target!=NULL){
try
    {

        //code to insert the user data into database named "reg_user"
      db->connectdb(); //connect to the database mydb.db
      QSqlQuery qry ; //object of QSqlQuery for sql operation
//inserting data to the database
      if(qry.exec("INSERT INTO reg_user (name,password,mincome,email,target) VALUES ('"+name+"','"+password+"','"+mincome+"','"+email+"','"+target+"')")){

          //Message pop up box
      QMessageBox::information(this,"Succesful","Successfully created your account");

      //<<<<------------code to send the mail via smtp protocol

             smtp = new Smtp("expensemanager.info@gmail.com", "noreply1234", "smtp.gmail.com");
             connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

             smtp->sendMail("REGISTERED!!",email,
                            "EXPENSE MANAGER","You are successfully registered in our brand new software"
                                              ",Enjoy and save your expenses!!Have a great day!!");
      //sending mail code ends---->>>>>




      //Navigation to login form
      this->close(); //close the forms
      lg=new login(this);  //object definition of object lg
      lg->show(); //showing the form if the operation executes

      }

      else{
      QMessageBox::information(this,"Not Connected","Database not connected");
    }

    } catch (const char* msg){
        throw msg;
    }
    }
        //if the input is null
        else{
           QMessageBox::information(this,"Empty Data","Please fill the form completely!!");
        }

}
void MainWindow::on_closebtn_clicked()
{
    this->close();
    mf=new MainForm(this);//when closed navigating back to the mainform panel
    mf->show();
}

