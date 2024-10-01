#include "stack.h"
#include <iostream>

// Function to display the menu
void displayMenu() {
    std::cout << "\nStack Operations Menu:\n";
    std::cout << "1. Push an element\n";
    std::cout << "2. Pop an element\n";
    std::cout << "3. Display top element\n";
    std::cout << "4. Check if stack is empty\n";
    std::cout << "5. Display average value of stack elements\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Stack my_stack;
    int choice; // User's menu choice

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            // Push an element onto the stack
            int value;
            std::cout << "Enter value to push onto stack: ";
            std::cin >> value;
            my_stack.push(value);
            std::cout << value << " pushed onto stack.\n";
            break;
        }
        case 2: {
            // Pop an element from the stack
            try {
                my_stack.pop();
                std::cout << "Top element popped from stack.\n";
            }
            catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            break;
        }
        case 3: {
            // Display the top element
            try {
                int top_value = my_stack.top();
                std::cout << "Top element of stack: " << top_value << std::endl;
            }
            catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            break;
        }
        case 4: {
            // Check if the stack is empty
            if (my_stack.empty()) {
                std::cout << "The stack is empty.\n";
            }
            else {
                std::cout << "The stack is not empty.\n";
            }
            break;
        }
        case 5: {
            // Display the average value of stack elements
            try {
                double avg = my_stack.average();
                std::cout << "Average value of stack elements: " << avg << std::endl;
            }
            catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
            break;
        }
        case 6: {
            // Exit the program
            std::cout << "Exiting program.\n";
            break;
        }
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
