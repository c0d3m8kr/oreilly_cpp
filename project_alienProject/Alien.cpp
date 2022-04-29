#include <iostream>
#include <string>
#include <vector>
#include "Alien.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Alien::Alien(int weight, int height, char gender)
{
    this->weight = weight;
    this->height = height;
    this->gender = gender;
}

int Alien::getWeight() const
{
    return weight;
}

int Alien::getHeight() const
{
    return height;
}

char Alien::getGender() const
{
    return gender;
}

int Alien::getPrestige() const
{
    int genderPoints;
    if (gender == 'M')
        genderPoints = 2;
    else
        genderPoints = 3;   // for female
    
    return (height * weight * genderPoints);
}

bool Alien::operator!=(Alien& other) const
{
    return getPrestige() != other.getPrestige();
}

bool Alien::operator==(Alien& other) const
{
    return getPrestige() == other.getPrestige();
}

bool Alien::operator>(Alien& other) const
{
    return getPrestige() > other.getPrestige();
}

bool Alien::operator>=(Alien& other) const
{
    return getPrestige() >= other.getPrestige();
}

bool Alien::operator<(Alien& other) const
{
    return getPrestige() < other.getPrestige();
}

bool Alien::operator<=(Alien& other) const
{
    return getPrestige() <= other.getPrestige();
}

Alien Alien::operator+(Alien& other) const
{   // this is the breeding algorithm
    char newGender;
    srand(time(nullptr));
    int temp = rand()%100 + 1;  // 1-100

    int newWeight = (weight + other.weight)/2;
    int newHeight = (height + other.height)/2;
    if (temp >= 0 && temp <= 30)
        newGender = 'F';
    else
        newGender = 'M';

    return Alien(newWeight, newHeight, newGender);
}

void Alien::operator=(Alien& other)
{
    weight = other.weight;
    height = other.height;
    gender = other.gender;
}