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
        void setLength(int length);
        void setWidth(int width);
        int getLength() const;
        int getWidth() const;
        double calcArea();
        double calcPerimeter();

    private:
        int length;
        int width;
};

#endif