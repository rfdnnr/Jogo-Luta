#include "Herois.hpp"

Herois::Herois(int idHeroi){
    if (idHeroi == 1){
        Sprite = LoadTexture("careca1/png/idle/idle_1.png");
        PosicaoHerois.x=-100;
        PosicaoHerois.y=-200;
    }
}

Herois::~Herois(){

}

void Herois::DrawHeroi(){
    PosicaoHerois.x = -1000;
	PosicaoHerois.y = -200;
}