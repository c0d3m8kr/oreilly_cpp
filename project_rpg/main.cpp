#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

using namespace std;

void printWelcomeScreen();
void createCharacter(vector<Player*>& playerVect);
int createMore();

int main()
{
    vector<Player*> playerVect;        // create a vector, playerVect of type Player;
    int leaveLobby = 0;                 // for exiting creation of new players loop
    string profession;                  // Warrior/Priest/or Mage?
    string name;                        // name of Player

    printWelcomeScreen();


    while (!leaveLobby)                         // while 'don't exit', do...
    {
        createCharacter(playerVect);
        leaveLobby = createMore();              // ask user if they wish to stop and exit.
    }    


    return 0;
}

void printWelcomeScreen()
{
    cout << "Welcome to the Player Creation Arena" << endl;
    cout << "RPG 1.0 Player Class" << endl;
    cout << "04-27-2022 : c0d3m8kr@gmail.com" << endl;
}

void createCharacter(vector<Player*>& playerVect)
{

}

int createMore()
{
    char answer;
    cout << "Character created. Do you wish to continue? ";
    cin >> answer;
    if (toupper(answer) == 'Y')
        return 0;
    return 1;
}