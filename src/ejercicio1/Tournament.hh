#pragma once; 

#include<string>
#include<iostream>
#include "Player.hh"
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<random>

class Tournament
{
private:
    std::vector<Player> playersList;
    int gameDays;
    std::vector<std::string> game;
public:
    Tournament(int gameDays, std::vector<Player> playersList);
    ~Tournament();
    std::vector<Player> getPlayerList();
    void createGame();
    int getGameDays();
    void RandomMatch(int n, std::vector<std::string> match);
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
    bool rest = false;
    std::vector<std::string> match;
    int nplayers = this->playersList.size();

    for(int i = 0; i < gameDays; i++)
    {
        //create match
        std::string players = "";
        for(int j = 0; j < nplayers; j++)
        {
            if(i != j)
            {
                match.push_back(this->playersList[j].getPlayerName() + "\t");
            }
            else
            {
                match.push_back("-\t");
            }
        }
        
        //shuffle
        for(int j = 0; j < nplayers; j++)
        {
            int r = j + std::rand() % (nplayers - j);
            std::swap(match[j], match[r]);
        }
        //publish match
        for(int j = 0; j < nplayers; j++)
        {
            players += match[j];
        }
        game.push_back(players);
    } 

    std::string topGameLabel = "";

    for(int i = 0; i < gameDays; i++)
    {
        topGameLabel += "d" + std::to_string(i + 1)  + " \t";
    }
    
    std::cout << topGameLabel << std::endl;

    for(int i = 0; i < this->game.size(); i++)
    {
        std::cout << this->game[i] << std::endl;
    }
}



