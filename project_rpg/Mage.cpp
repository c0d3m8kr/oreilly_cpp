#include <iostream>
#include <string>
#include "Mage.h"
#include "Player.h"

using namespace std;

Mage::Mage(string name, Race race) : Player(name, race, 150, 150)
{
    cout << "Mage Class: Constructor" << endl;
}

Mage::~Mage()
{
    cout << "Mage Class: Deconstructor" << endl;
}

string Mage::attack() const
{
    return "I will crush you with the power of my arcane missiles!";
}