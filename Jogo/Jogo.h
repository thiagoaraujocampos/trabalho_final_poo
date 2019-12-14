#ifndef JOGO_H
#define JOGO_H

#include "Menu.h"

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

class Jogo {
public:
  Jogo(int largura, int altura, string titulo);
  virtual ~Jogo();
  bool muda_estado(int estado);
  void run();

  static const int MENU = 1;
  static const int JOGO = 2;
  static const int RANKING = 3;

private:
  int estado_atual;
  RenderWindow window;
};

#endif
