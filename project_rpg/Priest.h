#ifndef PRIEST_H
#define PRIEST_H

#include <string>
#include "Player.h"

using namespace std;

class Priest : public Player
{
    public:
        Priest(string name, Race race);
        ~Priest();
        string attack() const;
    private:
};

#endif