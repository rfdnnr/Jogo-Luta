#pragma once
#include <raylib.h>
#include "Herois.hpp"

class Personagens {
private:
	float vida;
	int defesa;
	int ataqueBasico;
	Texture2D Sprite;
	Vector2 Posicao;
public:
	Personagens();
	~Personagens();
	void Draw();
};