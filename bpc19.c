#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if two command-line arguments are provided
    if (argc != 3) {
        printf("Please provide two numbers as command-line arguments.\n");
        return 1;
    }

    // Convert command-line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    // Check which number is larger using the relational operator
    if (num1 > num2) {
        printf("%d is larger than %d\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d is larger than %d\n", num2, num1);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
