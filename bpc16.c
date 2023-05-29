#include <iostream>

int main() {
    int num1, num2;
    
    // Read the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    // Read the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    // Calculate the sum
    int sum = num1 + num2;
    
    // Print the result
    std::cout << "Sum: " << sum << std::endl;
    
    return 0;
}
