#ifndef PLAYER_H
#define PLAYER_H
#include <raylib.h>
#include <stdio.h>

typedef struct Player {
  Texture2D playerTex;
  Rectangle playerRect;
  Vector2 playerPos;
  float playerVel;
} player;
void initPlayer();
void updatePlayer();
void unload();
#endif
