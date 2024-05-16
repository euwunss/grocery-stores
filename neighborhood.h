// Author: Olha Lashchukevych
// Date: 05/16/2024
// Neighborhood class that keeps track of a single neighborhood
// Header file that contains Neighborhood class declaration

#ifndef NEIGHBORHOOD_H
#define NEIGHBORHOOD_H

#include "stores.h"

class Neighborhood {
    public:
        // constructor declarations
        Neighborhood(const std::string& name);
        Neighborhood();

        // setter functions declarations
        void setName(std::string name);
        void setNumLargeStores(int numLargeStores);
        void setNumSmallStores(int numSmallStores);
        void countStores(Stores& stores);
        // getter functions declarations
        std::string getName() const;
        int getStoresNum() const;
        std::string getStoreChart() const;

    private:
        std::string name;
        mutable std::string storeChart;
        int numLargeStores;
        int numSmallStores;
};

#endif