#include "player.h"
#include <raylib.h>
player p1;

void updatePlayer() {
  if (IsKeyDown(KEY_D)) {
    p1.playerPos.x += p1.playerVel * GetFrameTime();
    printf("move left");
  }
}
