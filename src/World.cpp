#include "World.hpp"
#include <algorithm>

Entity test(150, 100);

World::World() { }

void World::init(sf::RenderWindow& window) {
    window.setVerticalSyncEnabled(true);

    test.set_sprite("res/1.png");
    test.get_sprite().setScale(sf::Vector2f(4, 4));
    add_child(test);
}

void World::update(sf::RenderWindow& window, float delta) {
    for (Entity ent : entities) {
        ent.update(window, delta);
    }
}

void World::render(sf::RenderWindow& window) {
    for (Entity ent : entities) {
        ent.render(window);
    }
}

void World::add_child(const Entity& entity) { 
    entities.push_back(entity);
}

void World::remove_child(const Entity& entity) {
    entities.erase(std::remove(entities.begin(), entities.end(), entity));
}