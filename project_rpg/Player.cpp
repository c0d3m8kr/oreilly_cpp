#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

//enum Race {HUMAN, ELF, DWARF, ORC, TROLL};

Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
    this->name = name;
    this->race = race;
    this->hitPoints = hitPoints;
    this->magicPoints = magicPoints;
}

string Player::getName() const
{
    return name;
}

Race Player::getRace() const
{
    return race;    // returns enumerated value
}

string Player::whatRace() const
{
    // enum Race {HUMAN, ELF, DWARF, ORC, TROLL}
    switch(race)
    {
        case HUMAN:
            return "HUMAN";
            break;
        case ELF:
            return "ELF";
            break;
        case DWARF:
            return "DWARF";
            break;
        case ORC:
            return "ORC";
            break;
        case TROLL:
            return "TROLL";
            break;
        default:
            return "Empty";
            break;
    }
}

int Player::getHitPoints() const
{
    return hitPoints;
}

int Player::getMagicPoints() const
{
    return magicPoints;
}

void Player::setName(string name)
{
    this->name = name;
}

void Player::setRace(Race race)
{
    this->race = race;
}

void Player::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints)
{
    this->magicPoints = magicPoints;
}