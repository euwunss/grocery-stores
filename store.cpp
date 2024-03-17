#include <iostream>
#include <string>
#include "store.h"

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

// setters functions definitions
void Store::setName(std::string name) {this->name = name;}
void Store::setSqftSize(double sqftSize) {this->sqftSize = sqftSize;}
void Store::setSize(std::string size) {this->size = size;}
void Store::setAddress(std::string address) {this->address = address;}
void Store::setNeighbourhood(std::string neighbourhood) {this->neighbourhood = neighbourhood;}
void Store::setLatitude(double latitude) {this->latitude = latitude;}
void Store::setLongtitude(double longtitude) {this->longtitude = longtitude;}

// getters functions definitions
std::string Store::getName() const {return name;}
double Store::getSqftSize() const {return sqftSize;}
std::string Store::getSize() const {return size;}
std::string Store::getAddress() const {return address;}
std::string Store::getNeighbourhood() const {return neighbourhood;}
double Store::getLatitude() const {return latitude;}
double Store::getLongtitude() const {return longtitude;}