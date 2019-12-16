#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;
using namespace sf;

int main(){

    sf::RenderWindow window(sf::VideoMode(1000, 800), "ChernoColor");
  
    Texture background;
    if (!background.loadFromFile("../Imagens/inicio.png")){
        //erro
    }

    Sprite fundo(background); //FUNDO

    int cont=0; 

    RectangleShape rectangle(sf::Vector2f(350, 90));
    rectangle.setFillColor(Color::Transparent);
    rectangle.setOutlineColor(Color::Yellow);
    rectangle.setOutlineThickness(1.5f);
    rectangle.setPosition(Vector2f(15,530)); //seleciona START GAME

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == Event::EventType::KeyPressed) {
                if(event.key.code == Keyboard::Down) {
                    cont++;
                }
                if(event.key.code == Keyboard::Up){
                    if(cont!=0){
                        cont--;
                    }else{  //VOLTA PRO EXIT
                        cont=2;
                    }
                }
            }
        }


        if(cont==0){                                            //START GAME
            rectangle.setPosition(Vector2f(15,530));
            rectangle.setSize(Vector2f(350, 90));
        }
        else if(cont==1){                                       //SCORE      
            rectangle.setSize(Vector2f(160,65));
            rectangle.setPosition(Vector2f(15,625));
        }
        else if(cont==2){                                       //EXIT
            rectangle.setSize(Vector2f(120,65));
            rectangle.setPosition(Vector2f(15,705));
        }
        else if(cont==3){                                      //volta pro START
            cont = 0;
        }


        window.clear(Color::Black);
        window.draw(fundo);
        window.draw(rectangle);
        window.display();
    }

    return 0;
}

