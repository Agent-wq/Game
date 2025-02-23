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
    BeginDrawing();
    BeginMode2D(cam);
    ClearBackground(SKYBLUE);
    // camera properties
    cam.offset = (Vector2){(float)SCREEN_WIDHT / 2, (float)SCREEN_HEIGHT / 2};
    cam.rotation = 0;
    cam.offset = (Vector2){p2.playerPos.x, p2.playerPos.y};
    cam.zoom = 2.0f;
    updatePlayer(); // update player like movement
    EndDrawing();
    EndMode2D();
  }
  unload();
  CloseWindow();
  return 0;
}
