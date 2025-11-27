#ifndef CAR_H
#define CAR_H
#include "wheel.h"
#include <memory>
#include <engine.h>
#include <iostream>
using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(string);
    string getBrand();
    void setBrand(string);
    void printdetails();
    ~Car();




};

#endif // CAR_H
