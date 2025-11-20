#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include<iostream>
#include "chef.h"
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    void makeSalad();
    void makeSoup();
    void makePasta();
    ~ItalianChef();

};

#endif // ITALIANCHEF_H
