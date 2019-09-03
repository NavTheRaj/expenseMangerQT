#ifndef UPDATEPANEL_H
#define UPDATEPANEL_H

#include <QDialog>
#include "dbconnect.h"



namespace Ui {
class updatePanel;
}

class updatePanel : public QDialog
{
    Q_OBJECT

public:
    explicit updatePanel(QWidget *parent = 0);
    void setId(int){
    ~updatePanel();

private:
    Ui::updatePanel *ui;
    dbconnect *db;

};

#endif // UPDATEPANEL_H
