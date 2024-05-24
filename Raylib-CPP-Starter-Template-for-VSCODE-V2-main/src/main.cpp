#include <raylib.h>
#include "Jogo.hpp"

int main() {
	int windowHeight = 600;
	int windowWidth = 1000;

	InitWindow(windowWidth, windowHeight, "Projeto POO");
	SetTargetFPS(60);

	Jogo jogo;

	while (WindowShouldClose() == false) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		jogo.Draw();
		EndDrawing();
	}
	CloseWindow();
	return 0;
}