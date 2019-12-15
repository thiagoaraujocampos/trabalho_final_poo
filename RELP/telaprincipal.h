#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QMainWindow>
#include "republica.h"
#include "integrantes.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TelaPrincipal; }
QT_END_NAMESPACE

class TelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    TelaPrincipal(QWidget *parent = nullptr);
    ~TelaPrincipal();

private slots:
    void on_membros_clicked();

    void on_Rep_clicked();

private:
    Ui::TelaPrincipal *ui;
    integrantes *integ;
    Republica *rep;
};
#endif // TELAPRINCIPAL_H
