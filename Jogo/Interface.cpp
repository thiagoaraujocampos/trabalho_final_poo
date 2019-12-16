#include "Interface.h"

Interface::Interface(Clock *clockJogo) {
    this->tempoJogo = clockJogo;
}

Interface::~Interface() {
    
}

void Interface::carrega() {
    interfaceFont.loadFromFile("../Resources/latoRegular.ttf");
    textClock.setFont(interfaceFont);
    textClock.setCharacterSize(20);
    ponto1.setFont(interfaceFont);
    ponto2.setFont(interfaceFont);
    ponto1.setCharacterSize(20);
    ponto2.setCharacterSize(20);
}

void Interface::drawInterface(Jogador *jogador1, Jogador *jogador2, RenderWindow *window) {
    textClock.setString(to_string(tempoJogo->getElapsedTime().asSeconds()).substr(0, 5));
    textClock.setPosition(100-(textClock.getGlobalBounds().width/2), 60);
    ponto1.setPosition(90, 365);
    ponto2.setPosition(95, 600);
    ponto1.setString(to_string(jogador1->getPontos()));
    ponto2.setString(to_string(jogador1->getPontos()));
    window->draw(textClock);
    window->draw(ponto1);
    window->draw(ponto2);
}