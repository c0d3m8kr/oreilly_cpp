#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    this->length = 1;
    this->width = 1;
}

Rectangle::Rectangle(int length, int width)
{
    this->length = length;
    this->width = width;
}

int Rectangle::getLength() const
{
    return length;
}

int Rectangle::getWidth() const
{
    return width;
}

int Rectangle::getPerimeter()
{
    return ((2 * length) + (2 * width));
}

int Rectangle::getArea()
{
    return length * width;
}