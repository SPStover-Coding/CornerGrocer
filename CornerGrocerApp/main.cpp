#include "CornerGrocer.h"
#include <iostream>
#include <limits>

int main() {
    CornerGrocer grocer;
    int choice;

    while (true) {
        // Display menu options
        grocer.displayMenu();
        std::cout << "Enter your choice: ";

        // Input validation to ensure valid menu selection
        while (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number between 1 and 4: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if (choice < 1 || choice > 4) {
            std::cout << "Invalid input. Please enter a number between 1 and 4: ";
            continue;
        }

        // Handle user's choice
        grocer.handleChoice(choice);
    }
    return 0;
}
