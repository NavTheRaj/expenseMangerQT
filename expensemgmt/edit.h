//update header files
#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include "dbconnect.h"
#include <QDebug>

namespace Ui {  //template for qt for the form generations
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = 0);
    void setId(int);
    QString getName();
    ~edit();

private slots:
    void on_pushButton_clicked();

    void on_updatebtn_clicked();

    void on_clsbtn_clicked();

private:
    QString uid;
    int id;
    Ui::edit *ui;
    dbconnect *db;
};

#endif // EDIT_H
