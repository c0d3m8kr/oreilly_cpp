#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    Circle ronCircle;
    Circle pamCircle(5);

    ronCircle.setRadius(20);

    cout << "Ron's circle: " << endl;
    cout << "Radius: " << ronCircle.getRadius() << endl;
    cout << "Circumference: " << ronCircle.circumference() << endl;
    cout << "Area: " << ronCircle.area() << endl;
    
    cout << "Pam's circle: " << endl;
    cout << "Radius: " << pamCircle.getRadius() << endl;
    cout << "Circumference: " << pamCircle.circumference() << endl;
    cout << "Area: " << pamCircle.area() << endl;

    return 0;
}