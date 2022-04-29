#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
    // friend is definted outside of public and private members/methods
    friend void changeData(Rectangle& rect);
    friend class RectangleHelper; // forward declaration
    friend void printData(Rectangle& rect);

    public:
        Rectangle();
        Rectangle(int length, int width);
        int getLength() const;
        int getWidth() const;
        int getPerimeter();
        int getArea();

    private:
        int length;
        int width;
};

#endif