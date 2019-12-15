#ifndef JOGADOR_H
#define JOGADOR_H

#include "Define.h"

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

class Jogador {
public:
  Jogador(int selecao);
  virtual ~Jogador();
  bool carregaArquivos();
  void move();
  CircleShape getCirculo();
  void animacaoPersonagem();
  void setSelecao(int selecao);
  int getX();
  int getY();
  int getPontos();
  void setPontos(int pontos);
  Sprite getSprite();

private:
  float x, y;
  int selecao;
  int pontos = 0;
  int personagens;
  int lado_atual = 0;
  Image personagem;
  Texture textura;
  IntRect rectPersonagem;
  Sprite sprite;
  Clock clockSprite;
};

#endif
