#include "Jogo.h"

Jogo::Jogo(int largura, int altura, string titulo) {
  window.create(VideoMode(largura, altura), titulo);
  estado_atual = INICIO;
  inicio = new Inicio();
  jogador1 = new Jogador(1);
  jogador2 = new Jogador(2);
  mapa = new Mapa();
  mapa->carrega();
  interface = new Interface(&clockJogo);
  interface->carrega();
  run();
}

Jogo::~Jogo() {}

void Jogo::run() {
  while (window.isOpen()) {
    eventos();
    update();
    render();
  }
}

void Jogo::eventos() {
  Event event;
  while (window.pollEvent(event)) {
    if (event.type == Event::Closed)
      window.close();
    if (event.type == Event::EventType::KeyPressed) {
      if (event.key.code == Keyboard::Escape) {
        window.close();
      }
      if(estado_atual == INICIO) 
        inicio->eventos(event, window, &estado_atual, &clockJogo);
    }
  }
}

void Jogo::update() {
  if (estado_atual == INICIO) {
    inicio->seleciona();
  } else if (estado_atual == JOGO) {
    jogador1->move();
    jogador2->move();
  } else if (estado_atual == RANKING) {

  }
}

void Jogo::render() {
  window.clear(Color::Black);
  if (estado_atual == INICIO) {
    window.draw(inicio->getBackground());
    window.draw(inicio->getRectangle());
  } else if (estado_atual == JOGO) {

    mapa->geraMapa(jogador1, jogador2, &window);
    interface->drawInterface(jogador1, jogador2, &window);
    jogador1->animacaoPersonagem();
    jogador2->animacaoPersonagem();
    window.draw(jogador1->getSprite());
    window.draw(jogador2->getSprite());
  } else if (estado_atual == RANKING) {

  }
  window.display();
}

int Jogo::getEstado() {
  return estado_atual;
}

void Jogo::setEstado(int estado) {
  estado_atual = estado;
}