#ifndef STORES_H
#define STORES_H

#include <vector>
#include "store.h"

// class declaration
class Stores {
    public:
        void inputStore(Store& store);
        void printInfo() const;
        int getLargeStoresCount() const;
        const std::vector<Store>& getStoresList() const;

    private:
        std::vector<Store> stores;
        double calcAverageSize() const;
};

#endif