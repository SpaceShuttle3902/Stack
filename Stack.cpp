#include "stack.h"
#include <stdexcept> // For exceptions
#include <numeric> // For calculating the sum of elements

// Constructor
Stack::Stack() {}

// Push an element onto the stack
void Stack::push(int value) {
    stack_data.push_back(value);
}

// Remove the top element from the stack
void Stack::pop() {
    if (empty()) {
        throw std::underflow_error("Stack is empty.");
    }
    stack_data.pop_back();
}

// Get the top element of the stack
int Stack::top() const {
    if (empty()) {
        throw std::underflow_error("Stack is empty.");
    }
    return stack_data.back();
}

// Check if the stack is empty
bool Stack::empty() const {
    return stack_data.empty();
}

// Find the average value of stack elements
double Stack::average() const {
    if (empty()) {
        throw std::underflow_error("Stack is empty. Cannot calculate average.");
    }
    // Calculate the sum of all elements
    int sum = std::accumulate(stack_data.begin(), stack_data.end(), 0);
    // Return average as double
    return static_cast<double>(sum) / stack_data.size();
}
