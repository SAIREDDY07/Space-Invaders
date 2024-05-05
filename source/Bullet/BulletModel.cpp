#include "../../header/Bullet/BulletModel.h"
#include <SFML/Graphics.hpp>
#include "../../header/Entity/EntityConfig.h"
#include "../../header/UI/GameplayUI/GameplayUIController.h"
namespace Bullet {
    BulletModel::BulletModel(const sf::Sprite& bulletSprite, const sf::Vector2f& initialVelocity)
        : sprite(bulletSprite), velocity(initialVelocity), active(true) {}
    
    void BulletModel::update(float deltaTime) {
        if (active) {
            sprite.move(velocity * deltaTime);

        }
    }

    // Method to deactivate the bullet
    void BulletModel::deactivate() {
        active = false;
    }

    // Getter for active status
    bool BulletModel::isActive() const {
        return active;
    }

    // Getter for bullet sprite
    const sf::Sprite& BulletModel::getSprite() const {
        return sprite;
    }

    // Getter for bullet position
    sf::Vector2f BulletModel::getPosition() const {
        return bullet_position;
    }

    // Setter for bullet position
    void BulletModel::setPosition(const sf::Vector2f& position) {
        bullet_position = position;
    }
}