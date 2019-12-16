#include "BinaryFile.h"

BinaryFile::BinaryFile(string arquivo) : arquivo(arquivo) {

    }
BinaryFile::~BinaryFile(){

    }

void BinaryFile::imprimeOrdenado() {
    vector<Pontos> pont;
    leitura(pont);
    sort(pont.begin(), pont.end(), Pontos::compara);
    for (int i = 0; i < pont.size(); i++) 
        pont[i].imprime();
}

void BinaryFile::grava(int RA, int pontuacao) {
    Pontos* p;
    ofstream ofs(arquivo.c_str(), ios::binary | ios::app);
    p = new Pontos(RA, pontuacao);
    ofs.write(reinterpret_cast<char *> (p), sizeof (Pontos));
    ofs.close();
}

void BinaryFile::leitura(vector<Pontos>& pont) {
    Pontos p;
    ifstream ifs(arquivo.c_str(), ios::binary);
    if (ifs.is_open()) {
        ifs.read(reinterpret_cast<char *> (&p), sizeof (Pontos));
        while (ifs.good()) {
            pont.push_back(p);
            ifs.read(reinterpret_cast<char *> (&p), sizeof (Pontos));
        }
    }

    ifs.close();
}

