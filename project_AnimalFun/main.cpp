#include <iostream>
#include <string>
#include <fstream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    //Dog dog("Rover", 80, "Shitzu");

    Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever");

    cout << "Make noise? " << dogPtr->makeNoise() << endl;
    cout << "What do you like to eat? " << dogPtr->eat() << endl;

    delete dogPtr;
    dogPtr = nullptr;

    dogPtr = new Dog("Woofers", 118, "Awesome Breed");

    delete dogPtr;
    dogPtr = nullptr;

    return 0;
}