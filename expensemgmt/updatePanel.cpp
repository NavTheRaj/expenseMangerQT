#include "updatePanel.h"
#include "ui_updatepanel.h"

updatePanel::updatePanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatePanel)
{
    ui->setupUi(this);
}

updatePanel::~updatePanel()
{
    delete ui;
}

void updatePanel::setId(int id){
    this->id=id;
    QVariant var(id);
    uid = var.toString();
}
