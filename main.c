#include "main.h"
Camera2D cam;

int main() {
  // Boiler plate
  InitWindow(SCREEN_WIDHT, SCREEN_HEIGHT, "GAME");
  SetTargetFPS(60);
  // main loop
  while (!WindowShouldClose()) {
    BeginMode2D(cam);
    BeginDrawing();
    ClearBackground(SKYBLUE);
    EndDrawing();
    EndMode2D();
  }
  CloseWindow();
  return 0;
}
