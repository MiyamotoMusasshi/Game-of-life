#include "utils.h"
#include <random>

// namespace{

// }

void generationCells(std::vector<Cell> &cells, const unsigned int &width, const unsigned int &height)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 1);

    for (int x = 1; x < width / 100; x++)
    {
        for (int y = 1; y < height / 100; y++)
        {
            Cell newCell = {x * 100, y * 100, (bool)distrib(gen), (bool)distrib(gen)};
            cells.push_back(newCell);
        }
    }
}

void processing(std::vector<Cell> &cells)
{
    for (int i = 0; i < cells.size(); i++)
    {
        if (cells[i].isAlive)
        {
        }
    }
}