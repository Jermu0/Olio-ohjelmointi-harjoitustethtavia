#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;
class Chef
{
private:

protected:
    string name;
public:
    Chef();
    Chef(string);
    void makeSalad();
    void makeSoup();
    ~Chef();

    string getName() const;
    void setName(const string &newName);
};

#endif // CHEF_H
