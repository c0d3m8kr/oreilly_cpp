#include <iostream>
#include <string>
#include "Warrior.h"
#include "Player.h"

using namespace std;

Warrior::Warrior(string name, Race race) : Player(name, race, 200, 0)
{

}

string Warrior::attack() const
{
    return "I will destroy you with my sword, foul demon!";
}