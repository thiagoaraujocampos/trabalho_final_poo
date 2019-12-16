#include "Inicio.h"

class Jogo;

Inicio::Inicio() { carrega(); }

Inicio::~Inicio() {}

void Inicio::carrega() {
  textura.loadFromFile("../Imagens/inicio.png");
  background.setTexture(textura);
  rectangle.setSize(Vector2f(350, 90));
  rectangle.setFillColor(Color::Transparent);
  rectangle.setOutlineColor(Color::Yellow);
  rectangle.setOutlineThickness(1.5f);
  rectangle.setPosition(Vector2f(15, 530));
}

void Inicio::seleciona() {
  if (selecionado == 0) { // START GAME
    rectangle.setPosition(Vector2f(15, 530));
    rectangle.setSize(Vector2f(350, 90));
  } else if (selecionado == 1) { // SCORE
    rectangle.setSize(Vector2f(160, 65));
    rectangle.setPosition(Vector2f(15, 625));
  } else if (selecionado == 2) { // EXIT
    rectangle.setSize(Vector2f(120, 65));
    rectangle.setPosition(Vector2f(15, 705));
  } else if (selecionado == 3) { // volta pro START
    selecionado = 0;
  }
}

void Inicio::eventos(Event event, RenderWindow &window, int *estado_atual, Clock *clockJogo) {
  if (event.key.code == Keyboard::Down) {
    selecionado++;
  }
  if (event.key.code == Keyboard::Up) {
    if (selecionado != 0) {
      selecionado--;
    } else {
      selecionado = 2;
    }
  }
  if (event.key.code == Keyboard::Enter) {
    if (selecionado == 0) {
      *estado_atual = 2;
      clockJogo->restart();
    } else if (selecionado == 2) {
      *estado_atual = 3;
    } else {
      window.close();
    }
  }
}

Sprite Inicio::getBackground() { return background; }

RectangleShape Inicio::getRectangle() { return rectangle; }