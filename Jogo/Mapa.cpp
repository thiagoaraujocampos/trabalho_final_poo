#include "Mapa.h"

Mapa::Mapa() {}

Mapa::~Mapa() {}

void Mapa::carrega() {
  texture.loadFromFile("../Imagens/background.png");
  background.setTexture(texture);
  background.setScale(1.0f, 1.0f);
}

void Mapa::geraMapa(Jogador *jogador1, Jogador *jogador2, RenderWindow *window) {
  window->draw(background);

  Color color(1, 50, 6);
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      quadrado[i][j].setSize(Vector2f(40, 40));
      quadrado[i][j].setPosition(posx, posy);

      if (jogador1->getX() + 25 > posx && jogador1->getX() + 25 <= posx + 40 && jogador1->getY() + 45 > posy && jogador1->getY() + 45 <= posy + 40) {
        matriz[i][j] = 1;
        quadrado[i][j].setFillColor(color);
        jogador1->setPontos(jogador1->getPontos()+1);
      }
      
      if (jogador2->getX() + 25 > posx && jogador2->getX() + 25 <= posx + 40 && jogador2->getY() + 45 > posy && jogador2->getY() + 45 <= posy + 40) {
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
