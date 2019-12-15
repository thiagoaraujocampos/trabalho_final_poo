#include "membros.h"
#include "ui_membros.h"

Membros::Membros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Membros)
{
    ui->setupUi(this);
}

Membros::~Membros()
{
    delete ui;
}
