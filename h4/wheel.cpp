#include "wheel.h"

Wheel::Wheel() {}



int Wheel::getSize()
{
    return size;
}

void Wheel::setSize(int size)
{
    this->size =size;
}

string Wheel::getType()
{
    return type;
}

void Wheel::setType(string type)
{
this->type =type;
}

Wheel::~Wheel()
{

}
