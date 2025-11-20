#include "chef.h"

string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}

Chef::Chef() {}

Chef::Chef(string name)
{
    this->name=name;

    cout<<"Chef "<<this->name<<" konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<this->name<<" destruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<this->name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<this->name<<" makes soup"<<endl;
}

