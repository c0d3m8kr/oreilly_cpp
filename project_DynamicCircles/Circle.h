#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>

using namespace std;

class Circle
{
    public:
        Circle();
        Circle(double radius);
        void setRadius(double radius);
        double getRadius() const;
        double getCircumference() const;
        double getArea() const; 

    private:
        double radius;
};

#endif