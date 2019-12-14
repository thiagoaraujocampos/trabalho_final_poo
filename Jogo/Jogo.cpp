#include "Jogo.h"

Jogo::Jogo(int largura, int altura, string titulo) : estado_atual(MENU) {
  window.create(VideoMode(largura, altura), titulo);
  run();
}

Jogo::~Jogo() {}

bool Jogo::muda_estado(int estado) {
  return true;
}

void Jogo::run() {
  if(estado_atual == MENU) {
    Menu menu();
  }
}