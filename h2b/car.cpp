#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearmodel() const
{
    return yearmodel;
}

void Car::setYearmodel(int newYearmodel)
{
    yearmodel = newYearmodel;
}

void Car::printData()
{
    cout<<"Auton merkki: "<<this->brand<<endl;
    cout<<"Auton malli: "<<this->model<<endl;
    cout<<"Auton valmistusvuosi: "<<this->yearmodel<<endl;
    cout<<"*********************************"<<endl;
}

Car::Car() {}

Car::Car(string brand, string model, int yearmodel)
{
    this->brand=brand;
    this->model=model;
    this->yearmodel=yearmodel;
}
