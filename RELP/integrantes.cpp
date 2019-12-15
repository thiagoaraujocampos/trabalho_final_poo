#include "integrantes.h"
#include "ui_integrantes.h"

integrantes::integrantes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::integrantes)
{
    ui->setupUi(this);
}

integrantes::~integrantes()
{
    delete ui;
}
