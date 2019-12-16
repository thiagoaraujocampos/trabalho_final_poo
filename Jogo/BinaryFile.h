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
    void leitura(vector<Pontos>& pont);
    void imprimeOrdenado();
private:
    string arquivo;
};

#endif /* BINARYFILE_H */
