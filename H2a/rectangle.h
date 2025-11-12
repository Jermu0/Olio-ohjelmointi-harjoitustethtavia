#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double w, double h);
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    double getCircum();
    double getArea();
};

#endif // RECTANGLE_H
