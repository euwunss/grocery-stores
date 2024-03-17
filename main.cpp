#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "store.h"

// Function prototypes
int getUserChoice();
std::string getUserDatafile();
void readFile(std::string fileName, std::vector<Store>& stores);

int main() {
    std::vector<Store> stores;
    
    std::string fileName = getUserDatafile();
    readFile(fileName, stores);
    int userChoice = getUserChoice(); 

    while (userChoice != 5) {
        switch(userChoice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }

        userChoice = getUserChoice();
    }

    return 0;
}

std::string getUserDatafile() {
    std::string fileName;

    std::cout << "Enter filename: ";
    std::cin >> fileName;

    return fileName;
}

void readFile(std::string fileName, std::vector<Store>& stores) {
    std::string input, line;
    std::string name, size, address, neighbourhood;
    int sqftSize;
    double latitude, longtitude;

    std::ifstream fileIn;
    fileIn.open("datafiles/" + fileName);
    if (!fileIn.is_open()) {
        std::cout << "Error opening this file." << std::endl;
        exit(-1);
    }

    while (getline(fileIn, line)) {
        std::vector<std::string> data;
        std::istringstream lineIn(line);

        while (getline(lineIn, input, ',')) {
            data.push_back(input);
        }

        if (data.size() == 7) {
            name = data[0];
            sqftSize = stoi(data[1]);
            size = data[2];
            address = data[3];
            neighbourhood = data[4];
            latitude = stod(data[5]);
            longtitude = stod(data[6]);

            Store groceryStore(name, sqftSize, size, address, neighbourhood, latitude, longtitude);
            stores.push_back(groceryStore);
        }
        else {
            std::cout << "Error: Information missing." << std::endl;
            return;
        }
    }
    fileIn.close();
}

int getUserChoice() {
    int choice;

    do {
        std::cout << "Select a menu option: " << std::endl;
        std::cout << "   1. Display general grocery stores information" << std::endl;
        std::cout << "   2. Display neighborhood charts" << std::endl;
        std::cout << "   3. Find closest stores" << std::endl;
        std::cout << "   4. Search for store by name" << std::endl;
        std::cout << "   5. Exit" << std::endl;
        std::cout << "Your choice: ";

        std::cin >> choice;
    } while (choice < 1 || choice > 5);

    return choice;
}