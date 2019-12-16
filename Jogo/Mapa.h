#ifndef MAPA_H
#define MAPA_H

#include "Define.h"
#include "Jogador.h"

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

class Mapa {
public:
  Mapa();
  virtual ~Mapa();
  void carrega();
  void geraMapa(Jogador *jogador1, Jogador *jogador2, RenderWindow *window);

private: 
  RectangleShape quadrado[20][20];
  int matriz[20][20];
  int posx = 200, posy = 0;
  Texture texture;
  Sprite background;
};

#endif
