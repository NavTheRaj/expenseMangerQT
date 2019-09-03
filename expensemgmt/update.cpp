#include "update.h"
#include "ui_update.h"

update::update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update)
{
    ui->setupUi(this);
//    ui->name->setText(namedb);
}

update::~update()
{
    delete ui;
}

void update::setId(int id){
    this->id=id;
    QVariant var(id);
    uid = var.toString();
}

void update::on_pushButton_clicked()
{
    this->close();
}

void update::on_pushButton_2_clicked()
{
//    ad=new admin(this);
//    ad->show();
}

void update::on_pushButton_4_clicked()
{
    db->connectdb();
    //for main information
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery();
    query->prepare("SELECT * FROM reg_user WHERE id='"+uid+"'");
    query->exec();
    qDebug()<<uid;
    model->setQuery(*query);
    ui->mainInfo->setModel(model);
    qDebug()<<(model->rowCount());
    db->close();
}

void update::on_pushButton_3_clicked()
{
    QString name,password,mincome;

    name=ui->name->text();
    password=ui->password->text();
    mincome=ui->mincome->text();
try
    {
      db->connectdb();
      QSqlQuery qry ;

      if(qry.exec("UPDATE reg_user set name='"+name+"',set password='"+password+"',set mincome='"+mincome+"') WHERE id='"+uid+"'")){

      QMessageBox::information(this,"Successful","Successfully updated your account");
      ui->mainInfo->show();
       }

      else{
      QMessageBox::information(this,"Not Connected","Database not connected");
    }

    } catch (const char* msg){
        throw msg;
    }

}
