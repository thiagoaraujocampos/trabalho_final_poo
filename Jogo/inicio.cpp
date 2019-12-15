#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main(){

    sf::RenderWindow window(sf::VideoMode(1000, 800), "ChernoColor");
    sf::Font font;
    
    if (!font.loadFromFile("../Resources/fonte.otf")){
        //erro
    }

    sf::Text text;
    text.setFont(font); 

    text.setString("ranking");
    text.setCharacterSize(70); // in pixels, not points!

    text.setFillColor(sf::Color::White);

     while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(text);
        window.display();
    }

    return 0;
}