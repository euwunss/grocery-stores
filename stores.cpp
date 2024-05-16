// Author: Olha Lashchukevych
// Date: 05/16/2024
// Stores class that keeps track of a list of grocery stores
// Stores class implementation

#include <iostream>
#include <iomanip>
#include "stores.h"

// class methods implementation
void Stores::inputStore(Store& store) {
    stores.push_back(store);
}

// Print general info about grocery stores
void Stores::printInfo() const {
    std::cout << "Number of grocery stores: " << stores.size() << std::endl;
    std::cout << "Number of large grocery stores: " << getLargeStoresCount() << std::endl;
    std::cout << "Average size of large grocery stores: " << std::fixed << std::setprecision(1) << calcAverageSize() << std::endl;
}

// Calculate the number of large grocery stores in a list
int Stores::getLargeStoresCount() const {
    unsigned int count = 0;
    for (unsigned int i = 0, len = stores.size(); i < len; i++) {
        count += (stores.at(i).getSize() == "Large") ? 1 : 0;
    }
    return count;
}

// Get stores vector
const std::vector<Store>& Stores::getStoresList() const { return stores; }

// Calculate the average size for large grocery stores with known square footage
double Stores::calcAverageSize() const {
    int storesNum = 0;
    double sumSquareFeet = 0.0;

    for (unsigned int i = 0, len = stores.size(); i < len; i++) {
        bool isLargeSizeKnown = (stores.at(i).getSize() == "Large" && stores.at(i).getSqftSize() > 0);
        if (isLargeSizeKnown) {
            storesNum++;
            sumSquareFeet += stores.at(i).getSqftSize();
        }
    }
    return sumSquareFeet / storesNum;
}
