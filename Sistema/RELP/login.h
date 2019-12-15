#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "telaprincipal.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btnLogar_clicked();

private:
    Ui::Login *ui;
    TelaPrincipal* tela;
};

#endif // LOGIN_H
