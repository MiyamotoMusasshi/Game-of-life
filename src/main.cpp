#include <iostream>
#include <SFML/Graphics.hpp>
#include "utils.h"

std::vector<Cell> cells = {};
unsigned int windowWidth = 1920;
unsigned int windowHeight = 1080;

int main()
{
    generationCells(cells, windowWidth, windowHeight);
    sf::RenderWindow window(
        sf::VideoMode({windowWidth, windowHeight}),
        "Game of Life");

    window.setFramerateLimit(60);

    while (window.isOpen())
    {

        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        window.clear();
        for (int i = 0; i < cells.size(); i++)
        {
            sf::CircleShape cellRender((cells[i].isAlive ? 20.f : 10.f));
            cellRender.setFillColor((cells[i].isAlive == false ? sf::Color::White : (cells[i].isPredator ? sf::Color::Red : sf::Color::Green)));
            cellRender.setPosition(sf::Vector2f((float)cells[i].x, (float)cells[i].y));
            window.draw(cellRender);
        }
        window.display();
    }

    return 0;
}