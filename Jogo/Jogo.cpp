#include "Jogo.h"

Jogo::Jogo(int largura, int altura, string titulo) : estado_atual(MENU) {
  window.create(VideoMode(largura, altura), titulo);
  jogador1 = new Jogador(1);
  jogador2 = new Jogador(2);
  mapa = new Mapa();
  mapa->carrega();
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
  window.clear(Color::Black);
  mapa->geraMapa(jogador1, jogador2, &window);
  jogador1->animacaoPersonagem();
  jogador2->animacaoPersonagem();
  window.draw(jogador1->getSprite());
  window.draw(jogador2->getSprite());
  window.display();
}