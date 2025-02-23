#include "player.h"
#include "main.h"
#include <raylib.h>

player p1;
Camera2D cam;
void initPlayer() {
  p1.playerPos = (Vector2){0.0f, 0.0f};
  p1.playerTex = LoadTexture("res/player.png"); // loads player texture
}
void updatePlayer() {
  p1.playerVel = (Vector2){400, 400};
  DrawTexture(p1.playerTex, 100, 100, WHITE); // Draw Player Texture
  if (IsKeyDown(KEY_D)) {
    p1.playerPos.x += p1.playerVel.x * GetFrameTime();
  }
  if (IsKeyDown(KEY_A)) {
    p1.playerPos.x -= p1.playerVel.x * GetFrameTime();
  }
  // camera properties
  cam.offset = (Vector2){(float)SCREEN_WIDHT / 2, (float)SCREEN_HEIGHT / 2};
  cam.rotation = 0;
  cam.offset = (Vector2){p1.playerPos.x + 20, p1.playerPos.y + 20};
  cam.zoom = 2.0f;
}
void unload() { UnloadTexture(p1.playerTex); }
