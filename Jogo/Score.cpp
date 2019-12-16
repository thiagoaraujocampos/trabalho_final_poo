#include "Score.h"

Score::Score(float width, float height){

    buscaRanking();    

    if (!fonte.loadFromFile("../Resources/latoBlack.ttf")){
       //erro
    }
    
    
    if(!background.loadFromFile("../Imagens/ranking.png")){
        //erro
    }

    fundo.setTexture(background);
    
    pontos.setPosition(260, 200);
    pontos.setFont(fonte);
    pontos.setCharacterSize(50);
    pontos.setString("Maiores Pontuacoes");
    pontos.setFillColor(Color::Green);
    
    pontosJogador.setPosition(320, 300);
    pontosJogador.setFont(fonte);
    pontosJogador.setCharacterSize(30);
    pontosJogador.setString("Pontos");
    pontosJogador.setFillColor(Color::Yellow);
}

Score::~Score(){
    
}

void Score::draw(sf::RenderWindow &window){
    window.draw(fundo);
    window.draw(nome);
    window.draw(pontos);
}

void Score::atualizaText(RenderWindow &window){
    int y = 300;
    for(int i = 0; i < ponto.size() && i < 10; i++) {
      pontosJogador.setString(to_string(ponto[i].getPont()));
      pontosJogador.setPosition(450,y);
      window.draw(nomeJogador);
      window.draw(pontosJogador);
      y += 40;
    }

    y = 300;
}

void Score::buscaRanking(){
    BinaryFile bf("info.dat");
    bf.leitura(ponto);
}