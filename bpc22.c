#include <iostream>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to generate and print prime numbers using do-while loop
void generatePrimes(int n) {
    std::cout << "Prime numbers using do-while loop: ";
    int num = 2;

    do {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
        num++;
    } while (num <= n);

    std::cout << std::endl;
}

// Function to generate and print Fibonacci series using while loop
void generateFibonacci(int n) {
    std::cout << "Fibonacci series using while loop: ";

    int prev = 0, curr = 1;
    int count = 0;

    while (count < n) {
        std::cout << prev << " ";

        int temp = prev + curr;
        prev = curr;
        curr = temp;

        count++;
    }

    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Enter the limit for prime numbers and Fibonacci series: ";
    std::cin >> n;

    generatePrimes(n);
    generateFibonacci(n);

    return 0;
}