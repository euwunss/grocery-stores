#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "store.h"
#include "stores.h"
#include "neighborhoods.h"

// Function prototypes
int getUserChoice();
std::string getUserDatafile();
void readFile(std::string fileName, Stores& stores);

int main() {
    Stores stores;
    Neighborhoods neighborhoods;

    // Get a filename from user
    std::string fileName = getUserDatafile();
    readFile(fileName, stores);
    int userChoice = getUserChoice(); 

    while (userChoice != 5) {
        switch(userChoice) {
            case 1:
                // Menu option 1: Print general info about grocery stores
                stores.printInfo();
                break;
            case 2:
                // Menu option 2: Display store charts in each neighborhood
                neighborhoods.setNeighborhoods(stores);
                neighborhoods.displayChart(stores);
                break;
            case 3:
                // FIXME: Add Menu option 3: Find the closest store to user's given location
                break;
            case 4:
                // FIXME: Add Menu option 4: Search for store by word or phrase
                break;
            case 5:
                // FIXME: Add Menu option 5: Exit program
                return 0;
        }
        userChoice = getUserChoice();
    }
    return 0;
}
// Prompt user to enter a datafile name to be read
std::string getUserDatafile() {
    std::string fileName;

    std::cout << "\nEnter filename: ";
    std::cin >> fileName;

    return fileName;
}

// Read in the information from a file and store it in a vector containing grocery stores
void readFile(std::string fileName, Stores& stores) {
    std::string input, line;
    std::string name, size, address, neighborhood;
    int sqftSize;
    double latitude, longtitude;

    // Exit the program if the file could not be opened
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
            neighborhood = data[4];
            latitude = stod(data[5]);
            longtitude = stod(data[6]);

            Store groceryStore(name, sqftSize, size, address, neighborhood, latitude, longtitude);
            stores.inputStore(groceryStore);
        }
        else {
            std::cout << "Error: Information missing." << std::endl;
            return;
        }
    }
    fileIn.close();
}

// Prompt user for choice from menu option
int getUserChoice() {
    int choice;

    do {
        std::cout << "\nSelect a menu option: " << std::endl;
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