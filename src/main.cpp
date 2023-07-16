#include "blocks.cpp"
#include "grid.h"
#include <raylib.h>

int main() {
  Color darkBlue = {44, 44, 127, 255};
  InitWindow(300, 600, "raylib Tetris");
  SetTargetFPS(60);

  Grid grid = Grid();
  grid.Print();

  IBlock block = IBlock();

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(darkBlue);
    grid.Draw();
    block.Draw();

    EndDrawing();
  }
  CloseWindow();
}
