#pragma once

#include<string>
#include<iostream>

class Player
{
private:
    std::string playerName;
public:
   Player();
    Player(std::string playerName);
    std::string getPlayerName();
    ~Player();
};

Player::Player(){}

Player::Player(std::string playerName)
{
    this->playerName = playerName;
}

Player::~Player(){}

std::string Player::getPlayerName()
{
    return this->playerName;
}

