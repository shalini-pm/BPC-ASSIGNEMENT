#include <stdio.h>

int main() {
    int number = 5;
    int i;

    printf("Mathematical Table of %d:\n", number);

    for (i = 1; i <= 10; i++) {
        int result = number * i;
        
        if (result < 25) {
            printf("%d ", result);
        } else if (result % 2 != 0) {
            printf("%d ", result);
        }
    }

    printf("\n");

    return 0;
}
 