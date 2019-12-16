#ifndef INICIO_H
#define INICIO_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Inicio {
public:
  Inicio();
  virtual ~Inicio();
  void carrega();
  void seleciona();
  void eventos(Event event, RenderWindow &window, int *estado_atual, Clock *clockJogo);
  Sprite getBackground();
  RectangleShape getRectangle();

private:
  int selecionado = 0;
  Texture textura;
  Sprite background;
  RectangleShape rectangle;
};

#endif
