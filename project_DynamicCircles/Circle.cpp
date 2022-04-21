#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
    this->radius = 1.0;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getCircumference() const
{
    return (2 * 3.14 * radius);
}

double Circle::getArea() const
{
    return (3.14 * radius * radius);
}

