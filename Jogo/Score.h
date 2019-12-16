#ifndef SCORE_H
#define SCORE_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "BinaryFile.h"

using namespace std;
using namespace sf;

class Score
{
    public:
        Score(float width, float height);
        virtual ~Score();        
        void draw(sf::RenderWindow &window);

        void atualizaText(RenderWindow &window);
        
    private:
        Font fonte;
        Text nome;
        Text pontos;
        Text nomeJogador;
        Text pontosJogador;
        vector<Pontos> ponto;
        Texture background;
        void buscaRanking();
};

#endif