#include <SFML/Graphics.hpp>

class Entity {
    private:
        int x;
        int y;
        
        sf::Texture texture;
        sf::Sprite sprite;

    public:
        void set_sprite(std::string texture_name);
        sf::Sprite& get_sprite();

        void update(sf::RenderWindow& window, float delta);
        void render(sf::RenderWindow& window);

        bool operator==(const Entity& ent) {
          if ((this->x == ent.x) && (this->y == ent.y))
              return true;
          return false;
        }

        Entity(int x, int y);
};