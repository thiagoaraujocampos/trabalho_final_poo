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
        if (estado_atual == RANKING || estado_atual == JOGO) {
          estado_atual = INICIO;
        } else if (estado_atual == RESULTADO) {
            estado_atual = RANKING;
        } else {
          window.close();
        }
      }
      if (estado_atual == INICIO)
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

int Jogo::getEstado() { return estado_atual; }

void Jogo::setEstado(int estado) { estado_atual = estado; }

void Jogo::temporizador() {
  if (clockJogo.getElapsedTime().asSeconds() > 45.0f && estado_atual == JOGO) {
    if (jogador1->getPontos() > jogador2->getPontos()) {
      resultado->carrega(1);
      BinaryFile bf("info.dat");
      bf.grava(1111, jogador1->getPontos());
    } else if (jogador1->getPontos() < jogador2->getPontos()) {
      resultado->carrega(2);
      BinaryFile bf("info.dat");
      bf.grava(1111, jogador2->getPontos());
    } else {
      resultado->carrega(0);
    }
    restartAll();
    estado_atual = RESULTADO;
  }
}

void Jogo::restartAll() {
  jogador1->setPontos(0);
  jogador1->setX(WIDTH-800);
  jogador1->setY(-10);
  jogador2->setPontos(0);
  jogador2->setX(WIDTH - 50);
  jogador2->setY(HEIGHT - 50);
  mapa->carrega();
}