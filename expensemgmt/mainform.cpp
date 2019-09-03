#include "mainform.h"
#include "ui_mainform.h"
#include <QDesktopWidget>

MainForm::MainForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
//    this->setWindowTitle(center);
    QRect scr = QApplication::desktop()->screenGeometry();
    move( scr.center() - rect().center() );
}

MainForm::~MainForm()
{
    delete ui;
}

void MainForm::on_loginbtn_clicked()
{
    this->close(); //current clss close
    lg=new login(this);  //login class object
    lg->show();


}

void MainForm::on_signupbtn_clicked()
{
    this->close();
    main=new MainWindow(this); //signup button
    main->show();


}
