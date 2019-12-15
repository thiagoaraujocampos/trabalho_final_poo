#ifndef REPUBLICA_H
#define REPUBLICA_H

#include <QDialog>

namespace Ui {
class Republica;
}

class Republica : public QDialog
{
    Q_OBJECT

public:
    explicit Republica(QWidget *parent = nullptr);
    ~Republica();

private:
    Ui::Republica *ui;
};

#endif // REPUBLICA_H
