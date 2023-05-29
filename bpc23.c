#include <iostream>

void generateNumbers(int n, bool isOdd) {
    switch (isOdd) {
        case true:
            std::cout << "Generating odd numbers: ";
            for (int i = 1; i <= n; i += 2) {
                std::cout << i << " ";
            }
            break;
        case false:
            std::cout << "Generating even numbers: ";
            for (int i = 2; i <= n; i += 2) {
                std::cout << i << " ";
            }
            break;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    char choice;

    std::cout << "Enter the value of 'n': ";
    std::cin >> n;

    std::cout << "Do you want to generate odd numbers (o) or even numbers (e)? ";
    std::cin >> choice;

    bool isOdd;
    switch (choice) {
        case 'o':
        case 'O':
            isOdd = true;
            break;
        case 'e':
        case 'E':
            isOdd = false;
            break;
        default:
            std::cout << "Invalid choice. Program terminated." << std::endl;
            return 0;
    }

    generateNumbers(n, isOdd);

    return 0;
}