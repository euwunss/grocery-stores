#include <iostream>
#include <string>
#include "neighborhood.h"

Neighborhood::Neighborhood(const std::string& name) : name(name), storeChart(""), numLargeStores(0), numSmallStores(0) {}
Neighborhood::Neighborhood() : name("Noname"), storeChart(""), numLargeStores(0), numSmallStores(0) {}

void Neighborhood::setName(std::string name) { this->name = name; }
void Neighborhood::setNumLargeStores(int numLargeStores) { this->numLargeStores = numLargeStores; }
void Neighborhood::setNumSmallStores(int numSmallStores) { this->numSmallStores = numSmallStores; }

std::string Neighborhood::getName() const { return name; }
int Neighborhood::getStoresNum() const { return numLargeStores + numSmallStores; }

// Calculate the number of small and large grocery stores in a neighborhood
void Neighborhood::countStores(Stores& stores) {
    for (const Store& store : stores.getStoresList()) {
        if (store.getNeighborhood() == name) {
            numLargeStores += (store.getSize() == "Large") ? 1 : 0;
            numSmallStores += (store.getSize() != "Large") ? 1 : 0;
        }
    }
}

// Return a grocery stores chart for a neighborhood
std::string Neighborhood::getStoreChart() const {
    for (int i = 0; i < numLargeStores; i++) {
        storeChart += "L";
    }
    for (int i = 0; i < numSmallStores; i++) {
        storeChart += "S";
    }
    return storeChart;
}