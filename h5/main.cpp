#include "classa1.h"
#include "classa2.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    int *pointerA=&a;
    int &refA= a;

    cout << "a:n arvo on: "<<a<<" ja osoite on: "<<&a<< endl;

    //Osoitin

    cout << "Pointterin osoittama osoite on: " <<pointerA<<endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: "<<*pointerA<<endl;

    //Referenssi

    cout <<"refA osoittaa osoitteeseen on: "<<&refA<<endl;
    cout <<"refA:n osoittaman muistipaikan arvo on: "<<refA<<endl;

    cout << "b:n arvo on: "<<b<<" ja osoite on: "<< &b <<endl;

    //Osoitteen vaihdoksia:

    refA = b;
    cout <<"refA osoittaa uuteen osoitteeseen on: "<<&refA<<endl; //Osoite ei muutu alkuperäisestä

    pointerA=&b;
    cout << "Pointterin osoittama uusi osoite on: " <<pointerA<<endl; //Osoite muuttuu alkuperäisestä

    //Olio argumenttina:

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    //Referenssi argumenttina:

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
