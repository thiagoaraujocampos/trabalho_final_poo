#include "Pontos.h"

Pontos::Pontos() {
}

Pontos::Pontos(int RA, int pontuacao) :
RA(RA), pontuacao(pontuacao) {
}

Pontos::~Pontos() {
}

int Pontos::getRA(){
    return RA;
}

int Pontos::getPont() {
    return pontuacao;
}


bool Pontos::compara(Pontos p1, Pontos p2) {
    return p2.getPont() < p1.getPont();
}

void Pontos:: imprime(){
    cout << RA << endl;
    cout << pontuacao << endl;
}