#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    length = 1;
    width = 1;
}

Rectangle::Rectangle(int length, int width)
{
    this->length = length;
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}

void Rectangle::setWidth(int width)
{
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

double Rectangle::calcArea()
{
    return (length * width);
}

double Rectangle::calcPerimeter()
{
    return ((2 * length) + (2 * width));
}