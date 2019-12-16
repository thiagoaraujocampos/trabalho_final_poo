
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1000, 800), "Ranking");
    Font font;

    if (!font.loadFromFile("../Resources/fonte.otf")){
       //erro
    }
    
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
    window.draw(text);
    window.draw(nome);
    window.draw(pontos);
    window.display();
    


}
}