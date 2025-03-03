#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <map>
#include <string>

class CornerGrocer {
private:
    // Map to store item frequencies
    std::map<std::string, int> itemFrequency;

    // Reads data from the input file and populates the map
    void readFile();

    // Writes the frequency data to a backup file
    void writeFile();
public:
    // Constructor that initializes the item frequency map
    CornerGrocer();

    // Displays the menu options to the user
    void displayMenu();

    // Handles the user's menu selection
    void handleChoice(int choice);

    // Prompts user for an item and displays its frequency
    void calculateFrequency();

    // Prints the frequency of all items
    void printFrequency();

    // Prints a histogram representing item frequencies
    void printHistogram();

    // Writes data to the backup file and exits the program
    void exitProgram();
};

#endif
