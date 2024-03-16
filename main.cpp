#include <iostream>
#include <string>

// Function prototypes
int getUserChoice();

int main() {
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