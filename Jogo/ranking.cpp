
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

int main()
{
    sf::Font font;

    if (!font.loadFromFile(../trabalho_final_poo/Resources/fonte.otf)){
        std::cout << "Erro" << std::endl;
        system("pause");
    }

    sf::Text text;
    text.setFont(font);
    text.setString("RANKING");



}