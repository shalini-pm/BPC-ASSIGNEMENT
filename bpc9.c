#include <stdio.h>

void generateOddNumbers(int limit) {
    int number = 1;
    
    printf("Odd Numbers up to %d:\n", limit);
    
    while (number <= limit) {
        printf("%d ", number);
        number += 2;
    }
    
    printf("\n");
}

int main() {
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    generateOddNumbers(limit);
    
    return 0;
}