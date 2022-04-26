#include <iostream>
#include <string>
#include "Dog.h"
#include "Animal.h"

using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
    //setName(name);
    //setWeight(weight);
    this->breed = breed;
}

/* The instantiation above can also be done with this:
Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
    this->breed = breed;
}
*/

string Dog::getBreed() const
{
    return breed;
}

void Dog::digHole() const
{
    cout << "I'm diggin a hole!" << endl;
}

string Dog::digAnotherHold() const
{
    return "I'm diggin one more hole!";
}

string Dog::makeNoise() const
{
    return "Woof!";
}

void Dog::chaseCat() const
{
    cout << "Here, kitty kitty!" << endl;
}