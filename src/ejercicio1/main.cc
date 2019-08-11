#include<iostream>
#include "Tournament.hh"
#include "Player.hh"
#include<vector>
#include<string>
#include<iomanip>

int main()
{
    int gameDays = 5;

    Player player1 = *new Player("jose");
    Player player2 = *new Player("alberto");
    Player player3 = *new Player("julio");
    Player player4 = *new Player("andres");
    Player player5 = *new Player("miguel");
    Player player6 = *new Player("arturo");

    std::vector<Player> playerList1 {player1, player2, player3, player4, player5};
    std::vector<Player> playerList2 {player1, player2, player3, player4, player5, player6};

    Tournament tournament1 = *new Tournament(gameDays, playerList1);
    Tournament tournament2 = *new Tournament(gameDays, playerList2);

    //tournament1.createGame();
    tournament2.createGame();

    std::getchar();
    
    //tournament1.~Tournament();
    //tournament2.~Tournament();
    return 0;
}