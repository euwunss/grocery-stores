#include <iostream>
#include <string>
#include "neighborhood.h"

Neighborhood::Neighborhood(const std::string& name) : name(name) {}
Neighborhood::Neighborhood() : name("Noname") {}

void Neighborhood::setName(std::string name) { this->name = name; }
void Neighborhood::setNumLargeStores(int numLargeStores) { this->numLargeStores = numLargeStores; }
void Neighborhood::setNumSmallStores(int numSmallStores) { this->numSmallStores = numSmallStores; }

std::string Neighborhood::getName() const { return name; }

void Neighborhood::printStoreChart() const {
    for (unsigned int i = 0; i < numLargeStores; i++) {
        std::cout << "L";
    }
    for (unsigned int i = 0; i < numSmallStores; i++) {
        std::cout << "S";
    }

    std::cout << std::endl;
}