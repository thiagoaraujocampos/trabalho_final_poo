#ifndef INTEGRANTES_H
#define INTEGRANTES_H

#include <QDialog>

namespace Ui {
class integrantes;
}

class integrantes : public QDialog
{
    Q_OBJECT

public:
    explicit integrantes(QWidget *parent = nullptr);
    ~integrantes();

private:
    Ui::integrantes *ui;
};

#endif // INTEGRANTES_H
