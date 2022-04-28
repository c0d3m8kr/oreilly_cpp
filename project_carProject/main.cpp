#include <iostream>
#include <string>
#include <memory>
#include "Car.h"

using namespace std;

int main()
{
    unique_ptr<Car> redCar = make_unique<Car>("Red", 4);
    auto blueCar = make_unique<Car>("Blue", 20);

    cout << "redCar resides at address: " << redCar << endl;
    cout << "The colour is: " << redCar->getColor() << endl;
    cout << "The number of doors is: " << redCar->getNumDoors() << endl;

    cout << "redCar resides at address: " << blueCar << endl;
    cout << "The colour is: " << blueCar->getColor() << endl;
    cout << "The number of doors is: " << blueCar->getNumDoors() << endl;

    return 0;
}