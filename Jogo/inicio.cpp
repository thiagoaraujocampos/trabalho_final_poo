#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main(){

    sf::RenderWindow window(sf::VideoMode(1000, 800), "ChernoColor");
    sf::Font font;
    
    if (!font.loadFromFile("../Resources/fonte.otf")){
        //erro
    }

    Texture background;
    if (!background.loadFromFile("../Imagens/menu.png")){
        //erro
    }

    Sprite fundo(background);


    //---------------------------------------------------------------------------- titulo

    Text text;
    text.setFont(font); 
    Color color(0,153,0);

    text.setFillColor(color);
    text.setString("Chernocolor");
    text.setCharacterSize(70); // fonte e tamanho da fonte

    text.setOutlineColor(Color::White); //cor da borda e tamanho
    text.setOutlineThickness(3);

    text.setOrigin(Vector2f(-250,-30)); //coloca o titulo no centro

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(Color::Black);
        window.draw(fundo);
        window.draw(text);
        window.display();
    }

    return 0;
}