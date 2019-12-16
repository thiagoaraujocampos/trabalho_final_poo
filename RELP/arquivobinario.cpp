#include "arquivobinario.h"

ArquivoBinario::ArquivoBinario(string nomeArquivo) : nomeArquivo(nomeArquivo){

}

void ArquivoBinario::grava(){
    ofstream ofs(nomeArquivo.c_str(),ios::binary);
}
