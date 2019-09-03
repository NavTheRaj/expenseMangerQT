#include "expense.h"
#include "ui_expense.h"
#include<QPixmap>
#include<QDate>
#include<QDateTime>
#include "dbconnect.h"
#include "report.h"
#include "smtp.h"
#include "mainwindow.h"
#include "mainform.h"




Expense::Expense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Expense)
{
    ui->setupUi(this);
    db->connectdb();


}

void Expense::setId(int id){
    this->id=id;
}

QString Expense::getEmail()
    {
    QVariant var(id);
    QString uid=var.toString();
     QString email;
            QSqlQuery query;
            if(query.exec("SELECT email from reg_user WHERE id='"+uid+"'")){
                int track = query.record().indexOf("email");
                while (query.next())
                {
                    email = query.value(track).toString();


                }
                  qDebug()<<"This is email"<<email;
            }
            return email;
        }




Expense::~Expense()
{
    delete ui;
}
void Expense::on_closebtn_clicked()
{
    this->close();
    mf=new MainForm(this);
    mf->show();
}





void Expense::on_okbtn_clicked()
{
    QString dailyexpense,exgain,date;
    dailyexpense=ui->dailyexpense->text();
    exgain=ui->exgain->text();
    date=ui->date->selectedDate().toString("dd/MM/yy");
    qDebug()<<date;

   QString todate = QDate::currentDate().toString("dd/MM/yy");

    db->connectdb();
    QString expdb;
    QSqlQuery query;
    QVariant var(id);
    QString sid = var.toString();
    query.exec("SELECT dailyexpense FROM expense WHERE id='"+sid+"' AND exdate='"+date+"'");
        int track = query.record().indexOf("dailyexpense");
        while (query.next())
        {
            expdb = query.value(track).toString();


        }
        qDebug() << "This is today's expense"<<expdb;
        if(date==todate){ //to check todays date and selected date are same
        if(expdb==NULL){  //to verify the data is not null in today' date

       if(dailyexpense==NULL){//to check user data is empty
        QMessageBox::information(this,"Add","Please add expense to proceed");

    }
    else{ //if user data not empty
    int uid=id;
    qDebug()<<uid;
    int netExpenseInt=dailyexpense.toInt()-exgain.toInt();
    QVariant var(netExpenseInt);
    QString netExpense = var.toString();

    QVariant var1(uid);
    QString u_id = var1.toString();
//    Inserting data to database

       db->connectdb();
//inserting to the database
       try{
       QSqlQuery qry ;
       qry.exec("INSERT INTO expense(id,dailyexpense,exdate) VALUES ('"+u_id+"','"+netExpense+"','"+date+"')");
       QMessageBox::information(this,"Succesful","Expense added for "+date+"!!");

       QString sender=getEmail();
       qDebug()<<"Receiver email"<<sender;
//<<<<------------code to sedn the mail

       smtp = new Smtp("expensemanager.info@gmail.com", "noreply1234", "smtp.gmail.com");
       connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

//       smtp->sendMail("EXPENSE ADDED",sender,
//                      "EXPENSE MANAGER!!","This is from expense manager to notify"
//                                        "that net expense of "+netExpense+" has been added to your expense list !!");

       smtp->sendMail("REGISTERED!!",sender,
                      "EXPENSE MANAGER","This is from expense manager to notify"
                                             "that net expense of "+netExpense+" has been added to your expense list !!");
//sending mail code ends---->>>>>
          this->close();
          rep=new report(this);
          rep->show();
          rep->setId(id);
       }catch(const char *msg){
           throw msg;
       }

    } //user data not empty loop ends
} //data in database not empty loop ends
    else{
        QMessageBox::information(this,"Duplicate","Already added Expense for today");
    }

}//selected dates not equal loop ends
        else{
             QMessageBox::information(this,"Error","You cant add expense for this date");
        }

}





void Expense::on_pushButton_clicked()
{
    this->close();
    rep=new report(this);
    rep->setId(id);
    rep->show();

}
