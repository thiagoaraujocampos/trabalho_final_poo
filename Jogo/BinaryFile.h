#ifndef BINARYFILE_H
#define BINARYFILE_H

#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include "Pontos.h"
using namespace std;

class BinaryFile {
public:
    BinaryFile(string arquivo);
    virtual ~BinaryFile();
    void grava(int RA, int pontuacao);
    void leitura();
    void imprimeOrdenado();
private:
    string arquivo;
    void leitura(vector<Pontos>&);
};

#endif /* BINARYFILE_H */
