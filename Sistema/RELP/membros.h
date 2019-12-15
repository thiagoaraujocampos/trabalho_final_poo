#ifndef MEMBROS_H
#define MEMBROS_H

#include <QDialog>

namespace Ui {
class Membros;
}

class Membros : public QDialog
{
    Q_OBJECT

public:
    explicit Membros(QWidget *parent = nullptr);
    ~Membros();

private:
    Ui::Membros *ui;
};

#endif // MEMBROS_H
