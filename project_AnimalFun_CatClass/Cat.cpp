#include <iostream>
#include <string>
#include "Cat.h"
#include "Animal.h"

using namespace std;

Cat::Cat(string name, double weight) : Animal(name, weight)
{
    // do nothing
}

Cat::~Cat(){}

void Cat::chaseMouse() const
{
    cout << "I'm chasing a mouse!" << endl;
}

string Cat::makeNoise() const
{
    return "Meow!";
}

string Cat::eat() const
{
    return "Tasty kitty food!";
}