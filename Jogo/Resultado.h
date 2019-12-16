#ifndef RESULTADO_H
#define RESULTADO_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Resultado {
public:
  Resultado();
  virtual ~Resultado();
  void carrega(int vencedor);
  Sprite getBackground();

private:
  int vencedor;
  Texture textura;
  Sprite background;
};

#endif
