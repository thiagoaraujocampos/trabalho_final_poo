#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H
#include "republica.h"
#include "membros.h"
#include <QMainWindow>

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
    void on_republica_clicked();

    void on_membros_clicked();

private:
    Ui::TelaPrincipal *ui;
    Republica *rep;
    Membros *memb;
};
#endif // TELAPRINCIPAL_H
