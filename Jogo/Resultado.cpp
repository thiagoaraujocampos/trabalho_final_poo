#include "Resultado.h"

Resultado::Resultado() { 
    
 }

Resultado::~Resultado() {}

void Resultado::carrega(int vencedor) {
  this->vencedor = vencedor;
  if(vencedor == 1) {
    textura.loadFromFile("../Imagens/finalP1Win.png");
  } else if(vencedor == 2) {
    textura.loadFromFile("../Imagens/finalP2Win.png");
  } else {
    textura.loadFromFile("../Imagens/empate.png");
  }
  background.setTexture(textura);
}

Sprite Resultado::getBackground() { return background; }