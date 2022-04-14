#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle
{
    public:
        Circle();
        Circle(double radius);
        double getRadius() const;           // getter
        void setRadius(double radius);      // setter
        double circumference() const;       // getter
        double area() const;                // getter

    private:
        double radius;
};

#endif