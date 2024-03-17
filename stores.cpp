#include <iostream>
#include "stores.h"

// class methods implementation
void Stores::inputStore(Store store) {
    stores.push_back(store);
}

void Stores::printInfo() const {
    std::cout << "FIXME: implement printInfo() method" << std::endl;
    return;
}

int Stores::getLargeStoresCount() const {
    std::cout << "FIXME: implement getLargeStoresCount() method" << std::endl;
    return -1;
}

