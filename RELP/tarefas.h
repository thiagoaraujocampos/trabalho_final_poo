#ifndef TAREFAS_H
#define TAREFAS_H
#include <string>

using namespace std;

class tarefas
{
public:
    tarefas();
    int getTipo(){
        return this->tipo;
    }

    void setTipo(int tipo){
        this->tipo = tipo;
    }

    string getDiaSemana(){
        return this->diaSemana;
    }

    void setDiaSemana(){
        this->diaSemana = diaSemana;
    }
private:
    int tipo;
    string diaSemana;
};

#endif // TAREFAS_H
