#pragma once
#include "block.h"
#include "grid.h"
#include <vector>

class Game {
public:
  Game();
  ~Game();
  void Draw();
  void HandleInput();
  void MoveBlockDown();
  bool gameOver;
  int score;
  Music music;

private:
  Grid grid;
  Block GetRandomBlock();
  void MoveBlockLeft();
  void MoveBlockRight();
  std::vector<Block> GetAllBlocks();
  std::vector<Block> blocks;
  void RotateBlock();
  Block currentBlock;
  Block nextBlock;
  bool isBlockOutside();
  void LockBlock();
  bool BlockFits();
  void Reset();
  void UpdateScore(int linesCleared, int moveDownPoints);
  Sound rotateSound;
  Sound clearSound;
};
