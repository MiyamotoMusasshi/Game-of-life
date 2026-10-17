#pragma once
#include "vector"

struct Cell
{
    int x;
    int y;
    bool isAlive;
    bool isPredator;
};

void generationCells(std::vector<Cell> &cells, const unsigned int &width, const unsigned int &height);

void processing(std::vector<Cell> &cells);
