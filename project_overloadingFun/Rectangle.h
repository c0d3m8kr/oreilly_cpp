#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
    public:
        Rectangle();
        Rectangle(int length, int width);
        int getLength() const;
        int getWidth() const;
        int getPerimeter();
        int getArea();

        bool operator==(const Rectangle& other) const;  
        // overloading == operator
        
        Rectangle operator+(const Rectangle& other) const;
        // overloading + operator

        void operator=(const Rectangle& other);
        // overloading = operator

        bool operator!=(const Rectangle& other) const;
        // overloading != operator

    private:
        int length;
        int width;
};

#endif