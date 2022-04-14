#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"

using namespace std;

Pizza::Pizza(string name, int cost, int diameter)
{
    this->name = name;
    this->cost = cost;
    this->diameter = diameter;
    this->toppings.push_back("cheese");
}

void Pizza::addTopping(string topping)
{
    this->toppings.push_back(topping);
}

int Pizza::getCost()
{
    return cost;
}

void Pizza::printToppings() const
{
    cout << "The toppings on your pizza are:" << endl;
    for (string topping : toppings){
        cout << topping << endl;
    }
}