// Author: Olha Lashchukevych
// Date: 05/16/2024
// Neighborhoods class that keeps track of a list of neighborhoods
// Header file that contains Neighborhoods class declaration

#ifndef NEIGHBORHOODS_H
#define NEIGHBORHOODS_H

#include <vector>
#include "stores.h"
#include "neighborhood.h"

class Neighborhoods {
    public:
        void inputNeighborhood(Neighborhood& neighborhood);
        void setNeighborhoods(Stores& stores);
        void displayChart(Stores& stores);
        std::vector<Neighborhood>& getNeighborhoods();
        void sortNeighborhoods();

    private:
        std::vector<Neighborhood> neighborhoods;
};

#endif