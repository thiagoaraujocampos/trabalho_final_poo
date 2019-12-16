#include "Jogador.h"

Jogador::Jogador(int selecao) : selecao(selecao) {
  carregaArquivos();
  if(selecao == 1) { this->x = WIDTH-800; this->y = -10; }
  else if(selecao == 2) { this->x = WIDTH-50; this->y = HEIGHT-50; }
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

  bool moveCima = y > -11;
  bool moveBaixo = y < HEIGHT;
  bool moveEsquerda = x > 200;
  bool moveDireita = x < WIDTH;

  if (selecao == 1) {
    if (Keyboard::isKeyPressed(Keyboard::D) && moveDireita) {
      x += 0.5;
      lado_atual = 0;
    } else if (Keyboard::isKeyPressed(Keyboard::A) && moveEsquerda) {
      x -= 0.5;
      lado_atual = 1;
    } else if (Keyboard::isKeyPressed(Keyboard::W) && moveCima) {
      y -= 0.5;
      lado_atual = 2;
    } else if (Keyboard::isKeyPressed(Keyboard::S) && moveBaixo) {
      y += 0.5;
      lado_atual = 3;
    } else {
      lado_atual = 4;
    }
  } else if (selecao == 2) {
    if (Keyboard::isKeyPressed(Keyboard::Right) && moveDireita) {
      x += 0.5;
      lado_atual = 0;
    } else if (Keyboard::isKeyPressed(Keyboard::Left) && moveEsquerda) {
      x -= 0.5;
      lado_atual = 1;
    } else if (Keyboard::isKeyPressed(Keyboard::Up) && moveCima) {
      y -= 0.5;
      lado_atual = 2;
    } else if (Keyboard::isKeyPressed(Keyboard::Down) && moveBaixo) {
      y += 0.5;
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
