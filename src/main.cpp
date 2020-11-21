#include "World.hpp"
#include <SFML/Graphics.hpp>

World world;

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    sf::Clock clock;

    world.init(window);

    while (window.isOpen()) {
        sf::Time elapsed = clock.restart();
        sf::Event event;
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        world.update(window, elapsed.asSeconds());

        window.display();
    }

    return 0;
}