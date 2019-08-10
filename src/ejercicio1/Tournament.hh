#pragma once; 

#include<string>
#include<iostream>
#include "Player.hh"
#include<vector>

class Tournament
{
private:
    std::vector<Player> playersList;
    int gameDays;
public:
    Tournament(int gameDays, std::vector<Player> playersList);
    ~Tournament();
    std::vector<Player> getPlayerList();
    void createGame();
    int getGameDays();
};

Tournament::Tournament(int gameDays, std::vector<Player> playersList)
{
    this->playersList = playersList;
    this->gameDays = gameDays;
}

Tournament::~Tournament(){ }

std::vector<Player> Tournament::getPlayerList()
{
    return this->playersList;
}

int Tournament::getGameDays()
{
    return this->gameDays;
}

void Tournament::createGame()
{
    for(int i = 0; i < gameDays; i++)
    {
        for(int j = 0; j < gameDays; j++)
        {
            
        }
    }
}



