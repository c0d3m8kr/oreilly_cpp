#ifndef PRIEST_H
#define PRIEST_H

#include <string>
#include "Player.h"

using namespace std;

class Priest : public Player
{
    public:
        Priest(string name, Race race);
        string attack() const;
    private:
};

#endif