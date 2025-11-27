#include "car.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    Car objectCar;
    objectCar.setModel("Corolla");
    objectCar.setBrand("Toyota");
    objectCar.setEngine();
    objectCar.setWheels();

    objectCar.printdetails();
    return 0;
}
