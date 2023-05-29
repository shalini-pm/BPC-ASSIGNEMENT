#include <stdio.h>
void generateNumbers(int limit, int isEven) {
    int number = 0;
    
    printf("%s Numbers up to %d:\n", isEven ? "Even" : "Odd", limit);
    
    while (number <= limit) {
        printf("%d ", number);
        number += 2;
        
        // If generating odd numbers
        if (!isEven)
            number ^= 1;
    }
    
    printf("\n");
}

int main() {
    int limit;
    int isEven;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printf("Enter 0 for Odd numbers or 1 for Even numbers: ");
    scanf("%d", &isEven);
    
    generateNumbers(limit, isEven);
    
    return 0;
}
