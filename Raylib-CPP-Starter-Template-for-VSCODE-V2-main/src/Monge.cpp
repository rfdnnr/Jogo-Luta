#include "Monge.hpp"

Monge::Monge(){
	Sprite = LoadTexture("careca1/png/idle/idle_1.png");
}

Monge::~Monge(){
    UnloadTexture(Sprite);
}

void Monge::Draw(){
    float TamanhoDoSprite = 5.0f;
	DrawTextureEx(Sprite, PosicaoHerois, 0.0f, TamanhoDoSprite, WHITE);
}