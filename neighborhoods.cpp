#include <iostream>
#include <algorithm>
#include <iomanip>
#include "neighborhoods.h"

bool operator<(const Neighborhood& lhs, const Neighborhood& rhs);
bool operator>(const Neighborhood& lhs, const Neighborhood& rhs);

void Neighborhoods::inputNeighborhood(Neighborhood& neighborhood) {
    neighborhoods.push_back(neighborhood);
}

// Populate vector with neighborhoods and sort them
void Neighborhoods::setNeighborhoods(Stores& stores) {
    std::vector<std::string> neighborhoodNames;
    for (const Store& store : stores.getStoresList()) {
        bool isNameFound = false;

        for (std::string name : neighborhoodNames) {
            if (store.getNeighborhood() == name) {
                isNameFound = true;
            }
        }

        if (!isNameFound) {
            neighborhoodNames.push_back(store.getNeighborhood());
            Neighborhood neighborhood(store.getNeighborhood());
            neighborhood.countStores(stores);
            inputNeighborhood(neighborhood);      
        }
    }
    sortNeighborhoods();
}

std::vector<Neighborhood>& Neighborhoods::getNeighborhoods() {
    return neighborhoods;
}

// Display neighborhoods' grocery stores charts
void Neighborhoods::displayChart(Stores& stores) {
    std::cout << '\n';
    for (Neighborhood& neighborhood : neighborhoods) {
        std::cout << std::left << std::setw(25)<< neighborhood.getName();
        std::cout << neighborhood.getStoreChart() << std::endl;
    }
}

// Operator < overloading to compare neighborhoods' number of stores
bool operator<(const Neighborhood& lhs, const Neighborhood& rhs) {
    return lhs.getStoresNum() < rhs.getStoresNum();
}

// Operator > overloading to compare neighborhoods' number of stores. If it's equal, compare neighborhoods alphabetically
bool operator>(const Neighborhood& lhs, const Neighborhood& rhs) {
    if (lhs.getStoresNum() != rhs.getStoresNum()) {
        return rhs < lhs;
    }
    return lhs.getName() < rhs.getName();
}

// Sort neighborhoods by number of stores
// If number of stores is equal, sort alphabetically
void Neighborhoods::sortNeighborhoods() {
    std::sort(neighborhoods.begin(), neighborhoods.end(), operator>);
}