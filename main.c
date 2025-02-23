#include "main.h"
#include "player.h"
#include <raylib.h>
Camera2D cam;
int main() {
  // Boiler plate
  InitWindow(SCREEN_WIDHT, SCREEN_HEIGHT, "GAME");
  SetTargetFPS(60);
  initPlayer(); // load player
  // main loop
  while (!WindowShouldClose()) {
    BeginMode2D(cam);
    BeginDrawing();
    ClearBackground(SKYBLUE);
    updatePlayer(); // update player like movement
    EndDrawing();
    EndMode2D();
  }
  CloseWindow();
  return 0;
}
