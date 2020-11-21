#include "Entity.hpp"
#include <iostream>

Entity::Entity(int x, int y) {
    this->x = x;
    this->y = y;
}

void Entity::set_sprite(std::string texture_name) {
    if (!texture.loadFromFile(texture_name)) {
        std::cout << "Error loading texture: (" << texture_name << ")" << std::endl;
        return;
    }

    sprite.setTexture(texture);
}

sf::Sprite& Entity::get_sprite() {
    return sprite;
}

void Entity::update(sf::RenderWindow& window, float delta) {
    if (sprite.getTexture() != nullptr) {
        sprite.setPosition(x, y);
        window.draw(sprite);
    }
}

void Entity::render(sf::RenderWindow& window) {

}
