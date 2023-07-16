#pragma once
#include "colors.h"
#include "position.h"
#include <map>
#include <vector>

class Block {
public:
  Block();
  int id;
  std::map<int, std::vector<Position>> cells;
  std::vector<Position> GetCellPositions();
  void Draw();
  void Move(int rows, int columns);
  void Rotate();
  void UndoRotation();

private:
  int cellSize;
  int rotationState;
  std::vector<Color> colors;
  int rowOffset;
  int columnOffset;
};