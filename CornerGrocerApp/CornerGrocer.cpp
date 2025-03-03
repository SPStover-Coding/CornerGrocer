#include "CornerGrocer.h"
#include <iostream>
#include <fstream>
#include <limits>

// Constructor definition
CornerGrocer::CornerGrocer() {
    // Initialize item frequency map by reading from file
    readFile();
}

// Reads data from the input file and updates the itemFrequency map
void CornerGrocer::readFile() {
    std::ifstream inputFile("CS210_Project_Three_Input_File.txt");
    if (!inputFile) {
        std::cerr << "Error: Cannot open input file!" << std::endl;
        return;
    }
    std::string item;
    while (inputFile >> item) {
        itemFrequency[item]++;
    }
    inputFile.close();
}

// Writes the frequency data to the backup file
void CornerGrocer::writeFile() {
    std::ofstream outputFile("frequency.dat");
    if (!outputFile) {
        std::cerr << "Error: Cannot open output file!" << std::endl;
        return;
    }
    for (const auto& pair : itemFrequency) {
        outputFile << pair.first << " " << pair.second << std::endl;
    }
    outputFile.close();
}

// Displays the menu options to the user
void CornerGrocer::displayMenu() {
    std::cout << "1. Calculate Frequency" << std::endl;
    std::cout << "2. View Frequency List" << std::endl;
    std::cout << "3. View Histogram" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

// Handles user's menu selection and calls the appropriate function
void CornerGrocer::handleChoice(int choice) {
    switch (choice) {
    case 1:
        calculateFrequency();
        break;
    case 2:
        printFrequency();
        break;
    case 3:
        printHistogram();
        break;
    case 4:
        exitProgram();
        break;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
}

// Prompts user to enter an item and displays its frequency
void CornerGrocer::calculateFrequency() {
    std::string item;
    std::cout << "Enter the item: ";
    std::cin >> item;
    std::cout << "Frequency of " << item << ": " << itemFrequency[item] << std::endl;
}

// Prints the frequency of all items
void CornerGrocer::printFrequency() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

// Prints a histogram representing item frequencies
void CornerGrocer::printHistogram() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Writes data to the backup file and exits the program
void CornerGrocer::exitProgram() {
    writeFile();
    std::cout << "Exiting program. Data saved to frequency.dat." << std::endl;
    exit(0);
}
