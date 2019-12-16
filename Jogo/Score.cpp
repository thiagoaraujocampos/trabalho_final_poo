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
    
    nome.setPosition(100,200);
    nome.setFont(fonte);
    nome.setString("Nome");
    nome.setCharacterSize(50);
    nome.setFillColor(Color::Green);
    
    pontos.setPosition(700, 200);
    pontos.setFont(fonte);
    pontos.setCharacterSize(50);
    pontos.setString("Pontos");
    pontos.setFillColor(Color::Green);
    
    nomeJogador.setPosition(100,300);
    nomeJogador.setFont(fonte);
    nomeJogador.setString("Nome");
    nomeJogador.setCharacterSize(30);
    nomeJogador.setFillColor(Color::Yellow);
    
    pontosJogador.setPosition(700, 300);
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
      nomeJogador.setString(to_string(ponto[i].getRA()));
      nomeJogador.setPosition(100,y);
      pontosJogador.setString(to_string(ponto[i].getPont()));
      pontosJogador.setPosition(700,y);
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