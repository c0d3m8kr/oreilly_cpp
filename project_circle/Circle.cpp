#include <iostream>
#include <string>
#include <cmath>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
    this->radius = 1;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::getRadius() const           // getter
{
    return radius;
}

void Circle::setRadius(double radius)      // setter
{
    this->radius = radius;
}

double Circle::circumference() const       // getter
{
    return (2 * M_PI * radius);
}

double Circle::area() const                // getter
{
    return (M_PI * radius * radius);
}