#include "telaprincipal.h"
#include "ui_telaprincipal.h"

TelaPrincipal::TelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}


void TelaPrincipal::on_membros_clicked()
{
    integ = new integrantes();
    integ->show();
    this->close();
}

void TelaPrincipal::on_Rep_clicked()
{
    rep = new Republica();
    rep->show();
    this->close();
}
