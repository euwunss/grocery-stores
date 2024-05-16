#include <iostream>
#include <string>
#include "store.h"

// constructor definition
Store::Store(std::string name, int sqftSize, std::string size, std::string address, std::string neighborhood, double latitude, double longitude) {
    this->name = name;
    this->sqftSize = sqftSize;
    this->size = size;
    this->address = address;
    this->neighborhood = neighborhood;
    this->latitude = latitude;
    this->longitude = longitude;
}

// setters functions definitions
void Store::setName(std::string name) {this->name = name;}
void Store::setSqftSize(double sqftSize) {this->sqftSize = sqftSize;}
void Store::setSize(std::string size) {this->size = size;}
void Store::setAddress(std::string address) {this->address = address;}
void Store::setNeighborhood(std::string neighbourhood) {this->neighborhood = neighborhood;}
void Store::setLatitude(double latitude) {this->latitude = latitude;}
void Store::setLongtitude(double longitude) {this->longitude = longitude;}

// getters functions definitions
std::string Store::getName() const {return name;}
double Store::getSqftSize() const {return sqftSize;}
std::string Store::getSize() const {return size;}
std::string Store::getAddress() const {return address;}
std::string Store::getNeighborhood() const {return neighborhood;}
double Store::getLatitude() const {return latitude;}
double Store::getLongitude() const {return longitude;}