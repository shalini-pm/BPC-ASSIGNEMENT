#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 3 == 0) {
        printf("Hello world\n");
    } else if (number % 2 == 0) {
        printf("Hello\n");
    } else if (number % 3 == 0) {
        printf("World\n");
    } else {
        printf("Number is not divisible by 2 or 3\n");
    }

    return 0;
}
