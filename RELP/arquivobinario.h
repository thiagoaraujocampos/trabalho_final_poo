#ifndef ARQUIVOBINARIO_H
#define ARQUIVOBINARIO_H
#include <string>
#include <fstream>

using namespace std;

class ArquivoBinario
{
public:
    ArquivoBinario(string nomeArquivo);
    void inserir();
    void ler();
    void atualizar();
    void excluir();
private:
    string nomeArquivo;

};

#endif // ARQUIVOBINARIO_H
