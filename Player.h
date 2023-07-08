//
// Created by Aman on 2023-07-09.
//
#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int level;
    int health;

public:
    // Constructors
    Player();
    Player(const std::string& name, int level, int health);

    // Getters
    std::string getName() const;
    int getLevel() const;
    int getHealth() const;

    // Setters
    void setName(const std::string& newName);
    void setLevel(int newLevel);
    void setHealth(int newHealth);

    // Member functions
    void takeDamage(int damageAmount);
    void levelUp();
};

// Overloading the << operator for Player class
std::ostream& operator<<(std::ostream& os, const Player& player);

#endif
