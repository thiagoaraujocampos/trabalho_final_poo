#include "Jogador.h"

Jogador::Jogador(int selecao) : selecao(selecao), circulo(20) {
  carregaArquivos();
  if (selecao == 1) {
    circulo.setFillColor(Color::Green);
    this->x = 0;
    this->y = 0;
  } else if (selecao == 2) {
    circulo.setFillColor(Color::Red);
    this->x = WIDTH - 100;
    this->y = HEIGHT - 225;
  }
}

Jogador::~Jogador() {}

bool Jogador::carregaArquivos() {
  if (selecao == 1)
    personagem.loadFromFile("../Imagens/Personagem1/Personagem1.png");
  // else if(selecao == 2)
  // personagem.loadFromFile("Personagem2.png");

  if (!textura.loadFromImage(personagem))
    return EXIT_FAILURE;
  //circulo.setTexture(&textura);
  rectPersonagem.top = 0;
  rectPersonagem.left = 0;
  rectPersonagem.width = 250;
  rectPersonagem.height = 250;
  sprite.setTexture(textura);
  sprite.setTextureRect(rectPersonagem);
  sprite.setScale(0.2f, 0.2f);
  return true;
}

void Jogador::move() {

  if (selecao == 1) {
    if (Keyboard::isKeyPressed(Keyboard::D)) {
      x += 1;
    } else if (Keyboard::isKeyPressed(Keyboard::A)) {
      x -= 1;
    } else if (Keyboard::isKeyPressed(Keyboard::W)) {
      y -= 1;
    } else if (Keyboard::isKeyPressed(Keyboard::S)) {
      y += 1;
    } else {
      lado_atual = 4;
    }
  } else if (selecao == 2) {
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
      x += 1;
    } else if (Keyboard::isKeyPressed(Keyboard::Left)) {
      x -= 1;
    } else if (Keyboard::isKeyPressed(Keyboard::Up)) {
      y -= 1;
    } else if (Keyboard::isKeyPressed(Keyboard::Down)) {
      y += 1;
    } else {
      lado_atual = 4;
    }
  }

  circulo.setPosition(x, y);
  sprite.setPosition(x, y);
}

void Jogador::animacaoPersonagem() {}

CircleShape Jogador::getCirculo() { return circulo; }

void Jogador::setSelecao(int selecao) { this->selecao = selecao; }

int Jogador::getX() { return x; }

int Jogador::getY() { return y; }

int Jogador::getPontos() { return pontos; }

void Jogador::setPontos(int pontos) { this->pontos = pontos; }

Sprite Jogador::getSprite() { return sprite; }
