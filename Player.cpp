#include "Player.h"

// Constructors
Player::Player() : name(""), level(1), health(100) {}

Player::Player(const std::string& name, int level, int health)
        : name(name), level(level), health(health) {}

// Getters
std::string Player::getName() const {
    return name;
}

int Player::getLevel() const {
    return level;
}

int Player::getHealth() const {
    return health;
}

// Setters
void Player::setName(const std::string& newName) {
    name = newName;
}

void Player::setLevel(int newLevel) {
    level = newLevel;
}

void Player::setHealth(int newHealth) {
    health = newHealth;
}

// Member functions
void Player::takeDamage(int damageAmount) {
    health -= damageAmount;
    if (health < 0) {
        health = 0;
    }
}

void Player::levelUp() {
    level++;
    health = 100;
}

// Overloading the << operator for Player class
std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << "Player Name: " << player.getName() << std::endl;
    os << "Player Level: " << player.getLevel() << std::endl;
    os << "Player Health: " << player.getHealth() << std::endl;
    return os;
}
