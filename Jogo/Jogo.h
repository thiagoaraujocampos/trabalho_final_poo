#ifndef JOGO_H
#define JOGO_H

#include "Jogador.h"
#include "Mapa.h"
#include "Interface.h"
#include "Inicio.h"
#include "Score.h"
#include "Resultado.h"

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
  void run();
  void temporizador();
  void restartAll();

  int getEstado();
  void setEstado(int estado);

  static const int INICIO = 1;
  static const int JOGO = 2;
  static const int RANKING = 3;
  static const int RESULTADO = 4;

private:
  int estado_atual;                                                                    
  RenderWindow window;
  Jogador *jogador1;
  Jogador *jogador2;
  Mapa *mapa;
  Interface *interface;
  Inicio *inicio;
  Score *ranking;
  Resultado *resultado;
  Clock clockJogo;
  void eventos();
  void update();
  void render();
};

#endif
