#include <iostream>

void generateNumbers(int start, int end, bool isOdd) {
    
    if (isOdd && start % 2 == 0) {
        start++;
    } else if (!isOdd && start % 2 != 0) {
        start++;
    }

     (int i = start; i <= end; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int start, end;
    char choice;

    std::cout << "Enter the starting range: ";
    std::cin >> start;

    std::cout << "Enter the ending range: ";
    std::cin >> end;

    std::cout << "Do you want to generate odd numbers (o) or even numbers (e)? ";
    std::cin >> choice;

    bool isOdd;
    if (choice == 'o' || choice == 'O') {
        isOdd = true;
        std::cout << "Generating odd numbers: ";
    } else if (choice == 'e' || choice == 'E') {
        isOdd = false;
        std::cout << "Generating even numbers: ";
    } else {
        std::cout << "Invalid choice. Program terminated." << std::endl;
        return 0;
    }

    generateNumbers(start, end, isOdd);

    return 0;
}