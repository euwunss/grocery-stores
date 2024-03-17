#ifndef NEIGHBORHOOD_H
#define NEIGHBORHOOD_H

class Neighborhood {
    public:
        Neighborhood(const std::string& name);
        Neighborhood();

        void setName(std::string name);
        void setNumLargeStores(int numLargeStores);
        void setNumSmallStores(int numSmallStores);

        std::string getName() const;
        void printStoreChart() const;

    private:
        std::string name;
        std::string storeChart; 
        int numLargeStores;
        int numSmallStores;
};

#endif