
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "BinaryFile.h"

using namespace std;
using namespace sf;

int main()
{
    BinaryFile bf("info.dat");
    vector<Pontos> jesus;

    bf.leitura(jesus);



    RenderWindow window(VideoMode(1000, 800), "Ranking");
    Font font;

    font.loadFromFile("../Resources/fonte.otf");
    
    Text text;
    text.setOrigin(Vector2f(-250, -10));
    text.setFont(font);
    text.setString("RANKING");
    text.setCharacterSize (120);
    text.setColor(Color::Green);
    
    Font fonte; 

    if (!fonte.loadFromFile("../Resources/latoBlack.ttf")){
       //erro
    }

    Text nome;
    nome.setPosition(100,200);
    nome.setFont(fonte);
    nome.setString("Nome");
    nome.setCharacterSize(50);
    nome.setColor(Color::Green);

    Text pontos;
    pontos.setPosition(700, 200);
    pontos.setFont(fonte);
    pontos.setCharacterSize(50);
    pontos.setString("Pontos");
    pontos.setColor(Color::Green);

    Text nomeJogador;
    nomeJogador.setPosition(100,300);
    nomeJogador.setFont(fonte);
    nomeJogador.setString("Nomnome");
    nomeJogador.setCharacterSize(30);
    nomeJogador.setColor(Color::Yellow);

    Text pontosJogador;
    pontosJogador.setPosition(700, 300);
    pontosJogador.setFont(fonte);
    pontosJogador.setCharacterSize(30);
    pontosJogador.setString("Pontos");
    pontosJogador.setColor(Color::Yellow);

    int y = 300;

    while (window.isOpen()) {
        Event event;

    while (window.pollEvent(event)) {
      if (event.type == Event::Closed)
        window.close();
      if (event.type == Event::EventType::KeyPressed) {
        if (event.key.code == Keyboard::Escape) {
          window.close();
        }
      }
    }

    window.clear();

    for(int i = 0; i < jesus.size() && i < 10; i++) {
      nomeJogador.setString(to_string(jesus[i].getRA()));
      nomeJogador.setPosition(100,y);
      pontosJogador.setString(to_string(jesus[i].getPont()));
      pontosJogador.setPosition(700,y);
      window.draw(nomeJogador);
      window.draw(pontosJogador);
      y += 40;
    }
    y = 300;

    window.draw(text);
    window.draw(nome);
    window.draw(pontos);
    window.display();
}
}