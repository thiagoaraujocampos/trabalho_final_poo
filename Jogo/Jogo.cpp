#include "Jogo.h"

Jogo::Jogo(int largura, int altura, string titulo) : estado_atual(MENU) {
  window.create(VideoMode(largura, altura), titulo);
  jogador1 = new Jogador(1);
  jogador2 = new Jogador(2);
  mapa = new Mapa();
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
    }
  }
}

void Jogo::update() {
  jogador1->move();
  jogador2->move();
}

void Jogo::render() {
  window.clear();
  mapa->geraMapa(jogador1, jogador2, &window);
  window.draw(jogador1->getCirculo());
  window.draw(jogador2->getCirculo());
  //window.draw(jogador1->getSprite());
  window.display();
}