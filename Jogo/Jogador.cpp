#include "Jogador.h"

Jogador::Jogador(int selecao) : selecao(selecao) {
  carregaArquivos();
  if(selecao == 1) { this->x = 200; this->y = 0; }
  else if(selecao == 2) { this->x = 800; this->y = 650; }
}

Jogador::~Jogador() {}

bool Jogador::carregaArquivos() {
  if (selecao == 1)
    personagem.loadFromFile("../Imagens/Personagem1/Personagem1.png");
  else if (selecao == 2)
    personagem.loadFromFile("../Imagens/Personagem2/Personagem2.png");

  if (!textura.loadFromImage(personagem))
    return EXIT_FAILURE;

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
      x += 0.2;
      lado_atual = 0;
    } else if (Keyboard::isKeyPressed(Keyboard::A)) {
      x -= 0.2;
      lado_atual = 1;
    } else if (Keyboard::isKeyPressed(Keyboard::W)) {
      y -= 0.2;
      lado_atual = 2;
    } else if (Keyboard::isKeyPressed(Keyboard::S)) {
      y += 0.2;
      lado_atual = 3;
    } else {
      lado_atual = 4;
    }
  } else if (selecao == 2) {
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
      x += 0.2;
      lado_atual = 0;
    } else if (Keyboard::isKeyPressed(Keyboard::Left)) {
      x -= 0.2;
      lado_atual = 1;
    } else if (Keyboard::isKeyPressed(Keyboard::Up)) {
      y -= 0.2;
      lado_atual = 2;
    } else if (Keyboard::isKeyPressed(Keyboard::Down)) {
      y += 0.2;
      lado_atual = 3;
    } else {
      lado_atual = 4;
    }
  }
  sprite.setPosition(x, y);
}

void Jogador::animacaoPersonagem() {
  if (lado_atual != 4)
    rectPersonagem.top = 250 * lado_atual;
  if (clockSprite.getElapsedTime().asSeconds() > 0.1f) {
    if (rectPersonagem.left >= 750 || lado_atual == 4)
      rectPersonagem.left = 0;
    else
      rectPersonagem.left += 250;
    sprite.setTextureRect(rectPersonagem);
    clockSprite.restart();
  }
}

void Jogador::setSelecao(int selecao) { this->selecao = selecao; }

int Jogador::getX() { return x; }

int Jogador::getY() { return y; }

int Jogador::getPontos() { return pontos; }

void Jogador::setPontos(int pontos) { this->pontos = pontos; }

Sprite Jogador::getSprite() { return sprite; }
