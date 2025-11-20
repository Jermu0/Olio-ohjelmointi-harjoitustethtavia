#include "animal.h"
#include "dog.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int main()
{

    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Animal>());
    animals.push_back(std::make_unique<Dog>());

    for (const auto& animal : animals) {
        animal->callOut();
    }
    return 0;
}
