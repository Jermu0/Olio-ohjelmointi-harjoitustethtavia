#include "car.h"
#include "student.h"
#include "rectangle.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    Car objectcar;
    objectcar.setBrand("Toyota");
    objectcar.setModel("Carina");
    objectcar.setYearmodel(2022);
    objectcar.printData();

    Rectangle *objectrectangle= new Rectangle();
    objectrectangle->setWidth(5.5);
    objectrectangle->setHeight(6.0);
    cout<< "Suorakulmion pinta-ala on: "<<objectrectangle->getArea()<<endl;
    cout<< "Suorakulmion ymparysmitta on: "<<objectrectangle->getCircum()<<endl;

    delete objectrectangle;
    objectrectangle=nullptr;

    // Smart pointteri
    unique_ptr<Student> objectStudent = make_unique<Student>("Teppo",25078661,4.255);
    objectStudent->display();

    return 0;
}
