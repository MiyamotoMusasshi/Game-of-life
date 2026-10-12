#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(
        sf::VideoMode({1920, 1080}),
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

        sf::CircleShape object(15.f, 15.f);
        object.setFillColor(sf::Color::Red);
        window.draw(object);

        window.display();
    }

    return 0;
}