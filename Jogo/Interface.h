#ifndef INTERFACE_H
#define INTERFACE_H

#include "Define.h"
#include "Jogador.h"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Jogo;

class Interface {
public:
  Interface(Clock *clockJogo);
  virtual ~Interface();
  void carrega();
  void drawInterface(Jogador *jogador1, Jogador *jogador2, RenderWindow *window);

private:
  Font interfaceFont;
  Text textClock;
  Text ponto1;
  Text ponto2;
  Clock* tempoJogo;
};

#endif
