#pragma once
#include <raylib.h>
#include "Personagens.hpp"

class Herois{
public:
	Herois(int idHeroi);
	~Herois();
	void DrawHeroi();
	Vector2 PosicaoHerois;
	Texture2D Sprite;
};