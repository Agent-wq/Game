#include "main.h"
#include "player.h"
#include <raylib.h>
/*Camera2D cam;*/
player p2;
extern Camera2D cam;
int main() {
  // Boiler plate
  InitWindow(SCREEN_WIDHT, SCREEN_HEIGHT, "GAME");
  SetTargetFPS(60);
  initPlayer(); // load player
  printf("%lf", p2.playerPos.x);
  // main loop
  while (!WindowShouldClose()) {
    BeginDrawing();
    BeginMode2D(cam);
    ClearBackground(SKYBLUE);
    updatePlayer(); // update player like movement
    EndDrawing();
    EndMode2D();
  }
  unload();
  CloseWindow();
  return 0;
}
