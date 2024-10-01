
#ifndef STACK_H
#define STACK_H

#include <vector> // For using std::vector

class Stack {
private:
    std::vector<int> stack_data; // Vector to store stack elements

public:
    // Constructor
    Stack();

    // Member functions
    void push(int value); // Push an element onto the stack
    void pop(); // Remove the top element from the stack
    int top() const; // Get the top element of the stack
    bool empty() const; // Check if the stack is empty
    double average() const; // Find the average value of stack elements
};

#endif
