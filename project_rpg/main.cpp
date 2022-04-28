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
    int vectorSize = 0;

    printWelcomeScreen();

    // Creat characters in vector:
    while (!leaveLobby)                         // while 'don't exit', do...
    {
        createCharacter(playerVect);
        leaveLobby = createMore();              // ask user if they wish to stop and exit.
    }    

    // Print characters in vector:
    vectorSize = playerVect.size();
    if (vectorSize != 0)
    {
        for (int i = 0; i < vectorSize; i++)
        {
            //cout << playerVect.at(i)->attack() << endl;
            cout << "I'm a " << playerVect.at(i)->whatRace() << " and my attack is: " << playerVect.at(i)->attack() << endl;
        }
    }

    // Kill vector:
    for (Player* player : playerVect)
    {
        delete player;
    }
    playerVect.clear();

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
    char classPick; // holds answer to Warrior/Priest/Mage
    char racePick;
    Race race;
    string name;
    Player* temp;

    cout << "Please name your new character: " << endl;
    cout << ">> ";
    getline(cin, name);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "What character race do you wish to create?" << endl;
    cout << "[H]uman : [E]lf : [D]warf : [O]rc : [T]roll" << endl;
    cout << ">> ";
    cin >> racePick;
    switch(racePick)
    {
        case 'H':
            race = HUMAN;
            break;
        case 'E':
            race = ELF;
            break;
        case 'D':
            race = DWARF;
            break;
        case 'O':
            race = ORC;
            break;
        case 'T':
            race = TROLL;
            break;
        default:
            cout << "You broke the program. Exiting..." << endl;
    }

    cout << "What character class do you wish to create? Warrior[W], Priest[P], or Mage[M] : " << endl;
    cout << ">> ";
    cin >> classPick;
    classPick = classPick;

    if (classPick == 'W')
    {
        temp = new Warrior(name, race);
        playerVect.push_back(temp);    
    }
    else if (classPick == 'P')
    {
        temp = new Priest(name, race);
        playerVect.push_back(temp);
    }
    else if (classPick == 'M')
    {
        temp = new Mage(name, race);
        playerVect.push_back(temp);
    }
    else
    {
        cout << "Error: Derived Class. You broke the program. Exiting..." << endl;
    }
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