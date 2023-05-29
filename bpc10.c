#include <stdio.h>

void generateDivisibleNumbers(int limit) {
    int number = 1;
    
    printf("Numbers divisible by 2 and 3 up to %d:\n", limit);
    
    while (number <= limit) {
        if (number % 2 == 0 && number % 3 == 0) {
            printf("%d (Pass) ", number);
        } else if (number % 2 == 0 || number % 3 == 0) {
            printf("%d ", number);
        }
        
        number++;
    }
    
    printf("\n");
}

int main() {
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    generateDivisibleNumbers(limit);
    
    return 0;
}