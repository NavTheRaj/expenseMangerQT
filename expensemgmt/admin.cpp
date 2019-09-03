#include "admin.h"
#include "ui_admin.h"
#include "dbconnect.h"
//#include"update.h"
#include "edit.h"
#include "mainform.h"



admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_2_clicked()
{
    this->close();
    mf=new MainForm(this);
    mf->show();

}

void admin::setId(int id){
    this->id=id;
    QVariant var(id);
    uid = var.toString();
}

void admin::on_pushButton_clicked()
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
    //for daily information
    QSqlQueryModel *model1=new QSqlQueryModel();
    QSqlQuery *query1=new QSqlQuery();
    query1->prepare("SELECT * FROM expense WHERE id='"+uid+"'");
    query1->exec();
    model1->setQuery(*query1);
    ui->dailyInfo->setModel(model1);
    qDebug()<<(model1->rowCount());
    db->close();

}

void admin::on_pushButton_3_clicked()
{
    this->close();
    ed=new edit(this);
    ed->setId(id);
    ed->show();





}
