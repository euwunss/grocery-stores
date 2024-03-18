#ifndef NEIGHBORHOODS_H
#define NEIGHBORHOODS_H

#include <vector>
#include "stores.h"
#include "neighborhood.h"

class Neighborhoods {
    public:
        void inputNeighborhood(Neighborhood& neighborhood);
        void setNeighborhoods(Stores& stores);
        void displayChart() const;

    private:
        std::vector<Neighborhood> neighborhoods;
};

#endif