#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void storyRoom1();
void storyRoom2();
void storyRoom3();
void gameOver();

int main() {
    // Introduction and setup
    cout << "Welcome to the Text Adventure Game!\n";
    cout << "You find yourself in a mysterious house...\n\n";
    
    // Start the game in room 1
    storyRoom1();

    return 0;
}

// Function definitions

void storyRoom1() {
    // Room 1 story
    cout << "You are in Room 1. You see three doors in front of you.\n";
    cout << "Do you want to go through Door 1, Door 2, or Door 3? (1/2/3)\n";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            // Transition to Room 2
            storyRoom2();
            break;
        case 2:
            // Transition to Room 3
            storyRoom3();
            break;
        case 3:
            // Game over scenario
            gameOver();
            break;
        default:
            // Invalid input
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
            storyRoom1(); // Restart room 1
            break;
    }
}

void storyRoom2() {
    // Room 2 story
    cout << "\nYou enter Room 2. It's dark and cold.\n";
    cout << "You see a key on a table and a door to the garden.\n";
    cout << "What would you like to do? (1 = take key / 2 = open door)\n";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            // Player takes the key
            cout << "\nYou take the key. It might be useful later.\n";
            cout << "You cautiously proceed to the garden...\n";
            // Game over scenario (you win!)
            cout << "Congratulations! You escaped the house.\n";
            break;
        case 2:
            // Game over scenario
            gameOver();
            break;
        default:
            // Invalid input
            cout << "Invalid choice. Please enter 1 or 2.\n";
            storyRoom2(); // Restart room 2
            break;
    }
}

void storyRoom3() {
    // Room 3 story
    cout << "\nYou enter Room 3. You can hear mysterious and eerie sounds.\n";
    cout << "You see a black cat with its eyes shining and attracting you.\n";
    cout << "What would you like to do? (1 = approach the cat / 2 = run away)\n";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            // Approach the cat scenario
            cout << "\nYou slowly approach the cat and realize it's actually a friendly dog!\n";
            cout << "You find some biscuits in your pocket and give them to the dog.\n";
            cout << "The dog helps you escape the house.\n";
            // Game over scenario (you win!)
            cout << "Congratulations! You escaped the house.\n";
            break;
        case 2:
            // Game over scenario
            gameOver();
            break;
        default:
            // Invalid input
            cout << "Invalid choice. Please enter 1 or 2.\n";
            storyRoom3(); // Restart room 3
            break;
    }
}

void gameOver() {
    // Game over scenario
    cout << "\nOh no! You chose the wrong option and now you're trapped forever!\n";
    cout << "Game Over.\n";
}




// Explanation:
// Header Includes:

// #include <iostream>: For input and output operations (cout, cin).
// #include <string>: For using string data type.
// Namespace:

// using namespace std;: Allows us to use cout, cin, etc., without prefixing std::.
// Function Prototypes:

// void storyRoom1();: Prototype for the first room function.
// void storyRoom2();: Prototype for the second room function.
// void gameOver();: Prototype for the game over function.
// Main Function:

// Displays welcome message and initializes the game by calling storyRoom1().
// Function Definitions:

// storyRoom1(): Implements the first room's story. Asks the player to choose between two doors (Door 1 or Door 2). Depending on the player's choice, either calls storyRoom2() or gameOver(). Handles invalid input by recursively calling itself.

// storyRoom2(): Implements the second room's story. Asks the player to choose between taking a key (take key) or opening the garden door (open door). Depending on the player's choice, either outputs a success message (win scenario) or calls gameOver(). Handles invalid input by recursively calling itself.

// gameOver(): Prints a game over message when the player makes a wrong choice in either room.

// How to Play:
// The game starts in storyRoom1().
// Players make choices by entering 1 or 2 based on the prompts.
// Depending on their choices, they progress through different rooms or face a game over scenario.
// Invalid inputs prompt the player to enter a valid choice (1 or 2).
// This code provides a basic framework for a text-based adventure game in C++. Beginners can expand upon this by adding more rooms, items, and complex interactions as they become more comfortable with C++ programming concepts.

