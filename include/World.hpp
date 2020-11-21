#include "Entity.hpp"
#include <vector>
#include <SFML/Window.hpp>

class World {
    private:
        std::vector<Entity> entities;

    public:
        void init(sf::RenderWindow& window);
        void update(sf::RenderWindow& window, float delta);
        void render(sf::RenderWindow& window);
        void add_child(const Entity& entity);
        void remove_child(const Entity& entity);

        World();
};