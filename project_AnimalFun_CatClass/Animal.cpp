#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal(string name, double weight)
{
    this->name = name;
    this->weight = weight;
}

Animal::~Animal(){}

string Animal::getName() const
{
    return name;
}

void Animal::setName(string name)
{
    this->name = name;
}

double Animal::getWeight() const
{
    return weight;
}

void Animal::setWeight(double weight)
{
    this->weight = weight;
}

/*
// since makeNoise in Animal class now pure virtual, Animal is abstract and this function is
// no longer usable
string Animal::makeNoise() const
{
    return "I'm an Animal!";
}
*/