#include <iostream>

int main() {
    char op;
    double num1, num2;
    

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    double result;
    
    
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
            return 1;
    }
    
  

