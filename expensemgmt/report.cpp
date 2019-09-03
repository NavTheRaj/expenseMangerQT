#include "report.h"
#include "ui_report.h"
#include <QTextStream>
#include "admin.h"
#include <QtCharts/QPieSeries>
#include <QPen>
#include <QBrush>
#include <QPainter>
#include <QtWidgets>
#include <QDateTime>
#include <QException>
#include <QGraphicsScene>
#include <QPdfWriter>
#include <QPrinter>
#include "mainform.h"
#include "login.h"
QT_CHARTS_USE_NAMESPACE

report::report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::report)
{
    ui->setupUi(this);
    ui->warn->hide();
    ui->safe->hide();


}

report::~report()
{
    delete ui;
}

void report::on_closebtn_clicked()
{
    this->close();
    mf=new MainForm(this);
    mf->show();
}

void report::setId(int id){
    this->id=id;

}

void report::setName(QString name){
    this->Username=name;
    qDebug()<<Username;
}

QString report::getName(){
    QString name;
    QSqlQuery qry;
    QVariant var1(id);
    u_id = var1.toString();
    qDebug()<<u_id;
    qry.exec("SELECT name FROM reg_user WHERE id='"+u_id+"' ");
    int track = qry.record().indexOf("name");

     while (qry.next())
     {

        name= qry.value(track).toString();


     }
    return name;

//lg=new login(this);
//name=lg->printName();
//return name;

}

QString report::getDate(){
    QDate date = QDate::currentDate();
    QString dateString = date.toString();
    return dateString;
}


double report::getTarget(){
    double target;
    QSqlQuery qry;
    QVariant var1(id);
    u_id = var1.toString();
    qDebug()<<u_id;
    qry.exec("SELECT target FROM expense WHERE id='"+u_id+"' ");
    int track = qry.record().indexOf("target");

     while (qry.next())
     {

        QString tar= qry.value(track).toString();
        target=tar.toDouble();

     }
    return target;
}

//report:: report( const report &obj){
//    qDebug()<<"Copy constructor allocating ptr.";

//       *ptr = *obj.ptr; // copy the value
//}

void report::on_pushButton_clicked()
{
   db->connectdb();

   //query for retrieving the average expense till today from the database
   QSqlQuery qry;
//   QSqlRecord *record=new record();
   QVariant var1(id);
   u_id = var1.toString();
   qDebug()<<u_id;


   qry.exec("SELECT avg(dailyexpense) FROM expense WHERE id='"+u_id+"' ");
   int avg1 = qry.record().indexOf("avg(dailyexpense)");
     qDebug()<<"this is index of mincome"<<avg1;
    while (qry.next())
    {

       avg = qry.value(avg1).toString();

       average=avg.toDouble();
    }


    //for name

    qry.exec("SELECT name FROM expense WHERE id='"+u_id+"' ");
    int nameid = qry.record().indexOf("name");
      qDebug()<<"this is index of name"<<nameid;
     while (qry.next())
     {

        user = qry.value(nameid).toString();


     }


   qDebug()<<"Average expense is:"<<average;


   //query for retrieving the monthly income of the user
   QSqlQuery qry2;

   int mincome;

   qry2.exec("SELECT mincome FROM reg_user WHERE id='"+u_id+"'");
   mincome=qry2.record().indexOf("mincome");
   qDebug()<<"this is index of mincome"<<mincome;
   while(qry2.next()){
      result=qry2.value("mincome").toString();
      final=result.toInt();

   }

   qDebug()<<"This is income"<<final;




//calculating the rates
   roe=(average/final)*30*100;
   ros=1-roe;
   es=ros*final;
   ee=roe*final;
   qDebug()<<"This is es"<<es;


   //Changing them to string for pdf
   QVariant var2(ee);
   eexp=var2.toString();
   eexpint=var2.toInt();

   QVariant var3(es);
   esave=var3.toString();
   esaveint=var3.toInt();

   QVariant var4(roe);
   ratexp=var4.toString();

   QVariant var5(ros);
   ratesave=var5.toString();




//setting the values to the form
  ui->mincome->setNum(final);
   ui->roe->setNum(roe);
   ui->ros->setNum(ros);
   ui->es->setNum(esaveint);
   ui->ee->setNum(eexpint);

  // ui->mincome->setText(mincome->locale().toString(final,'f'));
   //ui ->mincome->setText(QString::number(final, 'f'));



   //Making pie charts
       series=new QPieSeries();
        series->append("Expense",ee);
        series->append("Savings",es);

        slice0=series->slices().at(0);
//        slice0->setLabel("Expense");
        slice0->setExploded();
//        slice0->setLabelVisible();
        slice0->setPen(QPen(Qt::darkRed,2));
        slice0->setBrush(Qt::red);

        slice1=series->slices().at(1);
//        slice1->setLabel("Savings");
        slice1->setExploded();
//        slice1->setLabelVisible();
        slice1->setPen(QPen(Qt::darkGreen,2));
        slice1->setBrush(Qt::green);

//        ui->pieView->setAutoFillBackground(series);

        //Adding the values to the charts
        chart=new QChart();
        chart->addSeries(series);
        chart->setTitle("Estimation");
        chart->legend()->show();
//        chart->graphicsEffect();

//        series->setLabelsVisible();
//        series->setLabelsPosition(QPieSlice::LabelInsideHorizontal);

//        for(auto slice : series->slices())
//            slice->setLabel(QString(slice).arg(100*slice->percentage(), 0, 'f', 1));

//Creating the chartView fordisplaying the chart
        chartView=new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
//Now finally adding the chartView to our User interface Vertical layout called pieView
         ui->pieView->addWidget(chartView);



         //warning icon show

         if(getTarget() < es){
             ui->warn->hide();
             ui->safe->show();
         }
      else  {
             QMessageBox::information(this,"Target compromised","Cut your expense to achieve your target!!");
                ui->warn->show();
                ui->safe->hide();
}


}

void report::on_pushButton_2_clicked()
{
    this->close();
    ad=new admin(this);
    ad->setId(id);
    ad->show();
}


//function to print the pdf files






void report::on_getPdf_clicked()
{
    int val=printPdf();
    if(val==1)
        done(Accepted);
      qDebug()<<"PDF EXPORTED";

      this->show();

}

int report::printPdf(){


    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);



    //setting file name


            printer.setOutputFileName(fileName);


    QTextDocument doc;

    QString name=getName();
    qDebug()<<"This is name"<<name;

    doc.setHtml("<center><h3>EXPENSE MANAGER!!</h3><br><p>Report generated at "+getDate()+"<br></p></center><p>Hello " +getName()+"!! Here's Your Updated report</p><br><p>Monthly income: "+result+"</p><br>"
                 "<p>Average expenses Till today: "+avg+"</p><br>"
//                "<p>Monthly Income:"+result+"</p><br>"
                  "<p>Estimated Savings:"+esave+"</p><br>"
                  "<p>Estimated Expense:"+eexp+"</p><br>"
                 "<p>Rate of Savings:"+ratesave+"</p><br>"
                 "<p>Rate of Expense:"+ratexp+"</p><br>"
                "<p>Regards,</p>"
                "<p>Expense Manager Team!!</p>");
    //doc.setPlainText(u_id);
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    //doc.setHtml("<center>chartView->render(&painter)</center>");
    doc.print(&printer);

   //for charts printing
//    QPdfWriter writer("expensereport.pdf");

//        writer.setPageSize(QPagedPaintDevice::A4);




    qDebug()<<"PDF EXPORTED";
    //disconnect(ui->getPdf, SIGNAL(accepted()), this, SLOT(accept()));
     return 1;

}


