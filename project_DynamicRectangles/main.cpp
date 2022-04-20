#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    const int ARR_SIZE = 3;

    Rectangle* myRectArr[ARR_SIZE];     // make the array an array of Rectangle pointers

    for (int index = 0; index < ARR_SIZE; index++)
    {
        myRectArr[index] = new Rectangle((index+1)*2, (index+2)*3);
        cout << "myRectArr[" << index << "]" << endl;
        cout << "Length: " << myRectArr[index]->getLength() << endl;
        cout << "Width: " << myRectArr[index]->getWidth() << endl;
        cout << "Perimeter: " << myRectArr[index]->getPerimeter() << endl;
        cout << "Area: " << myRectArr[index]->getArea() << endl;
    }

    for (int index = 0; index < ARR_SIZE; index++)
    {
        delete myRectArr[index];
        myRectArr[index] = nullptr;
    }

    return 0;
}