#include <iostream>
#include <string>
#include "Rectangle.h"
#include "RectangleHelper.h"

using namespace std;

int main()
{
    RectangleHelper helper;
    Rectangle r1(10, 25);
    cout << "r1 area: " << r1.getArea() << endl;

    changeData(r1);

    cout << "now, r1 area is: " << r1.getArea() << endl;

    helper.modifyRectangle(r1);

    cout << "now, r1 area is: " << r1.getArea() << endl;

    printData(r1);

    return 0;
}

void changeData(Rectangle& rect)
{
    rect.width = 100;
    rect.length = 100;
}

void printData(Rectangle& rect)
{
    cout << "The length is: " << rect.getLength() << endl;
    cout << "The width is: " << rect.getWidth() << endl;
}