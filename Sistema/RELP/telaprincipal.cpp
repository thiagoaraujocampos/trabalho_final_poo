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


void TelaPrincipal::on_republica_clicked()
{
    rep = new Republica();
    rep->show();
    this->close();
}

void TelaPrincipal::on_membros_clicked()
{
    memb = new Membros();
    memb->show();
    this->close();
}
