#ifndef MAGE_H
#define MAGE_H

#include <string>
#include "Player.h"

using namespace std;

class Mage : public Player
{
    public:
        Mage(string name, Race race);
        string attack() const;
    private:
};

#endif