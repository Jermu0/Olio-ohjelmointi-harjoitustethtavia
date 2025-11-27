#include "engine.h"

Engine::Engine() {}

void Engine::setHorsepower(int h)
{
    this->horsepower=h;
}


int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setDisplacement(double l)
{
    this->displacement=l;
}

Engine::~Engine()
{

}
double Engine::getDisplacement()
{
    return displacement;
}
