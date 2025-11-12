#include "rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}


Rectangle::Rectangle()
{
    width=0;
    height=0;
}

Rectangle::Rectangle(double w, double h) {
    width=w;
    height=h;
}

double Rectangle::getCircum()
{
    return 2*(width+height);
}

double Rectangle::getArea()
{
    return width*height;
}




