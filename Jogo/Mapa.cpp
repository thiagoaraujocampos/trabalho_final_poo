#include "Mapa.h"

Mapa::Mapa() {}

Mapa::~Mapa() {}

void Mapa::geraMapa(Jogador *jogador1, Jogador *jogador2, RenderWindow *window) {
  Color color(1, 50, 6);
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      quadrado[i][j].setSize(Vector2f(40, 40));
      quadrado[i][j].setPosition(posx, posy);
      quadrado[i][j].setOutlineThickness(1);

      if (jogador1->getX() + 20 > posx && jogador1->getX() + 20 < posx + 40 && jogador1->getY() + 20 > posy && jogador1->getY() + 20 < posy + 40) {
        matriz[i][j] = 1;
        quadrado[i][j].setFillColor(color);
        jogador1->setPontos(jogador1->getPontos()+1);
      }
      
      if (jogador2->getX() + 20 > posx && jogador2->getX() + 20 < posx + 40 && jogador2->getY() + 20 > posy && jogador2->getY() + 20 < posy + 40) {
        matriz[i][j] = 2;
        quadrado[i][j].setFillColor(Color::Yellow);
        jogador2->setPontos(jogador2->getPontos()+1);
      }

      if(matriz[i][j] == 1 || matriz[i][j] == 2)
        window->draw(quadrado[i][j]);
      posx += 40;
    }
    posx = 200;
    posy += 40;
  }
  posx = 200;
  posy = 0;
}
