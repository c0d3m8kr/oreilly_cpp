#include <iostream>
#include <string>
#include "Priest.h"
#include "Player.h"

using namespace std;

Priest::Priest(string name, Race race) : Player(name, race, 100, 200)
{

}

string Priest::attack() const
{
    return "I will assault you with Holy Wrath!";
}