#include "italianchef.h"

ItalianChef::ItalianChef(){}

ItalianChef::ItalianChef(string name): Chef(name)
{
    setName("Anthony Bourdain");
    cout<<"ItalianChef "<<getName()<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<getName()<<" destruktori"<<endl;
}

void ItalianChef::makeSalad()
{
    cout<<"ItalianChef "<<getName()<<" makes salad"<<endl;
}

void ItalianChef::makeSoup()
{
    cout<<"ItalianChef "<<getName()<<" makes soup"<<endl;
}

void ItalianChef::makePasta()
{
    cout<<"ItalianChef "<<getName()<<" makes pasta"<<endl;
}

