#include <iostream>
#include <string>

class Store {
    public:
        // default constructor declaration
        Store(std::string name="Noname", int squareFeet=0, std::string size="None", std::string address="None", std::string neighbourhood="None", double latitude=0.0, double longtitude=0.0);
        // setters functions
        void setName(std::string name) {this->name = name;}
        void setSqftSize(double sqftSize) {this->sqftSize = sqftSize;}
        void setSize(std::string size) {this->size = size;}
        void setAddress(std::string address) {this->address = address;}
        void setNeighbourhood(std::string neighbourhood) {this->neighbourhood = neighbourhood;}
        void setLatitude(double latitude) {this->latitude = latitude;}
        void setLongtitude(double longtitude) {this->longtitude = longtitude;}

        // getters functions
        std::string getName() const {return name;}
        double getSqftSize() const {return sqftSize;}
        std::string getSize() const {return size;}
        std::string getAddress() const {return address;}
        std::string getNeighbourhood() const {return neighbourhood;}
        double getLatitude() const {return latitude;}
        double getLongtitude() const {return longtitude;}

    private:
        std::string name;
        int sqftSize;
        std::string size;
        std::string address;
        std::string neighbourhood;
        double latitude;
        double longtitude;    
};

// constructor definition
Store::Store(std::string name, int sqftSize, std::string size, std::string address, std::string neighbourhood, double latitude, double longtitude) {
    this->name = name;
    this->sqftSize = sqftSize;
    this->size = size;
    this->address = address;
    this->neighbourhood = neighbourhood;
    this->latitude = latitude;
    this->longtitude = longtitude;
}