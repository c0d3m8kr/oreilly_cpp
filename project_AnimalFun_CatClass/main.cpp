#include <iostream>
#include <string>
#include "Animal.h"
#include "Cat.h"

using namespace std;

int main()
{
    /*
    // This section no longer applies once pure virtual functions is implemented
    // and the class Animal becomes abstract.
    Animal myAnimal("Sophia", 155);
    Animal* anotherAnimal = new Animal("Battle Cat", 345);

    cout << "myAnimal Instatiation:" << endl;
    cout << "Name: " << myAnimal.getName() << endl;
    cout << "Weight: " << myAnimal.getWeight() << endl;

    cout << "anotherAnimal Pointer:" << endl;
    cout << "Name: " << anotherAnimal->getName() << endl;
    cout << "Weight: " << anotherAnimal->getWeight() << endl;

    delete anotherAnimal;
    anotherAnimal = nullptr;
    */

    Animal* myCatPtr = new Cat("Sophia", 23);

    cout << "Let's test the Cat Derived Class:" << endl;
    cout << "Name: " << myCatPtr->getName() << endl;
    cout << "Weight: " << myCatPtr->getWeight() << endl;
    cout << "What did you say? " << myCatPtr->makeNoise() << endl;

    // Here, we need to cast Cat* pointer to reference to Cat methods.
    // at static bind, it still binds to Animal and so if we just use:
    // myCatPtr->chaseMouse() won't exist.
    // "We're casting the animal pointer to a cat pointer"
    string food = (reinterpret_cast<Cat*>(myCatPtr))->eat();
    cout << "What do you eat? " << food << endl;
    //((Cat*)myCatPtr)->chaseMouse();
    (reinterpret_cast<Cat*>(myCatPtr))->chaseMouse();

    delete myCatPtr;
    myCatPtr = nullptr;

    return 0;
}