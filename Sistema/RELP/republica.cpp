#include "republica.h"
#include "ui_republica.h"

Republica::Republica(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Republica)
{
    ui->setupUi(this);
}

Republica::~Republica()
{
    delete ui;
}
