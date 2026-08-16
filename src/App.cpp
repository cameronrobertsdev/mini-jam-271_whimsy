#include <iostream>
#include "raylib.h"

int main(){
    std::cout << "Hello World!" << "\n";

    const int screenWidth = 500;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Game");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
          BeginDrawing();
            ClearBackground(WHITE);
            DrawText("HELLOW WORLD!", screenHeight / 2, screenWidth / 2, 20, BLACK);

          EndDrawing();

    }

    CloseWindow();
}