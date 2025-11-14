#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    cout<<"Autolista:"<<endl;
   cout<<"*********************************"<<endl;

    vector<Car> carList;

    carList.emplace_back("Toyota","Carina",2022);
    carList.emplace_back("Opel","Omega",2001);
    carList.emplace_back("Audi","A4",2002);

    cout<<"Toinen auto listassa: "<<endl;
    carList[1].printData();

    cout<<"Kaikkien autojen tiedot: "<<endl;

    for(int x=0; x<=2; x++) {
        carList[x].printData();
    }
    return 0;
}
