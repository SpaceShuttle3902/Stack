#include "stack.h"
#include <iostream>

int main() {
    Stack my_stack;

    // Check if the stack is empty
    std::cout << "Is the stack empty? " << std::boolalpha << my_stack.empty() << std::endl;

    // Push elements onto the stack
    my_stack.push(10);
    my_stack.push(20);
    my_stack.push(30);

    // Display the top element
    std::cout << "Top of the stack: " << my_stack.top() << std::endl;

    // Calculate and display the average
    std::cout << "Average value of stack elements: " << my_stack.average() << std::endl;

    // Remove an element from the stack
    my_stack.pop();
    std::cout << "Top of the stack after pop: " << my_stack.top() << std::endl;

    // Display if the stack is empty
    std::cout << "Is the stack empty after pop? " << std::boolalpha << my_stack.empty() << std::endl;

    return 0;
}
