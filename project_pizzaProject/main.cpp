#include <iostream>
#include <string>
#include "Pizza.h"

using namespace std;

int main()
{
    Pizza myPizza("Pepperoni Pizza", 12, 12);

    myPizza.addTopping("Pepperoni");
    myPizza.addTopping("Hot Peppers");
    myPizza.addTopping("Bacon");
    myPizza.printToppings();

    return 0;
}