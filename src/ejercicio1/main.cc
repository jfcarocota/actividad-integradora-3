#include<iostream>
#include "Tournament.hh"
#include "Player.hh"
#include<vector>
#include<string>

int main()
{
    Player player1 = *new Player("jose");
    Player player2 = *new Player("alberto");
    Player player3 = *new Player("julio");
    Player player4 = *new Player("andres");
    Player player5 = *new Player("miguel");

    std::vector<Player> playerList {player1, player2, player3, player4, player5};

    Tournament tournament = *new Tournament(5, playerList);

    std::string topGameLabel = "jugador : ";

    for(int i = 0; i < tournament.getPlayerList().size(); i++)
    {
        topGameLabel += "d" + std::to_string(i + 1)  + " \t";
    }
    
    std::cout << topGameLabel << std::endl;

    for(int i = 0; i < tournament.getPlayerList().size(); i++)
    {
        std::cout << tournament.getPlayerList()[i].getPlayerName() + "\t" << std::endl;
    }

    

    std::getchar();
    
    tournament.~Tournament();
    return 0;
}