#include "Player.h"

// Constructors

// Default constructor
Player::Player() : name(""), level(0), health(0) {}

// Parameterized constructor
Player::Player(const std::string& name, int level, int health)
        : name(name), level(level), health(health) {}

// Getters

// Get the player's name
std::string Player::getName() const {
    return name;
}

// Get the player's level
int Player::getLevel() const {
    return level;
}

// Get the player's health
int Player::getHealth() const {
    return health;
}

// Setters

// Set the player's name
void Player::setName(const std::string& newName) {
    name = newName;
}

// Set the player's level
void Player::setLevel(int newLevel) {
    level = newLevel;
}

// Set the player's health
void Player::setHealth(int newHealth) {
    health = newHealth;
}

// Member functions

// Reduce the player's health by the specified damage amount
void Player::takeDamage(int damageAmount) {
    health -= damageAmount;
    if (health < 0) {
        health = 0;
    }
}

// Increase the player's level by 1
void Player::levelUp() {
    level++;
}

// Overloading the << operator for Player class
std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << "Player Name: " << player.getName() << ", Level: " << player.getLevel()
       << ", Health: " << player.getHealth();
    return os;
}
