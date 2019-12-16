#include "Jogo.h"

Jogo::Jogo(int largura, int altura, string titulo) {
  window.create(VideoMode(largura, altura), titulo);
  estado_atual = INICIO;

  inicio = new Inicio();
  ranking = new Score(WIDTH, HEIGHT);
  resultado = new Resultado();
  jogador1 = new Jogador(1);
  jogador2 = new Jogador(2);
  mapa = new Mapa();
  interface = new Interface(&clockJogo);

  mapa->carrega();
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
        if(estado_atual == 3 || estado_atual == 2) estado_atual = 1;
        else window.close();
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
    temporizador();
  } else if (estado_atual == RESULTADO) {

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
    ranking->draw(window);
    ranking->atualizaText(window);
  } else if (estado_atual == RESULTADO) {
    window.draw(resultado->getBackground());
  }
  window.display();
}

int Jogo::getEstado() {
  return estado_atual;
}

void Jogo::setEstado(int estado) {
  estado_atual = estado;
}

void Jogo::temporizador() {
  if (clockJogo.getElapsedTime().asSeconds() > 5.0f && estado_atual == JOGO) {
    if(jogador1->getPontos() > jogador2->getPontos()){
      resultado->carrega(1);
    } if(jogador1->getPontos() < jogador2->getPontos()) {
      resultado->carrega(2);
    } else {
      resultado->carrega(0);
    }
    estado_atual = RESULTADO;
  }
}