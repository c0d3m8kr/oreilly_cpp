#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main()
{
    int numCircles = 0;
    int inputRadius = 0;

    cout << "How many circle objects do you wish to define: ";
    cin >> numCircles;

    // dynamically create array of numCircle's of Circle objects
    // Since of array of circle objects is:
    // Circle* circArr = new Circle[array_size]
    Circle** circleArr = new Circle*[numCircles];
    // is an array of circle pointers.

    for (int i = 0; i < numCircles; i++)
    {
        cout << "Radius for Circle[" << (i+1) << "]: ";
        cin >> inputRadius;

        circleArr[i] = new Circle(inputRadius);
    }

    for (int i = 0; i < numCircles; i++)
    {
        cout << "Circle[" << i+1 << "]" << endl;
        cout << "Radius: " << circleArr[i]->getRadius() << endl;
        cout << "Circumference: " << circleArr[i]->getCircumference() << endl;
        cout << "Area: " << circleArr[i]->getArea() << endl;
    }

    for (int i = 0; i < numCircles; i++)
    {
        delete circleArr[i];
        circleArr[i] = nullptr;
    }

    delete[] circleArr;

    return 0;
}