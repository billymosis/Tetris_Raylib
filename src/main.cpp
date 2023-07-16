#include "game.h"
#include <iostream>
#include <raylib.h>

double lastUpdateTime = 0;

bool EventTriggered(double interval) {
  double currentTime = GetTime();
  if (currentTime - lastUpdateTime >= interval) {
    lastUpdateTime = currentTime;
    return true;
  }
  return false;
}

int main() {
  Color darkBlue = {44, 44, 127, 255};
  InitWindow(300, 600, "raylib Tetris");
  SetTargetFPS(60);

  Game game = Game();

  while (!WindowShouldClose()) {
    game.HandleInput();
    if (EventTriggered(0.02)) {
      game.MoveBlockDown();
    }
    std::cout << game.gameOver;
    std::cout << std::endl;
    BeginDrawing();
    ClearBackground(darkBlue);
    game.Draw();
    EndDrawing();
  }
  CloseWindow();
}
