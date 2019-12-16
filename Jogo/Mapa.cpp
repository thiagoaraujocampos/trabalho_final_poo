#include "Mapa.h"

Mapa::Mapa() {}

Mapa::~Mapa() {}

void Mapa::carrega() {
  texture.loadFromFile("../Imagens/background.png");
  background.setTexture(texture);
  background.setScale(1.0f, 1.0f);
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      matriz[i][j] = 0;
    }
  }
}

void Mapa::geraMapa(Jogador *jogador1, Jogador *jogador2, RenderWindow *window) {
  window->draw(background);

  Color color1(255, 0, 255, 200);
  Color color2(255, 255, 0, 200);
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      quadrado[i][j].setSize(Vector2f(40, 40));
      quadrado[i][j].setPosition(posx, posy);
      if (matriz[i][j] != 1 && matriz[i][j] != 2) quadrado[i][j].setFillColor(Color::Transparent);

      if (jogador1->getX() + 25 > posx && jogador1->getX() + 25 <= posx + 40 && jogador1->getY() + 45 > posy && jogador1->getY() + 45 <= posy + 40) {
        if (matriz[i][j] != 1) jogador1->setPontos(jogador1->getPontos()+1);
        if (matriz[i][j] == 2) jogador2->setPontos(jogador2->getPontos()-1);
        matriz[i][j] = 1;
        quadrado[i][j].setFillColor(color1);
      }
      
      if (jogador2->getX() + 25 > posx && jogador2->getX() + 25 <= posx + 40 && jogador2->getY() + 45 > posy && jogador2->getY() + 45 <= posy + 40) {
        if (matriz[i][j] != 2) jogador2->setPontos(jogador2->getPontos()+1);
        if (matriz[i][j] == 1) jogador1->setPontos(jogador1->getPontos()-1);
        matriz[i][j] = 2;
        quadrado[i][j].setFillColor(color2);
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
