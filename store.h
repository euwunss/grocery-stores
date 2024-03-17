#ifndef STORE_H
#define STORE_H

class Store {
    public:
        // default constructor declaration
        Store(std::string name="Noname", int squareFeet=0, std::string size="None", std::string address="None", std::string neighborhood="None", double latitude=0.0, double longtitude=0.0);
        // setters functions declarations
        void setName(std::string name);
        void setSqftSize(double sqftSize);
        void setSize(std::string size);
        void setAddress(std::string address);
        void setNeighborhood(std::string neighborhood);
        void setLatitude(double latitude);
        void setLongtitude(double longtitude);

        // getters functions declarations
        std::string getName() const;
        double getSqftSize() const;
        std::string getSize() const;
        std::string getAddress() const;
        std::string getNeighborhood() const;
        double getLatitude() const;
        double getLongtitude() const;

    private:
        std::string name;
        int sqftSize;
        std::string size;
        std::string address;
        std::string neighborhood;
        double latitude;
        double longtitude;    
};

#endif