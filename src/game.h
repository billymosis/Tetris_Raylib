#pragma once
#include "block.h"
#include "grid.h"
#include <vector>

class Game {
public:
  Game();
  Grid grid;
  Block GetRandomBlock();
  std::vector<Block> GetAllBlocks();
  void Draw();
  void HandleInput();
  void MoveBlockLeft();
  void MoveBlockRight();
  void MoveBlockDown();
  bool gameOver;

private:
  std::vector<Block> blocks;
  void RotateBlock();
  Block currentBlock;
  Block nextBlock;
  bool isBlockOutside();
  void LockBlock();
  bool BlockFits();
  void Reset();
};
