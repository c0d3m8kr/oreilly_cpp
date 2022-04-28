#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

Car::Car(string color, int numDoors)
{
    cout << color << " Car Class: Constructor" << endl;
    this->color = color;
    this->numDoors = numDoors;
}

Car::~Car()
{
    cout << color << " Car Class: Deconstructor" << endl;
}

string Car::getColor() const
{
    return color;
}

int Car::getNumDoors() const
{
    return numDoors;
}