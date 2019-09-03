#include "edit.h"
#include "ui_edit.h"
#include "mainform.h"
#include <QDebug>


edit::edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
    QString name=getName();
    qDebug()<<name;
}

edit::~edit()
{
    delete ui;
}

void edit::setId(int id){
    this->id=id;
    qDebug()<<"this is id"<<id;
    QVariant var(id);
    uid = var.toString();
    qDebug()<<"This is id"<<uid;

}


QString edit::getName(){
    QString name;
    QSqlQuery qry;
    QVariant var1(id);
    QString u_id = var1.toString();
    qDebug()<<u_id;
    qry.exec("SELECT name FROM expense WHERE id='"+u_id+"' ");
    int track = qry.record().indexOf("name");

     while (qry.next())
     {

        name= qry.value(track).toString();


     }
    return name;
}

void edit::on_pushButton_clicked()
{
    db->close();
    db->connectdb();
    //for main information
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery();
    query->prepare("SELECT * FROM reg_user WHERE id='"+uid+"'");
    query->exec();
    qDebug()<<uid;
    model->setQuery(*query);
    ui->myView->setModel(model);
    qDebug()<<(model->rowCount());
    db->close();
}

void edit::on_updatebtn_clicked()
{
    QString name,password,mincome,email,target;

    name=ui->name->text();
    password=ui->password->text();
    mincome=ui->mincome->text();
    email=ui->emailupdate->text();
    target=ui->target->text();
    qDebug()<<email;

    if(name!=NULL && password!=NULL && mincome!=NULL && email!=NULL){
try
    {
      db->connectdb();
      QSqlQuery qry ;

      if(qry.exec("UPDATE reg_user set name='"+name+"',password='"+password+"',mincome='"+mincome+"',email='"+email+"',target='"+target+"' WHERE id='"+uid+"'")){

      QMessageBox::information(this,"Successful","Successfully updated your account");
      ui->myView->show();
       }

      else{
      QMessageBox::information(this,"Error","Unsuccessful operation");
    }

    } catch (const char* msg){
        throw msg;
    }
    }
    else{
        QMessageBox::information(this,"Empty Value","Please fill up to update your data");
    }

}

void edit::on_clsbtn_clicked()
{
    this->close();
    MainForm *main=new MainForm(this);
    main->show();
}
