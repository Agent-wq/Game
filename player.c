#include "player.h"
#include <raylib.h>

player p1;
void initPlayer() {
  p1.playerPos = (Vector2){0.0f, 0.0f};
  p1.playerTex = LoadTexture("res/player.png"); // loads player texture
}
void updatePlayer() {
  DrawTexture(p1.playerTex, 100, 100, WHITE); // Draw Player Texture
  if (IsKeyDown(KEY_D)) {
    p1.playerPos.x += 200 * GetFrameTime();
    printf("Move left\n");
  }
}
void unload() { UnloadTexture(p1.playerTex); }
