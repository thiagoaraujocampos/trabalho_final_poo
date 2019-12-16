#include "SFML/Graphics.hpp"
#include <iostream>
#include "Score.h"

int main(){
    sf::RenderWindow window(sf::VideoMode(1000,800),"SFML WORk!");

    Score menu(window.getSize().x, window.getSize().y);
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case sf::Event::Closed:
                window.close();
                break;
            }
        }
        window.clear();        
        menu.draw(window);
        menu.atualizaText(window);
        window.display();
    }
}