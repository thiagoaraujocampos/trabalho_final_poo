#ifndef PONTOS_H
#define PONTOS_H

#include <iostream>
using namespace std;

class Pontos {
public:
    Pontos();
    Pontos(int RA, int pontuacao);
    virtual ~Pontos();
    void imprime();
    int getPont();
    int getRA();
    static bool compara(Pontos p1, Pontos Pontos2);
private:
    int RA;
    int pontuacao;
};

#endif /* ALUNO_H */
