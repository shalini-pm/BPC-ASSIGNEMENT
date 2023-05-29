#include <stdio.h>

void generateNumbersForLoop(int start, int end, int isOdd) {
    printf("Using for loop: ");
    for (int i = start; i <= end; i++) {
        if ((i % 2 == 0 && !isOdd) || (i % 2 != 0 && isOdd)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void generateNumbersWhileLoop(int start, int end, int isOdd) {
    printf("Using while loop: ");
    int i = start;
    while (i <= end) {
        if ((i % 2 == 0 && !isOdd) || (i % 2 != 0 && isOdd)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}

void generateNumbersDoWhileLoop(int start, int end, int isOdd) {
    printf("Using do-while loop: ");
    int i = start;
    do {
        if ((i % 2 == 0 && !isOdd) || (i % 2 != 0 && isOdd)) {
            printf("%d ", i);
        }
        i++;
    } while (i <= end);
    printf("\n");
}

int main() {
    int start, end, choice;

    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("Do you want to generate odd numbers (1) or even numbers (2)? ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            generateNumbersForLoop(start, end, 1);
            generateNumbersWhileLoop(start, end, 1);
            generateNumbersDoWhileLoop(start, end, 1);
            break;
        case 2:
            generateNumbersForLoop(start, end, 0);
            generateNumbersWhileLoop(start, end, 0);
            generateNumbersDoWhileLoop(start, end, 0);
            break;
        default:
            printf("Invalid choice. Program terminated.\n");
            break;
    }

return 0;
}