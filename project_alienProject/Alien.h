#ifndef ALIEN_H
#define ALIEN_H

#include <string>
#include <vector>

using namespace std;

class Alien
{
    public:
        Alien(int weight, int height, char gender);
        int getWeight() const;
        int getHeight() const;
        char getGender() const;
        int getPrestige() const;

        // overloaded operators go here:
        bool operator!=(Alien& other) const;
        bool operator==(Alien& other) const;
        bool operator>(Alien& other) const;
        bool operator>=(Alien& other) const;
        bool operator<(Alien& other) const;
        bool operator<=(Alien& other) const;
        Alien operator+(Alien& other) const;
        void operator=(Alien& other); 

    private:
        int weight;
        int height;
        char gender;
};

#endif