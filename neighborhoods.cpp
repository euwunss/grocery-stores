#include <iostream>
#include <algorithm>
#include "neighborhoods.h"

void Neighborhoods::inputNeighborhood(Neighborhood& neighborhood) {
    neighborhoods.push_back(neighborhood);
}

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
            inputNeighborhood(neighborhood);       
        }
    }
}